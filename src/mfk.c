/*
 *  SPDX-License-Identifier: LGPL-2.1-or-later
 *
 *  Xiegu X6100 LVGL GUI
 *
 *  Copyright (c) 2022-2023 Belousov Oleg aka R1CBU
 */

#include "lvgl/lvgl.h"
#include "mfk.h"
#include "params.h"
#include "main_screen.h"
#include "waterfall.h"
#include "msg.h"
#include "dsp.h"
#include "radio.h"
#include "cw_key.h"
#include "cw.h"
#include "rtty.h"
#include "util.h"
#include "info.h"
#include "backlight.h"
#include "voice.h"
#include "dsp/agc.h"

mfk_state_t  mfk_state = MFK_STATE_EDIT;
mfk_mode_t   mfk_mode = MFK_FILTER_LOW;

void mfk_update(int16_t diff, bool voice) {
    int32_t     i;
    char        *str;
    bool        b;
    float       f;
    bool        update;

    uint32_t    color = mfk_state == MFK_STATE_EDIT ? 0xFFFFFF : 0xBBBBBB;

    switch (mfk_mode) {
        case MFK_FILTER_LOW:
            i = radio_change_filter_low(diff);
            msg_set_text_fmt("#%3X Filter low: %i Hz", color, i);

            if (diff) {
                voice_delay_say_text_fmt("%i", i);
            } else if (voice) {
                voice_say_text_fmt("Low filter limit");
            }
            break;

        case MFK_FILTER_HIGH:
            i = radio_change_filter_high(diff);
            msg_set_text_fmt("#%3X Filter high: %i Hz", color, i);

            if (diff) {
                voice_say_int("High filter limit", i);
            } else if (voice) {
                voice_say_text_fmt("High filter limit");
            }
            break;

        case MFK_FILTER_TRANSITION:
            i = radio_change_filter_transition(diff);
            msg_set_text_fmt("#%3X Filter transition: %i Hz", color, i);

            if (diff) {
                voice_say_int("Filter transition", i);
            } else if (voice) {
                voice_say_text_fmt("Filter transition");
            }
            break;

        case MFK_AGC:
            i = dsp_change_rx_agc(diff);
            
            switch (i) {
                case AGC_OFF:
                    str = "Off";
                    break;

                case AGC_LONG:
                    str = "Long";
                    break;
                    
                case AGC_SLOW:
                    str = "Slow";
                    break;
                    
                case AGC_MED:
                    str = "Medium";
                    break;

                case AGC_FAST:
                    str = "Fast";
                    break;

                case AGC_CUSTOM:
                    str = "Custom";
                    break;
            }
            
            msg_set_text_fmt("#%3X AGC mode: %s", color, str);

            if (diff) {
                info_params_set();
                voice_say_text("AGC mode", str);
            } else if (voice) {
                voice_say_text_fmt("AGC mode");
            }
            break;

        case MFK_SPECTRUM_FACTOR:
            if (diff != 0) {
                update = false;
                
                params_lock();
                params_mode.spectrum_factor += diff;
                
                if (params_mode.spectrum_factor < 1) {
                    params_mode.spectrum_factor = 1;
                } else if (params_mode.spectrum_factor > 4) {
                    params_mode.spectrum_factor = 4;
                } else {
                    update = true;
                }
                
                params_unlock(&params_mode.durty.spectrum_factor);
            
                if (update) {
                    dsp_set_spectrum_factor(params_mode.spectrum_factor);
                    main_screen_update_range();
                }
            }
            msg_set_text_fmt("#%3X Spectrum zoom: x%i", color, params_mode.spectrum_factor);

            if (diff) {
                voice_say_int("Spectrum zoom", params_mode.spectrum_factor);
            } else if (voice) {
                voice_say_text_fmt("Spectrum zoom");
            }
            break;

        case MFK_SPECTRUM_BETA:
            if (diff != 0) {
                params_lock();
                params.spectrum_beta += (diff < 0) ? -5 : 5;
                
                if (params.spectrum_beta < 0) {
                    params.spectrum_beta = 0;
                } else if (params.spectrum_beta > 90) {
                    params.spectrum_beta = 90;
                }
                params_unlock(&params.durty.spectrum_beta);
                dsp_set_spectrum_beta(params.spectrum_beta / 100.0f);
            }
            msg_set_text_fmt("#%3X Spectrum beta: %i", color, params.spectrum_beta);

            if (diff) {
                voice_say_int("Spectrum beta", params.spectrum_beta);
            } else if (voice) {
                voice_say_text_fmt("Spectrum beta");
            }
            break;

        case MFK_SPECTRUM_FILL:
            if (diff != 0) {
                params_lock();
                params.spectrum_filled = !params.spectrum_filled;
                params_unlock(&params.durty.spectrum_filled);
            }
            msg_set_text_fmt("#%3X Spectrum fill: %s", color, params.spectrum_filled ? "On" : "Off");

            if (diff) {
                voice_say_bool("Spectrum fill", params.spectrum_filled);
            } else if (voice) {
                voice_say_text_fmt("Spectrum fill switcher");
            }
            break;
            
        case MFK_SPECTRUM_PEAK:
            if (diff != 0) {
                params_lock();
                params.spectrum_peak = !params.spectrum_peak;
                params_unlock(&params.durty.spectrum_peak);
            }
            msg_set_text_fmt("#%3X Spectrum peak: %s", color, params.spectrum_peak ? "On" : "Off");

            if (diff) {
                voice_say_bool("Spectrum peak", params.spectrum_peak);
            } else if (voice) {
                voice_say_text_fmt("Spectrum peak switcher");
            }
            break;

        case MFK_PEAK_HOLD:
            if (diff != 0) {
                i = params.spectrum_peak_hold + diff * 1000;
                
                if (i < 1000) {
                    i = 1000;
                } else if (i > 10000) {
                    i = 10000;
                }
                
                params_lock();
                params.spectrum_peak_hold = i;
                params_unlock(&params.durty.spectrum_peak_hold);
            }
            msg_set_text_fmt("#%3X Peak hold: %i s", color, params.spectrum_peak_hold / 1000);

            if (diff) {
                voice_say_int("Peak hold time", params.spectrum_peak_hold / 1000);
            } else if (voice) {
                voice_say_text_fmt("Peak hold time");
            }
            break;
            
        case MFK_PEAK_SPEED:
            if (diff != 0) {
                f = params.spectrum_peak_speed + diff * 0.1f;
                
                if (f < 0.1f) {
                    f = 0.1f;
                } else if (f > 3.0f) {
                    f = 3.0f;
                }
                
                params_lock();
                params.spectrum_peak_speed = f;
                params_unlock(&params.durty.spectrum_peak_speed);
            }
            msg_set_text_fmt("#%3X Peak speed: %.1f dB", color, params.spectrum_peak_speed);

            if (diff) {
                voice_say_float("Peak speed time", params.spectrum_peak_speed);
            } else if (voice) {
                voice_say_text_fmt("Peak speed time");
            }
            break;
            
        case MFK_KEY_SPEED:
            i = cw_key_change_speed(diff);
            msg_set_text_fmt("#%3X Key speed: %i wpm", color, i);

            if (diff) {
                voice_say_int("CW key speed", i);
            } else if (voice) {
                voice_say_text_fmt("CW key speed");
            }
            break;

        case MFK_KEY_MODE:
            i = cw_key_change_mode(diff);
            
            switch (i) {
                case cw_key_manual:
                    str = "Manual";
                    break;

                case cw_key_auto_left:
                    str = "Auto-L";
                    break;

                case cw_key_auto_right:
                    str = "Auto-R";
                    break;
            }
            msg_set_text_fmt("#%3X Key mode: %s", color, str);

            if (diff) {
                voice_say_text("CW key mode", str);
            } else if (voice) {
                voice_say_text_fmt("CW key mode selector");
            }
            break;
            
        case MFK_IAMBIC_MODE:
            i = cw_key_change_iambic_mode(diff);
            
            switch (i) {
                case cw_key_iambic_a:
                    str = "A";
                    break;

                case cw_key_iambic_b:
                    str = "B";
                    break;
            }
            msg_set_text_fmt("#%3X Iambic mode: %s", color, str);

            if (diff) {
                voice_say_text("Iambic mode", str);
            } else if (voice) {
                voice_say_text_fmt("Iambic mode selector");
            }
            break;
            
        case MFK_KEY_TONE:
            i = cw_key_change_tone(diff);
            msg_set_text_fmt("#%3X Key tone: %i Hz", color, i);

            if (diff) {
                voice_say_int("CW key tone", i);
            } else if (voice) {
                voice_say_text_fmt("CW key tone");
            }
            break;

        case MFK_KEY_VOL:
            i = cw_key_change_vol(diff);
            msg_set_text_fmt("#%3X Key volume: %i", color, i);

            if (diff) {
                voice_say_int("CW key volume level", i);
            } else if (voice) {
                voice_say_text_fmt("CW key volume level");
            }
            break;

        case MFK_KEY_TRAIN:
            b = cw_key_change_train(diff);
            msg_set_text_fmt("#%3X Key train: %s", color, b ? "On" : "Off");

            if (diff) {
                voice_say_bool("CW key train", b);
            } else if (voice) {
                voice_say_text_fmt("CW key train switcher");
            }
            break;

        case MFK_QSK_TIME:
            i = cw_key_change_qsk_time(diff);
            msg_set_text_fmt("#%3X QSK time: %i ms", color, i);

            if (diff) {
                voice_say_int("CW key QSK time", i);
            } else if (voice) {
                voice_say_text_fmt("CW key QSK time");
            }
            break;

        case MFK_KEY_RATIO:
            i = cw_key_change_ratio(diff);
            msg_set_text_fmt("#%3X Key ratio: %.1f", color, i * 0.1f);

            if (diff) {
                voice_say_float("CW key ratio", i * 0.1f);
            } else if (voice) {
                voice_say_text_fmt("CW key ratio");
            }
            break;

        case MFK_ANT:
            if (diff != 0) {
                params_lock();
                params.ant = limit(params.ant + diff, 1, 5);
                params_unlock(&params.durty.ant);
                
                radio_load_atu();
                info_atu_update();
            }
            msg_set_text_fmt("#%3X Antenna : %i", color, params.ant);

            if (diff) {
                voice_say_int("Antenna", params.ant);
            } else if (voice) {
                voice_say_text_fmt("Antenna selector");
            }
            break;

        case MFK_DNF:
            b = radio_change_dnf(diff);
            msg_set_text_fmt("#%3X DNF: %s", color, b ? "On" : "Off");

            if (diff) {
                voice_say_bool("DNF", b);
            } else if (voice) {
                voice_say_text_fmt("DNF switcher");
            }
            break;

        case MFK_DNF_CENTER:
            i = radio_change_dnf_center(diff);
            msg_set_text_fmt("#%3X DNF center: %i Hz", color, i);

            if (diff) {
                voice_say_int("DNF center frequency", i);
            } else if (voice) {
                voice_say_text_fmt("DNF center frequency");
            }
            break;
            
        case MFK_DNF_WIDTH:
            i = radio_change_dnf_width(diff);
            msg_set_text_fmt("#%3X DNF width: %i Hz", color, i);

            if (diff) {
                voice_say_int("DNF width", i);
            } else if (voice) {
                voice_say_text_fmt("DNF width");
            }
            break;

        case MFK_NB:
            b = radio_change_nb(diff);
            msg_set_text_fmt("#%3X NB: %s", color, b ? "On" : "Off");

            if (diff) {
                voice_say_bool("NB", b);
            } else if (voice) {
                voice_say_text_fmt("NB switcher");
            }
            break;

        case MFK_NB_LEVEL:
            i = radio_change_nb_level(diff);
            msg_set_text_fmt("#%3X NB level: %i", color, i);

            if (diff) {
                voice_say_int("NB level", i);
            } else if (voice) {
                voice_say_text_fmt("NB level");
            }
            break;

        case MFK_NB_WIDTH:
            i = radio_change_nb_width(diff);
            msg_set_text_fmt("#%3X NB width: %i Hz", color, i);

            if (diff) {
                voice_say_int("NB width", i);
            } else if (voice) {
                voice_say_text_fmt("NB width");
            }
            break;

        case MFK_NR:
            b = radio_change_nr(diff);
            msg_set_text_fmt("#%3X NR: %s", color, b ? "On" : "Off");

            if (diff) {
                voice_say_bool("NR", b);
            } else if (voice) {
                voice_say_text_fmt("NR switcher");
            }
            break;

        case MFK_NR_LEVEL:
            i = radio_change_nr_level(diff);
            msg_set_text_fmt("#%3X NR level: %i", color, i);

            if (diff) {
                voice_say_int("NR level", i);
            } else if (voice) {
                voice_say_text_fmt("NR level");
            }
            break;

        case MFK_CW_DECODER:
            b = cw_change_decoder(diff);
            msg_set_text_fmt("#%3X CW decoder: %s", color, b ? "On" : "Off");

            if (diff) {
                voice_say_bool("CW decoder", b);
            } else if (voice) {
                voice_say_text_fmt("CW decoder switcher");
            }
            break;
            
        case MFK_CW_DECODER_SNR:
            f = cw_change_snr(diff);
            msg_set_text_fmt("#%3X CW decoder SNR: %.1f dB", color, f);

            if (diff) {
                voice_say_float("CW decoder SNR level", f);
            } else if (voice) {
                voice_say_text_fmt("CW decoder SNR level");
            }
            break;
            
        case MFK_CW_DECODER_PEAK_BETA:
            f = cw_change_peak_beta(diff);
            msg_set_text_fmt("#%3X CW decoder peak beta: %.2f", color, f);

            if (diff) {
                voice_say_float("CW decoder peak beta", f);
            } else if (voice) {
                voice_say_text_fmt("CW decoder peak beta");
            }
            break;
            
        case MFK_CW_DECODER_NOISE_BETA:
            f = cw_change_noise_beta(diff);
            msg_set_text_fmt("#%3X CW decoder noise beta: %.2f", color, f);

            if (diff) {
                voice_say_float("CW decoder noise beta", f);
            } else if (voice) {
                voice_say_text_fmt("CW decoder noise beta");
            }
            break;

        case MFK_RTTY_RATE:
            f = rtty_change_rate(diff);
            msg_set_text_fmt("#%3X RTTY rate: %.2f", color, f);

            if (diff) {
                voice_say_float2("Teletype rate", f);
            } else if (voice) {
                voice_say_text_fmt("Teletype rate");
            }
            break;

        case MFK_RTTY_SHIFT:
            i = rtty_change_shift(diff);
            msg_set_text_fmt("#%3X RTTY shift: %i Hz", color, i);

            if (diff) {
                voice_say_int("Teletype frequency shift", i);
            } else if (voice) {
                voice_say_text_fmt("Teletype frequency shift");
            }
            break;
        
        case MFK_RTTY_CENTER:
            i = rtty_change_center(diff);
            msg_set_text_fmt("#%3X RTTY center: %i Hz", color, i);

            if (diff) {
                voice_say_int("Teletype frequency center", i);
            } else if (voice) {
                voice_say_text_fmt("Teletype frequency center");
            }
            break;
        
        case MFK_RTTY_REVERSE:
            b = rtty_change_reverse(diff);
            msg_set_text_fmt("#%3X RTTY reverse: %s", color, b ? "On" : "Off");

            if (diff) {
                voice_say_bool("Teletype reverse", b);
            } else if (voice) {
                voice_say_text_fmt("Teletype reverse switcher");
            }
            break;

        default:
            break;
    }
}

void mfk_press(int16_t dir) {
    while (true) {
        if (dir > 0) {
            if (mfk_mode == MFK_LAST-1) {
                mfk_mode = 0;
            } else {
                mfk_mode++;
            }
        } else {
            if (mfk_mode == 0) {
                mfk_mode = MFK_LAST-1;
            } else {
                mfk_mode--;
            }
        }
        
        uint64_t mask = (uint64_t) 1L << mfk_mode;
        
        if (params.mfk_modes & mask) {
            break;
        }
    }
    
    mfk_update(0, true);
}

void mfk_set_mode(mfk_mode_t mode) {
    mfk_mode = mode;
}
