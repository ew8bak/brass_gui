/*
 *  SPDX-License-Identifier: LGPL-2.1-or-later
 *
 *  Xiegu X6100 LVGL GUI
 *
 *  Copyright (c) 2022-2023 Belousov Oleg aka R1CBU
 */

#include "lvgl/lvgl.h"
#include "lv_drivers/display/fbdev.h"
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>

#include "main.h"
#include "main_screen.h"
#include "styles.h"
#include "radio.h"
#include "dsp.h"
#include "util.h"
#include "keyboard.h"
#include "spectrum.h"
#include "waterfall.h"
#include "keypad.h"
#include "params.h"
#include "bands.h"
#include "audio.h"
#include "audio_adc.h"
#include "cw.h"
#include "pannel.h"
#include "cat.h"
#include "rtty.h"
#include "backlight.h"
#include "events.h"
#include "gps.h"
#include "fpga/fft.h"
#include "fpga/adc.h"
#include "python/python.h"

#define DISP_BUF_SIZE (800 * 480 * 3)

rotary_t                    *vol;
encoder_t                   *mfk;

static lv_color_t           buf[DISP_BUF_SIZE];
static lv_disp_draw_buf_t   disp_buf;
static lv_disp_drv_t        disp_drv;

int main(void) {

    lv_init();
    lv_png_init();
    
    fbdev_init();
    audio_init();
    audio_adc_init();
    event_init();
    
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, DISP_BUF_SIZE);
    lv_disp_drv_init(&disp_drv);
    
    disp_drv.draw_buf   = &disp_buf;
    disp_drv.flush_cb   = fbdev_flush;
    disp_drv.hor_res    = 800;
    disp_drv.ver_res    = 480;
    
    lv_disp_drv_register(&disp_drv);

    lv_disp_set_bg_color(lv_disp_get_default(), lv_color_black());
    lv_disp_set_bg_opa(lv_disp_get_default(), LV_OPA_COVER);

    lv_timer_t *timer = _lv_disp_get_refr_timer(lv_disp_get_default());
    
    lv_timer_set_period(timer, 15);

    keyboard_init();

    vol = rotary_init("/dev/input/event0", 1);
    mfk = encoder_init("/dev/input/event1");
    rotary_t *main = rotary_init("/dev/input/event2", 8);
    keypad_t *keypad = keypad_init("/dev/input/event3");
//    keypad_t *power = keypad_init("/dev/input/event4");

    vol->left[VOL_EDIT] = KEY_VOL_LEFT_EDIT;
    vol->right[VOL_EDIT] = KEY_VOL_RIGHT_EDIT;

    vol->left[VOL_SELECT] = KEY_VOL_LEFT_SELECT;
    vol->right[VOL_SELECT] = KEY_VOL_RIGHT_SELECT;

    params_init();
    styles_init();
    python_init();

    lv_obj_t *main_obj = main_screen();

    cw_init();
    dsp_init();
    rtty_init();
    radio_init(main_obj);
    fft_init();
    adc_init();

/*
    backlight_init();
    cat_init();
    pannel_visible();
    gps_init();
*/
    uint64_t prev_time = get_time();

    lv_scr_load(main_obj);

    while (1) {
        lv_timer_handler();
        event_obj_check();
        
        usleep(1000);
        
        uint64_t now = get_time();
        lv_tick_inc(now - prev_time);
        prev_time = now;
    }

    return 0;
}
