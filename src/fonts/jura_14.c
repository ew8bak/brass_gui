/*******************************************************************************
 * Size: 14 px
 * Bpp: 4
 * Opts: --bpp 4 --size 14 --no-compress --font Jura.ttf --range 32-127 --format lvgl -o jura_14.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef JURA_14
#define JURA_14 1
#endif

#if JURA_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x8, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x5,
    0x0, 0xc,

    /* U+0022 "\"" */
    0x8, 0x80, 0x99, 0x9, 0x90, 0x55,

    /* U+0023 "#" */
    0x0, 0x8, 0x0, 0x80, 0x0, 0x9, 0x4, 0x50,
    0x0, 0x18, 0x8, 0x10, 0x7, 0xcb, 0xad, 0xa6,
    0x0, 0x80, 0x8, 0x0, 0x0, 0x90, 0x45, 0x0,
    0x4a, 0xda, 0xda, 0x80, 0x5, 0x40, 0x90, 0x0,
    0x8, 0x1, 0x80, 0x0, 0x8, 0x4, 0x40, 0x0,

    /* U+0024 "$" */
    0x9, 0xaf, 0xa9, 0x5, 0x40, 0x90, 0x45, 0x80,
    0x9, 0x1, 0x77, 0x10, 0x90, 0x1, 0x46, 0x9,
    0x0, 0x0, 0x79, 0xf9, 0x80, 0x0, 0x9, 0x2,
    0x75, 0x0, 0x90, 0x9, 0x90, 0x9, 0x1, 0x83,
    0xa9, 0xf9, 0xa1, 0x0, 0x9, 0x0, 0x0, 0x0,
    0x10, 0x0,

    /* U+0025 "%" */
    0x9, 0x9a, 0x0, 0x4, 0x50, 0x35, 0x4, 0x50,
    0x1a, 0x0, 0x44, 0x2, 0x60, 0xa1, 0x0, 0x44,
    0x2, 0x66, 0x50, 0x0, 0x26, 0x5, 0x69, 0x0,
    0x0, 0x7, 0x99, 0xa1, 0x99, 0x80, 0x0, 0x7,
    0x45, 0x40, 0x53, 0x0, 0x28, 0x6, 0x30, 0x45,
    0x0, 0xa0, 0x5, 0x30, 0x54, 0x6, 0x30, 0x1,
    0xa9, 0xa0,

    /* U+0026 "&" */
    0x0, 0x89, 0xa8, 0x0, 0x0, 0x18, 0x0, 0x81,
    0x0, 0x2, 0x70, 0x1, 0x0, 0x0, 0xa, 0x10,
    0x0, 0x0, 0x4, 0xaa, 0x10, 0x0, 0x0, 0xa0,
    0x1a, 0x22, 0x0, 0x17, 0x0, 0x1a, 0xb0, 0x1,
    0x70, 0x0, 0xf, 0x30, 0x9, 0x0, 0x1, 0x99,
    0x0, 0x3a, 0x99, 0x91, 0x0,

    /* U+0027 "'" */
    0x8, 0x9, 0x9, 0x5,

    /* U+0028 "(" */
    0x3, 0x93, 0x9, 0x0, 0x35, 0x0, 0x44, 0x0,
    0x44, 0x0, 0x44, 0x0, 0x44, 0x0, 0x44, 0x0,
    0x44, 0x0, 0x44, 0x0, 0x35, 0x0, 0xa, 0x0,
    0x3, 0xa3,

    /* U+0029 ")" */
    0x78, 0x0, 0x27, 0x0, 0x90, 0x9, 0x0, 0x90,
    0x9, 0x0, 0x90, 0x9, 0x0, 0x90, 0x9, 0x0,
    0x90, 0x28, 0x78, 0x0,

    /* U+002A "*" */
    0x0, 0x80, 0x0, 0xad, 0xa3, 0x8, 0xfb, 0x10,
    0x29, 0x12, 0x0, 0x10, 0x0,

    /* U+002B "+" */
    0x0, 0x1, 0x0, 0x0, 0x0, 0x90, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x9a, 0xfa, 0xa5, 0x0, 0x9,
    0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x6, 0x0,
    0x0,

    /* U+002C "," */
    0x13, 0x68, 0x72,

    /* U+002D "-" */
    0x9, 0xaa, 0xa3,

    /* U+002E "." */
    0x0, 0xc,

    /* U+002F "/" */
    0x0, 0x7, 0x10, 0x0, 0x90, 0x0, 0x9, 0x0,
    0x3, 0x60, 0x0, 0x72, 0x0, 0x9, 0x0, 0x0,
    0x90, 0x0, 0x26, 0x0, 0x6, 0x30, 0x0, 0x90,
    0x0, 0x9, 0x0, 0x2, 0x70, 0x0, 0x11, 0x0,
    0x0,

    /* U+0030 "0" */
    0x3, 0xa9, 0x9a, 0x50, 0x9, 0x0, 0x0, 0x91,
    0x17, 0x0, 0x0, 0x44, 0x26, 0x0, 0x0, 0x35,
    0x26, 0x0, 0x0, 0x35, 0x26, 0x4, 0x70, 0x35,
    0x26, 0x0, 0x0, 0x35, 0x17, 0x0, 0x0, 0x44,
    0x9, 0x0, 0x0, 0x81, 0x3, 0xa9, 0x9a, 0x50,

    /* U+0031 "1" */
    0x8, 0x66, 0x96, 0x43, 0x60, 0x36, 0x3, 0x60,
    0x36, 0x3, 0x60, 0x36, 0x3, 0x60, 0x26,

    /* U+0032 "2" */
    0x6, 0xaa, 0x9a, 0x30, 0x9, 0x0, 0x0, 0x90,
    0x13, 0x0, 0x0, 0x90, 0x0, 0x0, 0x0, 0xa0,
    0x0, 0x0, 0x2b, 0x20, 0x0, 0x6, 0xa1, 0x0,
    0x0, 0x96, 0x0, 0x0, 0x7, 0x40, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x0, 0xd, 0xaa, 0xaa, 0x90,

    /* U+0033 "3" */
    0x3, 0xa9, 0x9a, 0x20, 0x9, 0x0, 0x0, 0x90,
    0x7, 0x0, 0x0, 0x90, 0x0, 0x0, 0x0, 0x90,
    0x0, 0x0, 0x1, 0x80, 0x0, 0x8, 0xad, 0x30,
    0x0, 0x0, 0x0, 0x90, 0x11, 0x0, 0x0, 0x72,
    0x27, 0x0, 0x0, 0x90, 0x7, 0xaa, 0x9a, 0x60,

    /* U+0034 "4" */
    0x0, 0x0, 0xb, 0x0, 0x0, 0x8, 0xc0, 0x0,
    0x4, 0x79, 0x0, 0x1, 0xa0, 0x90, 0x0, 0x92,
    0x9, 0x0, 0x56, 0x0, 0x90, 0x1a, 0x0, 0x9,
    0x6, 0xba, 0xaa, 0xf7, 0x0, 0x0, 0x9, 0x0,
    0x0, 0x0, 0x80,

    /* U+0035 "5" */
    0xc, 0xaa, 0xaa, 0x90, 0x9, 0x0, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0,
    0xb, 0x9a, 0x99, 0x30, 0x5, 0x0, 0x0, 0xa0,
    0x0, 0x0, 0x0, 0x72, 0x2, 0x0, 0x0, 0x72,
    0x9, 0x0, 0x0, 0x90, 0x6, 0xa9, 0x9a, 0x60,

    /* U+0036 "6" */
    0x6, 0xaa, 0x9a, 0x50, 0xa, 0x0, 0x0, 0x90,
    0x27, 0x0, 0x0, 0x71, 0x26, 0x0, 0x0, 0x0,
    0x28, 0x99, 0xaa, 0x30, 0x2a, 0x0, 0x0, 0xa0,
    0x27, 0x0, 0x0, 0x72, 0x16, 0x0, 0x0, 0x62,
    0x8, 0x0, 0x0, 0x90, 0x5, 0x99, 0x9a, 0x60,

    /* U+0037 "7" */
    0x5a, 0xaa, 0xac, 0x0, 0x0, 0x9, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x93, 0x0, 0x9, 0x50, 0x0,
    0x55, 0x0, 0x0, 0x90, 0x0, 0x0, 0x90, 0x0,
    0x0, 0x80, 0x0, 0x1, 0x70, 0x0,

    /* U+0038 "8" */
    0x2, 0xa9, 0x9a, 0x50, 0x9, 0x0, 0x0, 0xa0,
    0x9, 0x0, 0x0, 0x80, 0x9, 0x0, 0x0, 0x80,
    0x8, 0x10, 0x0, 0x40, 0x4, 0xea, 0xad, 0xd0,
    0x9, 0x0, 0x0, 0x93, 0x27, 0x0, 0x0, 0x54,
    0x9, 0x0, 0x0, 0x71, 0x6, 0xa9, 0x99, 0x60,

    /* U+0039 "9" */
    0x5, 0xa9, 0x9a, 0x50, 0x9, 0x0, 0x0, 0x90,
    0x17, 0x0, 0x0, 0x72, 0x26, 0x0, 0x0, 0x62,
    0x17, 0x0, 0x0, 0x72, 0xa, 0x0, 0x0, 0xb2,
    0x3, 0x99, 0xa9, 0x82, 0x2, 0x0, 0x0, 0x62,
    0x9, 0x0, 0x0, 0x90, 0x6, 0xa9, 0xaa, 0x60,

    /* U+003A ":" */
    0xc, 0x0, 0x0, 0x0, 0x0, 0xc,

    /* U+003B ";" */
    0x38, 0x0, 0x0, 0x0, 0x13, 0x68, 0x72,

    /* U+003C "<" */
    0x0, 0x1, 0x91, 0x0, 0x6a, 0x20, 0x2a, 0x50,
    0x0, 0x4a, 0x10, 0x0, 0x1, 0x97, 0x0, 0x0,
    0x4, 0xa1, 0x0, 0x0, 0x0,

    /* U+003D "=" */
    0x9, 0xaa, 0xaa, 0x50, 0x0, 0x0, 0x0, 0x9,
    0xaa, 0xaa, 0x50,

    /* U+003E ">" */
    0x55, 0x0, 0x0, 0x5, 0xa2, 0x0, 0x0, 0x8,
    0x80, 0x0, 0x4, 0xb1, 0x2, 0xa6, 0x0, 0x59,
    0x10, 0x0, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x1a, 0x99, 0xa2, 0x81, 0x0, 0x9, 0x70, 0x0,
    0x9, 0x0, 0x0, 0x9, 0x0, 0x0, 0x84, 0x0,
    0x8, 0x50, 0x0, 0x18, 0x0, 0x0, 0x34, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x57, 0x0,

    /* U+0040 "@" */
    0x39, 0x9a, 0xa9, 0x93, 0x90, 0x99, 0x9b, 0xa,
    0x91, 0x80, 0xa, 0x9, 0x91, 0x70, 0x9, 0x9,
    0x90, 0x90, 0xb, 0x9, 0x90, 0x69, 0x95, 0x97,
    0x90, 0x0, 0x0, 0x2, 0x5a, 0x9a, 0xaa, 0xa5,

    /* U+0041 "A" */
    0x0, 0x4, 0x90, 0x0, 0x0, 0x0, 0xa9, 0x10,
    0x0, 0x0, 0x19, 0x36, 0x0, 0x0, 0x7, 0x30,
    0xa0, 0x0, 0x0, 0xa0, 0x6, 0x30, 0x0, 0x46,
    0x0, 0x9, 0x0, 0xa, 0xaa, 0xaa, 0xd0, 0x1,
    0x80, 0x0, 0x3, 0x60, 0x72, 0x0, 0x0, 0xa,
    0x4, 0x0, 0x0, 0x0, 0x30,

    /* U+0042 "B" */
    0xaa, 0xaa, 0xa8, 0x9, 0x0, 0x0, 0x71, 0x90,
    0x0, 0x5, 0x39, 0x0, 0x0, 0x81, 0xaa, 0xaa,
    0xbc, 0x9, 0x0, 0x0, 0x37, 0x90, 0x0, 0x0,
    0x99, 0x0, 0x0, 0x9, 0x90, 0x0, 0x1, 0x8a,
    0xaa, 0xa9, 0xa1,

    /* U+0043 "C" */
    0x19, 0x9a, 0x9a, 0x50, 0x81, 0x0, 0x0, 0x90,
    0x80, 0x0, 0x0, 0x51, 0x90, 0x0, 0x0, 0x0,
    0x90, 0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x0,
    0x90, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x51,
    0x81, 0x0, 0x0, 0x90, 0x19, 0x9a, 0x9a, 0x50,

    /* U+0044 "D" */
    0xaa, 0xa9, 0x99, 0x10, 0x90, 0x0, 0x1, 0xa0,
    0x90, 0x0, 0x0, 0x81, 0x90, 0x0, 0x0, 0x62,
    0x90, 0x0, 0x0, 0x63, 0x90, 0x0, 0x0, 0x63,
    0x90, 0x0, 0x0, 0x62, 0x90, 0x0, 0x0, 0x81,
    0x90, 0x0, 0x1, 0xa0, 0xaa, 0xa9, 0x99, 0x10,

    /* U+0045 "E" */
    0xaa, 0xaa, 0xa9, 0x19, 0x0, 0x0, 0x0, 0x90,
    0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x90, 0x0,
    0x0, 0xa, 0xaa, 0xa4, 0x0, 0x90, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0xa,
    0xaa, 0xaa, 0x91,

    /* U+0046 "F" */
    0xaa, 0xaa, 0xa7, 0x90, 0x0, 0x0, 0x90, 0x0,
    0x0, 0x90, 0x0, 0x0, 0x90, 0x0, 0x0, 0xaa,
    0xaa, 0x30, 0x90, 0x0, 0x0, 0x90, 0x0, 0x0,
    0x90, 0x0, 0x0, 0x80, 0x0, 0x0,

    /* U+0047 "G" */
    0x19, 0x9a, 0x9a, 0x50, 0x81, 0x0, 0x0, 0x90,
    0x80, 0x0, 0x0, 0x41, 0x90, 0x0, 0x0, 0x0,
    0x90, 0x0, 0x0, 0x0, 0x90, 0x0, 0x2a, 0xb2,
    0x90, 0x0, 0x0, 0x63, 0x80, 0x0, 0x0, 0x62,
    0x81, 0x0, 0x0, 0x90, 0x19, 0x9a, 0x99, 0x50,

    /* U+0048 "H" */
    0x80, 0x0, 0x0, 0x35, 0x90, 0x0, 0x0, 0x35,
    0x90, 0x0, 0x0, 0x35, 0x90, 0x0, 0x0, 0x35,
    0x90, 0x0, 0x0, 0x35, 0xaa, 0xaa, 0xaa, 0xb5,
    0x90, 0x0, 0x0, 0x35, 0x90, 0x0, 0x0, 0x35,
    0x90, 0x0, 0x0, 0x35, 0x80, 0x0, 0x0, 0x35,

    /* U+0049 "I" */
    0x89, 0x99, 0x99, 0x99, 0x98,

    /* U+004A "J" */
    0x0, 0x0, 0x8, 0x0, 0x0, 0x9, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x9, 0x0, 0x0, 0x9, 0x0,
    0x0, 0x9, 0x0, 0x0, 0x9, 0x70, 0x0, 0x9,
    0x72, 0x0, 0x18, 0x19, 0x99, 0x91,

    /* U+004B "K" */
    0x80, 0x0, 0x16, 0x9, 0x0, 0xa, 0x10, 0x90,
    0xa, 0x20, 0x9, 0x9, 0x30, 0x0, 0x98, 0xa0,
    0x0, 0xb, 0x56, 0x50, 0x0, 0x90, 0x9, 0x20,
    0x9, 0x0, 0xa, 0x0, 0x90, 0x0, 0x29, 0x8,
    0x0, 0x0, 0x52,

    /* U+004C "L" */
    0x80, 0x0, 0x0, 0x90, 0x0, 0x0, 0x90, 0x0,
    0x0, 0x90, 0x0, 0x0, 0x90, 0x0, 0x0, 0x90,
    0x0, 0x0, 0x90, 0x0, 0x0, 0x90, 0x0, 0x0,
    0x90, 0x0, 0x0, 0xaa, 0xaa, 0xa4,

    /* U+004D "M" */
    0xa1, 0x0, 0x0, 0x4, 0x7a, 0x90, 0x0, 0x0,
    0xc7, 0x97, 0x30, 0x0, 0x75, 0x79, 0xa, 0x0,
    0x19, 0x17, 0x90, 0x55, 0x9, 0x11, 0x79, 0x0,
    0xa3, 0x70, 0x17, 0x90, 0x2, 0xd0, 0x1, 0x79,
    0x0, 0x0, 0x0, 0x17, 0x90, 0x0, 0x0, 0x1,
    0x78, 0x0, 0x0, 0x0, 0x17,

    /* U+004E "N" */
    0xa1, 0x0, 0x0, 0x35, 0xaa, 0x0, 0x0, 0x35,
    0x94, 0x70, 0x0, 0x35, 0x90, 0x92, 0x0, 0x35,
    0x90, 0xa, 0x0, 0x35, 0x90, 0x3, 0x80, 0x35,
    0x90, 0x0, 0x83, 0x35, 0x90, 0x0, 0xa, 0x45,
    0x90, 0x0, 0x2, 0xc5, 0x80, 0x0, 0x0, 0x75,

    /* U+004F "O" */
    0x19, 0x9a, 0x99, 0x60, 0x81, 0x0, 0x0, 0x72,
    0x80, 0x0, 0x0, 0x26, 0x90, 0x0, 0x0, 0x17,
    0x90, 0x0, 0x0, 0x17, 0x90, 0x0, 0x0, 0x17,
    0x90, 0x0, 0x0, 0x17, 0x80, 0x0, 0x0, 0x26,
    0x81, 0x0, 0x0, 0x72, 0x19, 0x9a, 0x99, 0x60,

    /* U+0050 "P" */
    0xaa, 0xa9, 0xa5, 0x9, 0x0, 0x0, 0x90, 0x90,
    0x0, 0x6, 0x29, 0x0, 0x0, 0x72, 0x90, 0x0,
    0xa, 0xa, 0xaa, 0x99, 0x30, 0x90, 0x0, 0x0,
    0x9, 0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x8,
    0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x19, 0x9a, 0x99, 0x60, 0x81, 0x0, 0x0, 0x72,
    0x80, 0x0, 0x0, 0x26, 0x90, 0x0, 0x0, 0x17,
    0x90, 0x0, 0x0, 0x17, 0x90, 0x0, 0x0, 0x17,
    0x90, 0x0, 0x0, 0x17, 0x80, 0x0, 0x0, 0x26,
    0x81, 0x0, 0x8, 0x92, 0x19, 0x9a, 0x9a, 0xf1,
    0x0, 0x0, 0x0, 0x13,

    /* U+0052 "R" */
    0xaa, 0xa9, 0xa5, 0x9, 0x0, 0x0, 0x90, 0x90,
    0x0, 0x6, 0x29, 0x0, 0x0, 0x72, 0x90, 0x0,
    0xa, 0xa, 0xaa, 0xab, 0x30, 0x90, 0x0, 0xa0,
    0x9, 0x0, 0x6, 0x50, 0x90, 0x0, 0xa, 0x8,
    0x0, 0x0, 0x35,

    /* U+0053 "S" */
    0x1a, 0x9a, 0x9a, 0x30, 0x72, 0x0, 0x0, 0x90,
    0x90, 0x0, 0x0, 0x90, 0x90, 0x0, 0x0, 0x10,
    0x73, 0x0, 0x0, 0x0, 0x8, 0x9a, 0x99, 0x20,
    0x0, 0x0, 0x0, 0xa0, 0x50, 0x0, 0x0, 0x90,
    0x90, 0x0, 0x0, 0xa0, 0x3a, 0x9a, 0x9a, 0x40,

    /* U+0054 "T" */
    0x7a, 0xac, 0xba, 0xa4, 0x0, 0x7, 0x20, 0x0,
    0x0, 0x7, 0x20, 0x0, 0x0, 0x7, 0x20, 0x0,
    0x0, 0x7, 0x20, 0x0, 0x0, 0x7, 0x20, 0x0,
    0x0, 0x7, 0x20, 0x0, 0x0, 0x7, 0x20, 0x0,
    0x0, 0x7, 0x20, 0x0, 0x0, 0x6, 0x20, 0x0,

    /* U+0055 "U" */
    0x80, 0x0, 0x0, 0x7, 0x90, 0x0, 0x0, 0x8,
    0x90, 0x0, 0x0, 0x8, 0x90, 0x0, 0x0, 0x8,
    0x90, 0x0, 0x0, 0x8, 0x90, 0x0, 0x0, 0x8,
    0x90, 0x0, 0x0, 0x8, 0x90, 0x0, 0x0, 0x17,
    0x72, 0x0, 0x0, 0x63, 0x9, 0x99, 0x99, 0x70,

    /* U+0056 "V" */
    0x80, 0x0, 0x0, 0x7, 0x16, 0x30, 0x0, 0x0,
    0xa0, 0x19, 0x0, 0x0, 0x45, 0x0, 0x90, 0x0,
    0x9, 0x0, 0x3, 0x60, 0x1, 0x80, 0x0, 0xa,
    0x0, 0x72, 0x0, 0x0, 0x73, 0xa, 0x0, 0x0,
    0x1, 0x94, 0x60, 0x0, 0x0, 0x9, 0xa0, 0x0,
    0x0, 0x0, 0x39, 0x0, 0x0,

    /* U+0057 "W" */
    0x80, 0x0, 0x8, 0x40, 0x0, 0x7, 0x81, 0x0,
    0xa, 0x80, 0x0, 0x54, 0x45, 0x0, 0x18, 0x90,
    0x0, 0x90, 0x9, 0x0, 0x63, 0x81, 0x0, 0x90,
    0x9, 0x0, 0x90, 0x36, 0x3, 0x60, 0x6, 0x30,
    0x90, 0x9, 0x7, 0x20, 0x1, 0x83, 0x60, 0x9,
    0x9, 0x0, 0x0, 0x97, 0x20, 0x6, 0x48, 0x0,
    0x0, 0x8b, 0x0, 0x1, 0xd4, 0x0, 0x0, 0x38,
    0x0, 0x0, 0xb0, 0x0,

    /* U+0058 "X" */
    0x12, 0x0, 0x0, 0x40, 0xa, 0x0, 0x2, 0x90,
    0x3, 0x70, 0xa, 0x0, 0x0, 0x82, 0x83, 0x0,
    0x0, 0xb, 0x80, 0x0, 0x0, 0xb, 0x70, 0x0,
    0x0, 0x82, 0x83, 0x0, 0x3, 0x70, 0xa, 0x0,
    0xa, 0x0, 0x3, 0x70, 0x63, 0x0, 0x0, 0x81,
    0x0, 0x0, 0x0, 0x0,

    /* U+0059 "Y" */
    0x40, 0x0, 0x0, 0x30, 0x83, 0x0, 0x1, 0xa0,
    0xa, 0x0, 0x9, 0x20, 0x5, 0x50, 0x38, 0x0,
    0x0, 0xa0, 0xa0, 0x0, 0x0, 0x2c, 0x50, 0x0,
    0x0, 0xa, 0x0, 0x0, 0x0, 0x9, 0x0, 0x0,
    0x0, 0x9, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0,

    /* U+005A "Z" */
    0xa, 0x9a, 0xaa, 0xc6, 0x54, 0x0, 0x0, 0xb0,
    0x10, 0x0, 0x8, 0x30, 0x0, 0x0, 0x38, 0x0,
    0x0, 0x0, 0xb0, 0x0, 0x0, 0x8, 0x30, 0x0,
    0x0, 0x38, 0x0, 0x0, 0x0, 0xb0, 0x0, 0x1,
    0x8, 0x40, 0x0, 0x9, 0x1e, 0xaa, 0xaa, 0xa3,

    /* U+005B "[" */
    0x3a, 0x34, 0x40, 0x44, 0x4, 0x40, 0x44, 0x4,
    0x40, 0x44, 0x4, 0x40, 0x44, 0x4, 0x40, 0x44,
    0x4, 0x40, 0x3b, 0x30,

    /* U+005C "\\" */
    0x35, 0x0, 0x0, 0x90, 0x0, 0x9, 0x0, 0x0,
    0x81, 0x0, 0x4, 0x40, 0x0, 0x18, 0x0, 0x0,
    0x90, 0x0, 0x8, 0x0, 0x0, 0x54, 0x0, 0x1,
    0x80, 0x0, 0x9, 0x0, 0x0, 0x90, 0x0, 0x2,
    0x0,

    /* U+005D "]" */
    0x7a, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9,
    0x9, 0x9, 0x9, 0x9, 0x7a,

    /* U+005E "^" */
    0x0, 0xe2, 0x0, 0x47, 0x80, 0x9, 0xa, 0x0,
    0x80, 0x62,

    /* U+005F "_" */
    0x2a, 0xaa, 0x70,

    /* U+0060 "`" */
    0x0, 0x2, 0x80, 0x7, 0x40, 0x1,

    /* U+0061 "a" */
    0x4a, 0xaa, 0xa3, 0x60, 0x0, 0x8, 0x29, 0x9a,
    0xad, 0x90, 0x0, 0x9, 0x90, 0x0, 0xa, 0x90,
    0x0, 0x1e, 0x4a, 0x9a, 0x89,

    /* U+0062 "b" */
    0x80, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x90,
    0x0, 0x0, 0x9, 0x7a, 0xaa, 0x70, 0xb2, 0x0,
    0x8, 0x29, 0x0, 0x0, 0x44, 0x90, 0x0, 0x4,
    0x59, 0x0, 0x0, 0x44, 0xb2, 0x0, 0x8, 0x28,
    0x7a, 0xaa, 0x70,

    /* U+0063 "c" */
    0x2a, 0x99, 0xa5, 0x90, 0x0, 0x7, 0x90, 0x0,
    0x0, 0x90, 0x0, 0x0, 0x90, 0x0, 0x0, 0x90,
    0x0, 0x7, 0x2a, 0x99, 0xa5,

    /* U+0064 "d" */
    0x0, 0x0, 0x6, 0x20, 0x0, 0x0, 0x62, 0x0,
    0x0, 0x6, 0x22, 0xaa, 0xaa, 0xc2, 0x90, 0x0,
    0x6, 0x29, 0x0, 0x0, 0x62, 0x90, 0x0, 0x6,
    0x29, 0x0, 0x0, 0x62, 0x90, 0x0, 0xb, 0x22,
    0xa9, 0xaa, 0x82,

    /* U+0065 "e" */
    0x2a, 0x99, 0xa5, 0x9, 0x0, 0x0, 0x90, 0x90,
    0x0, 0x7, 0x2c, 0xaa, 0xaa, 0xb1, 0x90, 0x0,
    0x0, 0x9, 0x0, 0x0, 0x81, 0x2a, 0x99, 0xa7,
    0x0,

    /* U+0066 "f" */
    0x1, 0xa9, 0x0, 0x81, 0x0, 0x9, 0x0, 0x5,
    0xda, 0x90, 0x9, 0x0, 0x0, 0x90, 0x0, 0x9,
    0x0, 0x0, 0x90, 0x0, 0x9, 0x0, 0x0, 0x80,
    0x0,

    /* U+0067 "g" */
    0x2a, 0xaa, 0xaa, 0x29, 0x0, 0x0, 0x92, 0x90,
    0x0, 0x6, 0x29, 0x0, 0x0, 0x62, 0x90, 0x0,
    0x6, 0x29, 0x0, 0x0, 0xb2, 0x2a, 0x9a, 0xa8,
    0x20, 0x0, 0x0, 0x62, 0x70, 0x0, 0x7, 0x26,
    0xaa, 0xa9, 0x90,

    /* U+0068 "h" */
    0x80, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x90,
    0x0, 0x0, 0x9, 0x7a, 0xaa, 0x50, 0xb3, 0x0,
    0x9, 0x9, 0x0, 0x0, 0x72, 0x90, 0x0, 0x6,
    0x29, 0x0, 0x0, 0x62, 0x90, 0x0, 0x6, 0x28,
    0x0, 0x0, 0x62,

    /* U+0069 "i" */
    0xe, 0x10, 0x20, 0x0, 0x0, 0x80, 0x9, 0x0,
    0x90, 0x9, 0x0, 0x90, 0x9, 0x0, 0x80,

    /* U+006A "j" */
    0x0, 0xe1, 0x0, 0x20, 0x0, 0x0, 0x0, 0x80,
    0x0, 0x90, 0x0, 0x90, 0x0, 0x90, 0x0, 0x90,
    0x0, 0x90, 0x0, 0x90, 0x0, 0x90, 0x0, 0x90,
    0x2a, 0x50,

    /* U+006B "k" */
    0x80, 0x0, 0x0, 0x90, 0x0, 0x0, 0x90, 0x0,
    0x0, 0x90, 0x1, 0x90, 0x90, 0x1a, 0x10, 0x92,
    0xa1, 0x0, 0xaa, 0x90, 0x0, 0x90, 0x57, 0x0,
    0x90, 0x7, 0x40, 0x80, 0x0, 0x91, 0x0, 0x0,
    0x0,

    /* U+006C "l" */
    0x80, 0x9, 0x0, 0x90, 0x9, 0x0, 0x90, 0x9,
    0x0, 0x90, 0x9, 0x0, 0x90, 0x4, 0xa3,

    /* U+006D "m" */
    0x88, 0xaa, 0x76, 0xaa, 0xa1, 0xb1, 0x0, 0x96,
    0x0, 0x36, 0x90, 0x0, 0x63, 0x0, 0x18, 0x90,
    0x0, 0x63, 0x0, 0x18, 0x90, 0x0, 0x63, 0x0,
    0x18, 0x90, 0x0, 0x63, 0x0, 0x18, 0x80, 0x0,
    0x62, 0x0, 0x7,

    /* U+006E "n" */
    0x87, 0xaa, 0xa5, 0xb, 0x30, 0x0, 0x90, 0x90,
    0x0, 0x7, 0x29, 0x0, 0x0, 0x62, 0x90, 0x0,
    0x6, 0x29, 0x0, 0x0, 0x62, 0x80, 0x0, 0x6,
    0x20,

    /* U+006F "o" */
    0x2a, 0xaa, 0xa5, 0x9, 0x0, 0x0, 0x90, 0x90,
    0x0, 0x7, 0x29, 0x0, 0x0, 0x62, 0x90, 0x0,
    0x7, 0x29, 0x0, 0x0, 0x90, 0x2a, 0x99, 0xa5,
    0x0,

    /* U+0070 "p" */
    0x87, 0xaa, 0xa7, 0xb, 0x30, 0x0, 0x82, 0x90,
    0x0, 0x4, 0x49, 0x0, 0x0, 0x45, 0x90, 0x0,
    0x4, 0x49, 0x0, 0x0, 0x82, 0xaa, 0xa9, 0xa7,
    0x9, 0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x8,
    0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x2a, 0xaa, 0xa8, 0x29, 0x0, 0x0, 0xb2, 0x90,
    0x0, 0x6, 0x29, 0x0, 0x0, 0x62, 0x90, 0x0,
    0x6, 0x29, 0x0, 0x0, 0x62, 0x2a, 0x9a, 0xac,
    0x20, 0x0, 0x0, 0x62, 0x0, 0x0, 0x6, 0x20,
    0x0, 0x0, 0x62,

    /* U+0072 "r" */
    0x83, 0xa8, 0xa7, 0x0, 0xb0, 0x0, 0x90, 0x0,
    0x90, 0x0, 0x90, 0x0, 0x80, 0x0,

    /* U+0073 "s" */
    0x8, 0xaa, 0xaa, 0x20, 0x90, 0x0, 0x6, 0x9,
    0x0, 0x0, 0x0, 0x69, 0xaa, 0xa2, 0x0, 0x0,
    0x0, 0x91, 0x60, 0x0, 0x9, 0x9, 0x9a, 0xaa,
    0x40,

    /* U+0074 "t" */
    0x8, 0x0, 0x0, 0x80, 0x0, 0x6d, 0xaa, 0x0,
    0x80, 0x0, 0x8, 0x0, 0x0, 0x80, 0x0, 0x8,
    0x10, 0x0, 0x53, 0x0, 0x0, 0x99, 0x10,

    /* U+0075 "u" */
    0x80, 0x0, 0x8, 0x9, 0x0, 0x0, 0x80, 0x90,
    0x0, 0x8, 0x9, 0x0, 0x0, 0x80, 0x90, 0x0,
    0x9, 0x9, 0x0, 0x0, 0xd0, 0x2a, 0x9a, 0x99,
    0x0,

    /* U+0076 "v" */
    0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x27, 0x36,
    0x0, 0x9, 0x10, 0xa0, 0x1, 0x90, 0x5, 0x40,
    0x72, 0x0, 0xa, 0x9, 0x0, 0x0, 0x88, 0x40,
    0x0, 0x1, 0xd0, 0x0,

    /* U+0077 "w" */
    0x40, 0x0, 0x92, 0x0, 0x22, 0x71, 0x0, 0xc7,
    0x0, 0x81, 0x26, 0x3, 0x69, 0x0, 0x90, 0x9,
    0x7, 0x18, 0x4, 0x50, 0x8, 0x18, 0x4, 0x48,
    0x0, 0x3, 0x76, 0x0, 0x88, 0x0, 0x0, 0xe1,
    0x0, 0xc4, 0x0,

    /* U+0078 "x" */
    0x0, 0x0, 0x0, 0x1, 0x70, 0x0, 0x80, 0x7,
    0x30, 0x65, 0x0, 0xa, 0x48, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0xa, 0x66, 0x0, 0x8, 0x30, 0x82,
    0x3, 0x60, 0x0, 0x90, 0x0, 0x0, 0x0, 0x0,

    /* U+0079 "y" */
    0x80, 0x0, 0x8, 0x90, 0x0, 0x9, 0x90, 0x0,
    0x9, 0x90, 0x0, 0x9, 0x90, 0x0, 0x9, 0x90,
    0x0, 0x1d, 0x2a, 0x99, 0x9a, 0x10, 0x0, 0x9,
    0x90, 0x0, 0x9, 0x6a, 0xaa, 0xa6,

    /* U+007A "z" */
    0x1a, 0xaa, 0xae, 0x4, 0x30, 0x6, 0x50, 0x0,
    0x3, 0x90, 0x0, 0x1, 0xa0, 0x0, 0x0, 0xa2,
    0x0, 0x0, 0x65, 0x0, 0x6, 0x1e, 0xaa, 0xaa,
    0x30,

    /* U+007B "{" */
    0x0, 0x5a, 0x10, 0x9, 0x0, 0x2, 0x60, 0x0,
    0x36, 0x0, 0x3, 0x60, 0x0, 0x66, 0x0, 0x4a,
    0x0, 0x0, 0x85, 0x0, 0x3, 0x60, 0x0, 0x36,
    0x0, 0x2, 0x60, 0x0, 0x8, 0x0, 0x0, 0x5a,
    0x20,

    /* U+007C "|" */
    0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x30,

    /* U+007D "}" */
    0x79, 0x0, 0x2, 0x60, 0x0, 0x80, 0x0, 0x90,
    0x0, 0x90, 0x0, 0xb1, 0x0, 0x4a, 0x0, 0xb2,
    0x0, 0x90, 0x0, 0x90, 0x0, 0x90, 0x2, 0x60,
    0x89, 0x0,

    /* U+007E "~" */
    0x5, 0x98, 0x0, 0x60, 0x70, 0x29, 0x92
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 46, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 61, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 16, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 98, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 134, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 41, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 197, .adv_w = 57, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 223, .adv_w = 57, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 243, .adv_w = 86, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 256, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 281, .adv_w = 42, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 284, .adv_w = 103, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 287, .adv_w = 46, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 78, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 322, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 77, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 126, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 116, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 46, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 42, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 695, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 716, .adv_w = 122, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 727, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 748, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 134, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 135, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 147, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 147, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1115, .adv_w = 50, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 172, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1300, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1375, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1419, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1454, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1494, .adv_w = 124, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1534, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1574, .adv_w = 134, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1619, .adv_w = 188, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1679, .adv_w = 125, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1723, .adv_w = 115, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1763, .adv_w = 133, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1803, .adv_w = 42, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1823, .adv_w = 78, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1856, .adv_w = 42, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1869, .adv_w = 83, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1879, .adv_w = 95, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1882, .adv_w = 52, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1888, .adv_w = 130, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1909, .adv_w = 135, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1944, .adv_w = 126, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1965, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2000, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2025, .adv_w = 69, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2050, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2085, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2120, .adv_w = 50, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2135, .adv_w = 50, .box_w = 4, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2161, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2194, .adv_w = 61, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2209, .adv_w = 187, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2244, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2269, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2294, .adv_w = 135, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2329, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2364, .adv_w = 81, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2378, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2403, .adv_w = 76, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2426, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2451, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2479, .adv_w = 153, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2514, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2546, .adv_w = 131, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2576, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2601, .adv_w = 71, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2634, .adv_w = 45, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2641, .adv_w = 71, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2667, .adv_w = 122, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 2, 0, 0, 0, 0, 3, 0,
    4, 5, 6, 7, 8, 9, 0, 0,
    10, 0, 0, 11, 11, 0, 3, 0,
    0, 0, 12, 13, 14, 15, 16, 17,
    14, 18, 18, 19, 20, 21, 18, 18,
    15, 22, 15, 23, 1, 24, 19, 25,
    25, 26, 27, 28, 2, 29, 0, 0,
    0, 0, 30, 31, 32, 33, 31, 34,
    35, 30, 0, 0, 36, 37, 30, 30,
    31, 31, 0, 38, 39, 40, 35, 41,
    41, 42, 35, 43, 2, 18, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 0,
    1, 0, 0, 3, 0, 0, 4, 0,
    5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 16, 0, 0, 0,
    17, 0, 18, 0, 19, 0, 0, 0,
    19, 0, 0, 20, 0, 0, 0, 0,
    19, 0, 19, 0, 2, 21, 0, 22,
    22, 23, 24, 25, 0, 26, 0, 3,
    0, 0, 27, 28, 29, 29, 29, 0,
    29, 28, 0, 30, 28, 28, 31, 31,
    29, 31, 29, 31, 32, 33, 34, 35,
    35, 36, 34, 37, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, -16, -4,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, -4, 0, 0, -11, 0, 0, -4,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -4, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, -4, 0, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, -31, -20,
    -20, -25, -16, 0, 0, 0, -7, 0,
    -11, 0, 0, 0, 0, -13, 0, 0,
    0, 0, 0, 0, -7, -7, -7, 0,
    -11, 0, 0, 0, -2, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, -4, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -7, -2, 0, -7, 0, -4, -16,
    0, 0, -4, 0, 0, 0, 0, 0,
    -4, -7, 0, 0, 0, 0, 0, -2,
    0, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, -11, 0, -9, 0, -4, -18, 0,
    0, 0, 0, -2, -7, 0, -13, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, -9, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -22,
    -7, -22, 0, 0, 0, -16, 0, -2,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, -2, 0, -18, -7, 0, -11, 0,
    0, 0, -4, -4, 0, -2, 0, 0,
    -4, -4, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    -4, 0, -7, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -4, 0, 0, -4, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -7, 0, 0, 0, -11, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 0, -2,
    0, -2, -9, -4, -4, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, -7, 0, -7,
    0, 0, -7, 0, 0, -9, 0, 0,
    0, -4, 0, 0, 0, 0, -4, -2,
    0, -11, 0, 0, -7, 0, 0, 0,
    0, -18, -2, -18, 2, 0, 0, 7,
    0, 0, -11, 0, -16, 0, -16, -13,
    0, -11, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -16, 0, 0, -9, 0, 0,
    -2, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -7, 0, 0, 0, 0,
    -4, -7, 0, 0, -27, 0, -38, -27,
    0, 0, -18, 0, 0, 0, -2, -2,
    -16, -2, -4, 0, 0, 0, -4, 0,
    -20, -16, 0, -22, 0, 0, -4, 0,
    0, 0, 0, 0, -9, -4, -18, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -2, -7, -18, 0, 0, -4, 0, 0,
    0, 0, -13, 0, -11, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -4,
    0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -2, 0, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, -4, -2, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -31, 0,
    0, -4, 0, -4, -25, 0, 0, 0,
    -9, 0, -18, 0, -18, -9, -22, 0,
    4, 0, 4, 0, 0, -25, -4, -25,
    0, -20, -25, 0, -25, -20, -22, -25,
    0, -7, 0, -16, 0, 0, -4, 0,
    0, -9, 0, 0, 0, -2, 0, -11,
    0, -7, -4, -16, 2, 0, 0, 4,
    0, 0, -13, 0, -16, 0, -4, -11,
    0, -7, 0, 0, 0, 0, 0, 0,
    -20, 0, 0, -7, 0, 0, -2, 0,
    0, -2, -7, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -9, 0, 0, 0, 0, -7, -9,
    0, 0, 0, -7, 0, -25, 0, 0,
    -9, -4, -4, -16, 0, 0, 0, -9,
    0, -16, 0, -11, -6, -18, 0, 9,
    0, 0, 0, 0, -18, 0, -22, 0,
    -16, -11, 0, -7, -2, -11, -9, 0,
    0, 0, -16, 0, 0, -7, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, -13, -7, -4, -4, -11, -7,
    -13, -9, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    -9, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -13, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -25, -9, -4, -11, -4, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -4, -7, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    0, -7, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    4, -7, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -4, 0, -7, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -4, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -29, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -4, 0,
    0, 0, -4, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 43,
    .right_class_cnt     = 37,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t jura_14 = {
#else
lv_font_t jura_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if JURA_14*/

