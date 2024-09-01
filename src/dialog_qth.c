/*
 *  SPDX-License-Identifier: LGPL-2.1-or-later
 *
 *  Xiegu X6100 LVGL GUI
 *
 *  Copyright (c) 2022-2023 Belousov Oleg aka R1CBU
 */

#include "textarea_window.h"
#include "params.h"
#include "main_screen.h"
#include "qth.h"
#include "msg.h"
#include "dialog.h"
#include "events.h"
#include "dsp.h"

static void construct_cb(lv_obj_t *parent);
static void destruct_cb();
static void key_cb(lv_event_t * e);

static dialog_t             dialog = {
    .run = false,
    .construct_cb = construct_cb,
    .destruct_cb = destruct_cb,
    .audio_cb = NULL,
    .key_cb = key_cb
};

dialog_t                    *dialog_qth = &dialog;

static void edit_ok() {
    const char *qth = textarea_window_get();

    if (grid_check(qth)) {
        qth_set(qth);
    } else {
        msg_set_text_fmt("Incorrect QTH Grid");
    }
}

static void construct_cb(lv_obj_t *parent) {
    dialog.obj = textarea_window_open(NULL, NULL);
    
    lv_obj_t *text = textarea_window_text();
    
    lv_textarea_set_accepted_chars(text, 
        "0123456789"
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    );

    lv_textarea_set_max_length(text, 6);
    lv_textarea_set_placeholder_text(text, "QTH Grid");
    lv_obj_add_event_cb(text, key_cb, LV_EVENT_KEY, NULL);

    textarea_window_set(params.qth.x);
}

static void destruct_cb() {
    textarea_window_close();
    dialog.obj = NULL;
}

static void key_cb(lv_event_t * e) {
    uint32_t key = *((uint32_t *)lv_event_get_param(e));

    switch (key) {
        case LV_KEY_ESC:
            dialog_destruct();
            break;

        case LV_KEY_ENTER:
            edit_ok();
            dialog_destruct();
            break;
            
        case KEY_VOL_LEFT_EDIT:
        case KEY_VOL_LEFT_SELECT:
            dsp_change_vol(-1);
            break;

        case KEY_VOL_RIGHT_EDIT:
        case KEY_VOL_RIGHT_SELECT:
            dsp_change_vol(1);
            break;
    }
}
