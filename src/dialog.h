/*
 *  SPDX-License-Identifier: LGPL-2.1-or-later
 *
 *  Xiegu X6100 LVGL GUI
 *
 *  Copyright (c) 2022-2023 Belousov Oleg aka R1CBU
 */

#pragma once

#include <liquid/liquid.h>
#include "lvgl/lvgl.h"

typedef void (*dialog_construct_cb_t)(lv_obj_t *);
typedef void (*dialog_destruct_cb_t)(void);
typedef void (*dialog_audio_cb_t)(float complex *samples, size_t n);
typedef void (*dialog_rotary_cb_t)(int32_t diff);

typedef struct {
    lv_obj_t                *obj;
    dialog_construct_cb_t   construct_cb;
    dialog_destruct_cb_t    destruct_cb;
    dialog_audio_cb_t       audio_cb;
    dialog_rotary_cb_t      rotary_cb;
    lv_event_cb_t           key_cb;
    bool                    run;
} dialog_t;

void dialog_construct(dialog_t *dialog, lv_obj_t *parent);
void dialog_destruct();

void dialog_send(lv_event_code_t event_code, void *param);
bool dialog_is_run();

lv_obj_t * dialog_init(lv_obj_t *parent);
void dialog_item(dialog_t *dialog, lv_obj_t *obj);
void dialog_rotary(int32_t diff);

/* From thread */

void dialog_audio_samples(float complex *samples, size_t n);
