#include "lvgl.h"


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGBTN_LEFT
#define LV_ATTRIBUTE_IMG_IMGBTN_LEFT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBTN_LEFT uint8_t imgbtn_left_map[] = {

#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x03, 0xc0, 0x61, 0x14, 0xc0, 0x61, 0x23,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x40, 0xc0, 0x61, 0xb0, 0x80, 0x59, 0xe0, 0x60, 0x59, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x70, 0xc0, 0x61, 0xfc, 0x01, 0x6a, 0xff, 0xf0, 0xb4, 0xff, 0x3b, 0xf7, 0xff,
  0x80, 0x69, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x73, 0xc0, 0x61, 0xff, 0x2c, 0xa4, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xff, 0xff, 0x17, 0xff, 0xff,
  0x00, 0x00, 0x00, 0xc0, 0x61, 0x40, 0xc0, 0x61, 0xfc, 0x2c, 0xa4, 0xff, 0xde, 0xff, 0xff, 0xcc, 0xed, 0xff, 0x47, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xa0, 0x61, 0x03, 0xc0, 0x61, 0xb0, 0x01, 0x6a, 0xff, 0x7b, 0xff, 0xff, 0x47, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x14, 0x80, 0x59, 0xe0, 0x10, 0xb5, 0xff, 0xec, 0xf5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x24, 0x60, 0x59, 0xff, 0x53, 0xe6, 0xff, 0x04, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0xab, 0xed, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x25, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x28, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0x80, 0x59, 0xff, 0x66, 0xc4, 0xff, 0x47, 0xed, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0xa0, 0x59, 0xff, 0x02, 0x93, 0xff, 0x89, 0xe5, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x27, 0xa0, 0x59, 0xff, 0xe2, 0x92, 0xff, 0x05, 0xb4, 0xff, 0x8a, 0xed, 0xff, 0x47, 0xe5, 0xff, 0x25, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0xc0, 0x61, 0x23, 0x80, 0x51, 0xff, 0x42, 0x9b, 0xff, 0xe1, 0x92, 0xff, 0x05, 0xb4, 0xff, 0x8a, 0xed, 0xff, 0xa9, 0xed, 0xff, 0x68, 0xed, 0xff,
  0xc0, 0x61, 0x17, 0x80, 0x51, 0xe4, 0xe2, 0x8a, 0xff, 0x43, 0x9b, 0xff, 0xe2, 0x92, 0xff, 0x02, 0x93, 0xff, 0x66, 0xc4, 0xff, 0x49, 0xe5, 0xff,
  0xa0, 0x61, 0x07, 0xa0, 0x59, 0xb8, 0xa0, 0x59, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x02, 0x93, 0xff, 0xe1, 0x92, 0xff, 0xc1, 0x8a, 0xff,
  0x00, 0x00, 0x00, 0x80, 0x51, 0x5f, 0x40, 0x49, 0xff, 0x62, 0x72, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x41, 0xc8, 0x20, 0x41, 0xff, 0xc2, 0x82, 0xff, 0x43, 0x9b, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff,
  0x40, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x40, 0xe0, 0x30, 0xc4, 0x20, 0x41, 0xff, 0xe1, 0x59, 0xff, 0xc2, 0x82, 0xff, 0x43, 0x9b, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x34, 0x00, 0x00, 0x54, 0xc0, 0x28, 0x9b, 0x20, 0x41, 0xfc, 0x20, 0x41, 0xff, 0x20, 0x41, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x24, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x54, 0x00, 0x00, 0x5b, 0xa0, 0x20, 0x8b, 0xe0, 0x30, 0xb0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x57, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x57,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x40, 0x00, 0x00, 0x54, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x18, 0x00, 0x00, 0x34, 0x00, 0x00, 0x48, 0x00, 0x00, 0x50,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x27,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x03, 0x61, 0xc0, 0x14, 0x61, 0xc0, 0x23,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x40, 0x61, 0xc0, 0xb0, 0x59, 0x80, 0xe0, 0x59, 0x60, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x70, 0x61, 0xc0, 0xfc, 0x6a, 0x01, 0xff, 0xb4, 0xf0, 0xff, 0xf7, 0x3b, 0xff,
  0x69, 0x80, 0x00, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x73, 0x61, 0xc0, 0xff, 0xa4, 0x2c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xff, 0xff, 0x17, 0xff,
  0x00, 0x00, 0x00, 0x61, 0xc0, 0x40, 0x61, 0xc0, 0xfc, 0xa4, 0x2c, 0xff, 0xff, 0xde, 0xff, 0xed, 0xcc, 0xff, 0xe5, 0x47, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xa0, 0x03, 0x61, 0xc0, 0xb0, 0x6a, 0x01, 0xff, 0xff, 0x7b, 0xff, 0xe5, 0x47, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x14, 0x59, 0x80, 0xe0, 0xb5, 0x10, 0xff, 0xf5, 0xec, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x24, 0x59, 0x60, 0xff, 0xe6, 0x53, 0xff, 0xe5, 0x04, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xed, 0xab, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x26, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x25, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x26, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xe5, 0x28, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0x80, 0xff, 0xc4, 0x66, 0xff, 0xed, 0x47, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0xa0, 0xff, 0x93, 0x02, 0xff, 0xe5, 0x89, 0xff, 0xe5, 0x26, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x27, 0x59, 0xa0, 0xff, 0x92, 0xe2, 0xff, 0xb4, 0x05, 0xff, 0xed, 0x8a, 0xff, 0xe5, 0x47, 0xff, 0xe5, 0x25, 0xff, 0xe5, 0x05, 0xff,
  0x61, 0xc0, 0x23, 0x51, 0x80, 0xff, 0x9b, 0x42, 0xff, 0x92, 0xe1, 0xff, 0xb4, 0x05, 0xff, 0xed, 0x8a, 0xff, 0xed, 0xa9, 0xff, 0xed, 0x68, 0xff,
  0x61, 0xc0, 0x17, 0x51, 0x80, 0xe4, 0x8a, 0xe2, 0xff, 0x9b, 0x43, 0xff, 0x92, 0xe2, 0xff, 0x93, 0x02, 0xff, 0xc4, 0x66, 0xff, 0xe5, 0x49, 0xff,
  0x61, 0xa0, 0x07, 0x59, 0xa0, 0xb8, 0x59, 0xa0, 0xff, 0x9b, 0x63, 0xff, 0x9b, 0x43, 0xff, 0x93, 0x02, 0xff, 0x92, 0xe1, 0xff, 0x8a, 0xc1, 0xff,
  0x00, 0x00, 0x00, 0x51, 0x80, 0x5f, 0x49, 0x40, 0xff, 0x72, 0x62, 0xff, 0x9b, 0x63, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x41, 0x20, 0xc8, 0x41, 0x20, 0xff, 0x82, 0xc2, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x63, 0xff, 0x9b, 0x43, 0xff,
  0x08, 0x40, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x40, 0x30, 0xe0, 0xc4, 0x41, 0x20, 0xff, 0x59, 0xe1, 0xff, 0x82, 0xc2, 0xff, 0x9b, 0x43, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x34, 0x00, 0x00, 0x54, 0x28, 0xc0, 0x9b, 0x41, 0x20, 0xfc, 0x41, 0x20, 0xff, 0x41, 0x20, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x24, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x54, 0x00, 0x00, 0x5b, 0x20, 0xa0, 0x8b, 0x30, 0xe0, 0xb0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x57, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x57,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x40, 0x00, 0x00, 0x54, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x18, 0x00, 0x00, 0x34, 0x00, 0x00, 0x48, 0x00, 0x00, 0x50,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x27,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t imgbtn_left = {
  .header.always_zero = 0,
  .header.w = 8,
  .header.h = 50,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgbtn_left_map,
};
