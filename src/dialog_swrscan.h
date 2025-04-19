/*
 *  SPDX-License-Identifier: LGPL-2.1-or-later
 *
 *  TRX Brass LVGL GUI
 *
 *  Copyright (c) 2022-2025 Belousov Oleg aka R1CBU
 */

#pragma once

#include "lvgl/lvgl.h"
#include "dialog.h"

extern dialog_t *dialog_swrscan;

void dialog_swrscan_run_cb(lv_event_t * e);
void dialog_swrscan_scale_cb(lv_event_t * e);
void dialog_swrscan_span_cb(lv_event_t * e);

void dialog_swrscan_update(float vswr);
