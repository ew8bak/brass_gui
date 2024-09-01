/*
 *  SPDX-License-Identifier: LGPL-2.1-or-later
 *
 *  TRX Brass LVGL GUI
 *
 *  Copyright (c) 2022-2024 Belousov Oleg aka R1CBU
 */

#include "lvgl/lvgl.h"
#include "python_lv.h"
#include "python_trx.h"
#include "src/msgs.h"
#include "src/events.h"
#include "src/widgets/lv_spectrum.h"

/* Spectrum */

static void spectrum_msg_cb(lv_event_t * e) {
    lv_obj_t *spectrum = lv_event_get_target(e);
    lv_msg_t *m = lv_event_get_msg(e);
    
    switch (lv_msg_get_id(m)) {
        case MSG_FREQ_FFT_SHIFT: {
            const int32_t *df = lv_msg_get_payload(m);

            lv_spectrum_scroll_data(spectrum, *df);
        } break;
        
        case MSG_RATE_FFT_CHANGED: {
            const uint8_t *zoom = lv_msg_get_payload(m);

            lv_spectrum_set_span(spectrum, 100000 / *zoom);
            lv_spectrum_clear_data(spectrum);
        } break;

        case MSG_SPECTRUM_AUTO: {
            const msgs_auto_t *msg = lv_msg_get_payload(m);

            lv_spectrum_set_min(spectrum, msg->min + 3.0f);
            lv_spectrum_set_max(spectrum, msg->max + 10.0f);
        } break;

        case MSG_SPECTRUM_DATA: {
            const msgs_floats_t *msg = lv_msg_get_payload(m);

            lv_spectrum_add_data(spectrum, msg->data);
            event_send(spectrum, LV_EVENT_REFRESH, NULL);
        } break;
    }
}

static PyObject * trx_connect_spectrum(PyObject *self, PyObject *args) {
    LV_LOG_INFO("begin");

    PyObject    *obj = NULL;

    if (PyArg_ParseTuple(args, "O", &obj)) {
        lv_obj_t *spectrum = python_lv_get_obj(obj);
    
        lv_obj_add_event_cb(spectrum, spectrum_msg_cb, LV_EVENT_MSG_RECEIVED, NULL);
        lv_msg_subsribe_obj(MSG_FREQ_FFT_SHIFT, spectrum, NULL);
        lv_msg_subsribe_obj(MSG_RATE_FFT_CHANGED, spectrum, NULL);
        lv_msg_subsribe_obj(MSG_SPECTRUM_AUTO, spectrum, NULL);
        lv_msg_subsribe_obj(MSG_SPECTRUM_DATA, spectrum, NULL);
    }

    Py_RETURN_NONE;
}

static PyMethodDef trx_methods[] = {
    { "connect_spectrum", (PyCFunction) trx_connect_spectrum, METH_VARARGS, "" },
    { NULL }
};

/* * */

static PyModuleDef trx_module = {
    PyModuleDef_HEAD_INIT,
    "trx",
    NULL,
    -1,
    trx_methods
};

PyMODINIT_FUNC PyInit_trx() {
    PyObject *m = PyModule_Create(&trx_module);

    return m;
}
