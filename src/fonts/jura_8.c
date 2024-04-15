/*******************************************************************************
 * Size: 8 px
 * Bpp: 4
 * Opts: --bpp 4 --size 8 --no-compress --font Jura.ttf --range 32-127 --format lvgl -o jura_8.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef JURA_8
#define JURA_8 1
#endif

#if JURA_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x40, 0x50, 0x50, 0x50, 0x20, 0x30,

    /* U+0022 "\"" */
    0x44, 0x55, 0x0,

    /* U+0023 "#" */
    0x2, 0x25, 0x1, 0x96, 0x82, 0x5, 0x41, 0x4,
    0x99, 0x50, 0x31, 0x50, 0x0,

    /* U+0024 "$" */
    0x0, 0x50, 0x0, 0x7b, 0x61, 0x23, 0x50, 0x10,
    0x5b, 0x51, 0x20, 0x50, 0x52, 0x6b, 0x62, 0x0,
    0x30, 0x0,

    /* U+0025 "%" */
    0x56, 0x40, 0x60, 0x50, 0x56, 0x0, 0x35, 0x76,
    0x61, 0x3, 0x35, 0x5, 0x5, 0x6, 0x62,

    /* U+0026 "&" */
    0x6, 0x64, 0x0, 0x80, 0x0, 0x55, 0x30, 0x5,
    0x4, 0x90, 0x26, 0x59, 0x30, 0x0, 0x0,

    /* U+0027 "'" */
    0x45, 0x0,

    /* U+0028 "(" */
    0x15, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x15,

    /* U+0029 ")" */
    0x51, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x51,

    /* U+002A "*" */
    0x27, 0x22, 0xc3, 0x1, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x2, 0x30, 0x27, 0x94, 0x2, 0x30,
    0x0, 0x0,

    /* U+002C "," */
    0x7, 0x10,

    /* U+002D "-" */
    0x25, 0x50,

    /* U+002E "." */
    0x30,

    /* U+002F "/" */
    0x0, 0x40, 0x41, 0x5, 0x0, 0x50, 0x4, 0x4,
    0x10, 0x50, 0x0,

    /* U+0030 "0" */
    0x26, 0x56, 0x5, 0x0, 0x22, 0x50, 0x32, 0x35,
    0x0, 0x22, 0x36, 0x57, 0x0,

    /* U+0031 "1" */
    0x9, 0x5, 0x5, 0x5, 0x4,

    /* U+0032 "2" */
    0x46, 0x56, 0x1, 0x0, 0x50, 0x0, 0x53, 0x0,
    0x60, 0x0, 0x55, 0x55, 0x0,

    /* U+0033 "3" */
    0x36, 0x56, 0x1, 0x0, 0x40, 0x1, 0x66, 0x1,
    0x0, 0x40, 0x45, 0x57, 0x0,

    /* U+0034 "4" */
    0x0, 0x45, 0x2, 0x35, 0x14, 0x5, 0x65, 0x5a,
    0x0, 0x5,

    /* U+0035 "5" */
    0x55, 0x55, 0x5, 0x65, 0x40, 0x0, 0x4, 0x2,
    0x0, 0x41, 0x35, 0x56, 0x0,

    /* U+0036 "6" */
    0x35, 0x57, 0x5, 0x55, 0x40, 0x60, 0x4, 0x5,
    0x0, 0x41, 0x36, 0x57, 0x0,

    /* U+0037 "7" */
    0x35, 0x55, 0x0, 0x42, 0x3, 0x30, 0x5, 0x0,
    0x4, 0x0,

    /* U+0038 "8" */
    0x26, 0x57, 0x4, 0x0, 0x40, 0x17, 0x58, 0x5,
    0x0, 0x31, 0x35, 0x56, 0x0,

    /* U+0039 "9" */
    0x45, 0x56, 0x5, 0x0, 0x41, 0x25, 0x57, 0x13,
    0x0, 0x41, 0x36, 0x57, 0x0,

    /* U+003A ":" */
    0x30, 0x0, 0x0, 0x30,

    /* U+003B ";" */
    0x30, 0x7, 0x10,

    /* U+003C "<" */
    0x0, 0x2, 0x4, 0x50, 0x17, 0x10, 0x0, 0x53,

    /* U+003D "=" */
    0x15, 0x53, 0x25, 0x54,

    /* U+003E ">" */
    0x2, 0x0, 0x3, 0x60, 0x0, 0x54, 0x6, 0x10,

    /* U+003F "?" */
    0x55, 0x61, 0x20, 0x14, 0x0, 0x60, 0x4, 0x0,
    0x3, 0x0,

    /* U+0040 "@" */
    0x15, 0x55, 0x50, 0x53, 0x68, 0x40, 0x55, 0x5,
    0x41, 0x51, 0x66, 0x60, 0x26, 0x55, 0x60,

    /* U+0041 "A" */
    0x0, 0x90, 0x0, 0x53, 0x20, 0x5, 0x5, 0x3,
    0x75, 0x80, 0x50, 0x0, 0x50, 0x0, 0x0,

    /* U+0042 "B" */
    0x46, 0x57, 0x4, 0x10, 0x31, 0x46, 0x58, 0x14,
    0x10, 0x5, 0x46, 0x56, 0x30,

    /* U+0043 "C" */
    0x16, 0x55, 0x45, 0x0, 0x2, 0x50, 0x0, 0x5,
    0x0, 0x2, 0x16, 0x55, 0x40,

    /* U+0044 "D" */
    0x46, 0x56, 0x34, 0x10, 0x5, 0x41, 0x0, 0x54,
    0x10, 0x5, 0x46, 0x56, 0x30,

    /* U+0045 "E" */
    0x46, 0x55, 0x4, 0x10, 0x0, 0x46, 0x50, 0x4,
    0x10, 0x0, 0x46, 0x55, 0x0,

    /* U+0046 "F" */
    0x46, 0x54, 0x41, 0x0, 0x46, 0x50, 0x41, 0x0,
    0x40, 0x0,

    /* U+0047 "G" */
    0x16, 0x55, 0x45, 0x0, 0x1, 0x50, 0x3, 0x55,
    0x0, 0x5, 0x16, 0x55, 0x40,

    /* U+0048 "H" */
    0x40, 0x0, 0x54, 0x10, 0x5, 0x46, 0x55, 0x74,
    0x10, 0x5, 0x40, 0x0, 0x50,

    /* U+0049 "I" */
    0x40, 0x41, 0x41, 0x41, 0x40,

    /* U+004A "J" */
    0x0, 0x4, 0x0, 0x5, 0x0, 0x5, 0x20, 0x4,
    0x55, 0x71,

    /* U+004B "K" */
    0x0, 0x0, 0x4, 0x2, 0x50, 0x42, 0x60, 0x4,
    0x83, 0x0, 0x41, 0x51, 0x4, 0x0, 0x60, 0x0,
    0x0, 0x0,

    /* U+004C "L" */
    0x40, 0x0, 0x41, 0x0, 0x41, 0x0, 0x41, 0x0,
    0x46, 0x53,

    /* U+004D "M" */
    0x45, 0x0, 0x36, 0x46, 0x10, 0x55, 0x41, 0x65,
    0x5, 0x41, 0x12, 0x5, 0x40, 0x0, 0x5,

    /* U+004E "N" */
    0x45, 0x0, 0x54, 0x43, 0x5, 0x41, 0x51, 0x54,
    0x10, 0x65, 0x40, 0x0, 0x80,

    /* U+004F "O" */
    0x16, 0x55, 0x55, 0x0, 0x5, 0x50, 0x0, 0x55,
    0x0, 0x5, 0x16, 0x55, 0x50,

    /* U+0050 "P" */
    0x46, 0x57, 0x4, 0x10, 0x41, 0x46, 0x55, 0x4,
    0x10, 0x0, 0x40, 0x0, 0x0,

    /* U+0051 "Q" */
    0x16, 0x55, 0x55, 0x0, 0x5, 0x50, 0x0, 0x55,
    0x0, 0x5, 0x16, 0x58, 0x90, 0x0, 0x1,

    /* U+0052 "R" */
    0x46, 0x57, 0x4, 0x10, 0x41, 0x46, 0x66, 0x4,
    0x10, 0x50, 0x40, 0x3, 0x10,

    /* U+0053 "S" */
    0x16, 0x55, 0x33, 0x10, 0x2, 0x5, 0x55, 0x22,
    0x0, 0x5, 0x26, 0x55, 0x40,

    /* U+0054 "T" */
    0x45, 0x95, 0x10, 0x5, 0x0, 0x0, 0x50, 0x0,
    0x5, 0x0, 0x0, 0x40, 0x0,

    /* U+0055 "U" */
    0x40, 0x0, 0x55, 0x0, 0x5, 0x50, 0x0, 0x54,
    0x0, 0x5, 0x17, 0x55, 0x50,

    /* U+0056 "V" */
    0x50, 0x0, 0x54, 0x10, 0x31, 0x5, 0x5, 0x0,
    0x53, 0x30, 0x0, 0x90, 0x0,

    /* U+0057 "W" */
    0x50, 0x9, 0x0, 0x55, 0x4, 0x60, 0x23, 0x23,
    0x51, 0x45, 0x0, 0x55, 0x5, 0x50, 0x7, 0x20,
    0x53, 0x0,

    /* U+0058 "X" */
    0x20, 0x2, 0x2, 0x40, 0x60, 0x5, 0x70, 0x0,
    0x47, 0x0, 0x5, 0x24, 0x5, 0x0, 0x50, 0x0,
    0x0, 0x0,

    /* U+0059 "Y" */
    0x10, 0x2, 0x5, 0x0, 0x60, 0x5, 0x51, 0x0,
    0x45, 0x0, 0x1, 0x30, 0x0, 0x13, 0x0,

    /* U+005A "Z" */
    0x45, 0x59, 0x10, 0x2, 0x40, 0x0, 0x60, 0x0,
    0x60, 0x0, 0x58, 0x56, 0x30,

    /* U+005B "[" */
    0x41, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x42,

    /* U+005C "\\" */
    0x50, 0x4, 0x10, 0x4, 0x0, 0x50, 0x5, 0x0,
    0x41, 0x0, 0x40,

    /* U+005D "]" */
    0x60, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x60,

    /* U+005E "^" */
    0xa, 0x4, 0x24,

    /* U+005F "_" */
    0x25, 0x30,

    /* U+0060 "`" */
    0x30, 0x2,

    /* U+0061 "a" */
    0x26, 0x55, 0x5, 0x58, 0x50, 0x6, 0x26, 0x58,

    /* U+0062 "b" */
    0x40, 0x0, 0x4, 0x10, 0x0, 0x45, 0x57, 0x4,
    0x10, 0x22, 0x41, 0x2, 0x24, 0x65, 0x70,

    /* U+0063 "c" */
    0x16, 0x56, 0x50, 0x0, 0x50, 0x0, 0x16, 0x56,

    /* U+0064 "d" */
    0x0, 0x3, 0x10, 0x0, 0x31, 0x16, 0x58, 0x15,
    0x0, 0x31, 0x50, 0x3, 0x11, 0x65, 0x71,

    /* U+0065 "e" */
    0x15, 0x57, 0x5, 0x55, 0x60, 0x50, 0x2, 0x1,
    0x75, 0x60,

    /* U+0066 "f" */
    0x6, 0x13, 0x10, 0x66, 0x13, 0x10, 0x31, 0x3,
    0x10,

    /* U+0067 "g" */
    0x16, 0x58, 0x15, 0x0, 0x31, 0x50, 0x3, 0x11,
    0x65, 0x81, 0x0, 0x3, 0x13, 0x65, 0x70,

    /* U+0068 "h" */
    0x40, 0x0, 0x4, 0x10, 0x0, 0x46, 0x56, 0x4,
    0x10, 0x41, 0x41, 0x3, 0x14, 0x0, 0x31,

    /* U+0069 "i" */
    0x41, 0x40, 0x41, 0x41, 0x40,

    /* U+006A "j" */
    0x4, 0x10, 0x40, 0x4, 0x10, 0x41, 0x4, 0x10,
    0x40, 0x7, 0x0,

    /* U+006B "k" */
    0x40, 0x0, 0x41, 0x0, 0x41, 0x52, 0x48, 0x20,
    0x43, 0x60, 0x40, 0x24, 0x0, 0x0,

    /* U+006C "l" */
    0x40, 0x41, 0x41, 0x41, 0x41, 0x26,

    /* U+006D "m" */
    0x46, 0x57, 0x57, 0x4, 0x10, 0x50, 0x50, 0x41,
    0x5, 0x5, 0x4, 0x0, 0x40, 0x40,

    /* U+006E "n" */
    0x45, 0x56, 0x4, 0x10, 0x41, 0x41, 0x3, 0x14,
    0x0, 0x31,

    /* U+006F "o" */
    0x16, 0x56, 0x5, 0x0, 0x41, 0x50, 0x4, 0x11,
    0x65, 0x60,

    /* U+0070 "p" */
    0x46, 0x57, 0x4, 0x10, 0x22, 0x41, 0x2, 0x24,
    0x65, 0x70, 0x41, 0x0, 0x4, 0x0, 0x0,

    /* U+0071 "q" */
    0x16, 0x57, 0x15, 0x0, 0x31, 0x50, 0x3, 0x11,
    0x65, 0x81, 0x0, 0x3, 0x10, 0x0, 0x31,

    /* U+0072 "r" */
    0x45, 0x34, 0x20, 0x41, 0x4, 0x0,

    /* U+0073 "s" */
    0x45, 0x55, 0x25, 0x54, 0x10, 0x5, 0x45, 0x56,

    /* U+0074 "t" */
    0x22, 0x6, 0x71, 0x22, 0x2, 0x20, 0x6, 0x10,

    /* U+0075 "u" */
    0x40, 0x4, 0x5, 0x0, 0x50, 0x50, 0x5, 0x1,
    0x65, 0x80,

    /* U+0076 "v" */
    0x30, 0x3, 0x50, 0x14, 0x5, 0x50, 0x6, 0x40,

    /* U+0077 "w" */
    0x30, 0x70, 0x12, 0x50, 0x64, 0x50, 0x24, 0x25,
    0x50, 0x9, 0x6, 0x30,

    /* U+0078 "x" */
    0x0, 0x0, 0x41, 0x23, 0x6, 0x60, 0x6, 0x50,
    0x41, 0x32, 0x0, 0x0,

    /* U+0079 "y" */
    0x50, 0x4, 0x50, 0x5, 0x50, 0x5, 0x26, 0x59,
    0x10, 0x5, 0x36, 0x57,

    /* U+007A "z" */
    0x55, 0x84, 0x0, 0x60, 0x6, 0x0, 0x57, 0x55,

    /* U+007B "{" */
    0x4, 0x20, 0x40, 0x5, 0x3, 0x40, 0x33, 0x0,
    0x50, 0x5, 0x0, 0x42,

    /* U+007C "|" */
    0x45, 0x55, 0x55, 0x40,

    /* U+007D "}" */
    0x41, 0x0, 0x50, 0x5, 0x0, 0x60, 0x6, 0x0,
    0x50, 0x5, 0x5, 0x10,

    /* U+007E "~" */
    0x15, 0x13, 0x30, 0x43
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 29, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 26, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 35, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 9, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 70, .adv_w = 23, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 72, .adv_w = 33, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 33, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 88, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 93, .adv_w = 70, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 24, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 105, .adv_w = 59, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 107, .adv_w = 26, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 44, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 66, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 58, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 24, .box_w = 1, .box_h = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 242, .adv_w = 70, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 250, .adv_w = 70, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 254, .adv_w = 70, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 262, .adv_w = 61, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 91, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 302, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 70, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 63, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 28, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 69, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 423, .adv_w = 62, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 98, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 70, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 88, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 502, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 108, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 72, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 603, .adv_w = 66, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 24, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 639, .adv_w = 44, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 650, .adv_w = 24, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 658, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 661, .adv_w = 54, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 663, .adv_w = 30, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 665, .adv_w = 74, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 72, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 76, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 40, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 745, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 28, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 28, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 776, .adv_w = 60, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 790, .adv_w = 35, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 107, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 76, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 76, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 845, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 860, .adv_w = 46, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 69, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 43, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 76, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 63, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 900, .adv_w = 87, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 62, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 924, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 936, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 40, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 956, .adv_w = 26, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 960, .adv_w = 40, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 972, .adv_w = 70, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
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
    0, 0, 0, 0, 0, 0, -9, -3,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, -3, 0, 0, -6, 0, 0, -3,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -3, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, -18, -12,
    -12, -14, -9, 0, 0, 0, -4, 0,
    -6, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, -4, -4, -4, 0,
    -6, 0, 0, 0, -1, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, -3, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -4, -1, 0, -4, 0, -3, -9,
    0, 0, -3, 0, 0, 0, 0, 0,
    -3, -4, 0, 0, 0, 0, 0, -1,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -6, 0, -5, 0, -3, -10, 0,
    0, 0, 0, -1, -4, 0, -8, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, -5, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -4, -13, 0, 0, 0, -9, 0, -1,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, -1, 0, -10, -4, 0, -6, 0,
    0, 0, -3, -3, 0, -1, 0, 0,
    -3, -3, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -3, 0, -4, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    -3, 0, 0, -3, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -4, 0, 0, 0, -6, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, -1,
    0, -1, -5, -3, -3, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -4,
    0, 0, -4, 0, 0, -5, 0, 0,
    0, -3, 0, 0, 0, 0, -3, -1,
    0, -6, 0, 0, -4, 0, 0, 0,
    0, -10, -1, -10, 1, 0, 0, 4,
    0, 0, -6, 0, -9, 0, -9, -8,
    0, -6, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, -5, 0, 0,
    -1, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -4, 0, 0, 0, 0,
    -3, -4, 0, 0, -15, 0, -22, -15,
    0, 0, -10, 0, 0, 0, -1, -1,
    -9, -1, -3, 0, 0, 0, -3, 0,
    -12, -9, 0, -13, 0, 0, -3, 0,
    0, 0, 0, 0, -5, -3, -10, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -1, -4, -10, 0, 0, -3, 0, 0,
    0, 0, -8, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -3,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -1, 0, -1,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, -3, -1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -18, 0,
    0, -3, 0, -3, -14, 0, 0, 0,
    -5, 0, -10, 0, -10, -5, -13, 0,
    3, 0, 3, 0, 0, -14, -3, -14,
    0, -12, -14, 0, -14, -12, -13, -14,
    0, -4, 0, -9, 0, 0, -3, 0,
    0, -5, 0, 0, 0, -1, 0, -6,
    0, -4, -3, -9, 1, 0, 0, 3,
    0, 0, -8, 0, -9, 0, -3, -6,
    0, -4, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, -4, 0, 0, -1, 0,
    0, -1, -4, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, -5, 0, 0, 0, 0, -4, -5,
    0, 0, 0, -4, 0, -14, 0, 0,
    -5, -3, -3, -9, 0, 0, 0, -5,
    0, -9, 0, -6, -3, -10, 0, 5,
    0, 0, 0, 0, -10, 0, -13, 0,
    -9, -6, 0, -4, -1, -6, -5, 0,
    0, 0, -9, 0, 0, -4, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -8, -4, -3, -3, -6, -4,
    -8, -5, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    -5, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -8, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, -14, -5, -3, -6, -3, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -3, -4, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, -4, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    3, -4, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -3, 0, -4, 0, -1, 0, 0, 0,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -3, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, -3, 0,
    0, 0, -3, 0, 0, 0, 0
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
const lv_font_t jura_8 = {
#else
lv_font_t jura_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if JURA_8*/

