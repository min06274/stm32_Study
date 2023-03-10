/*
 * horse_anim.h
 *
 *  Created on: 17-Jun-2019
 *      Author: poe
 */

#ifndef _EDDY_LOGO_H_
#define _EDDY_LOGO_H_

const unsigned char eddylogo1 []  = {
	// 'eddy, 128x64px
	0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xc7, 0xe3, 0xc0, 0x3f, 0xff, 0xf0, 0x3e, 0xff, 0xfb,
	0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf7, 0xe3, 0xc8, 0x0f, 0xff, 0xf0, 0x3f, 0xff, 0xfb,
	0x03, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xe3, 0xc8, 0x1b, 0xff, 0xe0, 0x3f, 0xf7, 0xfb,
	0x00, 0x00, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xf1, 0xcc, 0x7f, 0xf0, 0xe0, 0x0f, 0xff, 0xcf,
	0x00, 0x00, 0x00, 0x1f, 0xe1, 0xff, 0xff, 0xff, 0xf9, 0xec, 0x63, 0xe0, 0x00, 0x07, 0xff, 0xc8,
	0x00, 0x00, 0x03, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0x40, 0x00, 0x00, 0x07, 0xff, 0xc7,
	0x00, 0x01, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0x00, 0xfd, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xc3,
	0x00, 0x01, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0x03, 0xfd, 0xe0, 0x00, 0x00, 0x80, 0xff, 0xc7,
	0x00, 0x01, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0x07, 0xfd, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xc2,
	0x00, 0x00, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0x05, 0xfe, 0xc0, 0x00, 0x00, 0x02, 0xff, 0xc2,
	0x00, 0x00, 0xe0, 0xff, 0xf0, 0xff, 0xff, 0x80, 0x00, 0xfc, 0x00, 0x00, 0x03, 0xf2, 0x7f, 0xc0,
	0x00, 0x00, 0xc0, 0x00, 0xf0, 0x70, 0x7f, 0x80, 0x1f, 0xfc, 0x01, 0x9b, 0xff, 0xff, 0x7f, 0xc0,
	0x00, 0x00, 0xe0, 0x00, 0xf8, 0x70, 0x0f, 0xe7, 0xf9, 0xe6, 0x01, 0x30, 0x7f, 0xfe, 0x0f, 0xd0,
	0x00, 0x00, 0xe0, 0x00, 0x78, 0x70, 0x0f, 0xff, 0xfd, 0xf3, 0x01, 0xa0, 0x01, 0xff, 0x77, 0x80,
	0x00, 0x18, 0x78, 0x00, 0x78, 0x78, 0x0f, 0xff, 0xff, 0xff, 0x81, 0x80, 0x00, 0x07, 0xff, 0x00,
	0x00, 0x0c, 0x7e, 0x00, 0x18, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xc0, 0x80, 0x00, 0x0c, 0x40, 0x06,
	0x00, 0x1c, 0x3e, 0x00, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x80, 0x00, 0x0c, 0x00, 0x00,
	0x00, 0x1e, 0x3e, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xc0, 0x00, 0x1d, 0xf8, 0x00,
	0x00, 0x1e, 0x38, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x3c, 0xf8, 0x00,
	0x00, 0x0f, 0x18, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xf8, 0xc0, 0x07,
	0x00, 0x0f, 0x3e, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x01, 0xff, 0x00, 0x01,
	0x00, 0x0f, 0xbf, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0e, 0x00, 0xc0, 0x0f,
	0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xe0, 0x00, 0x00,
	0x00, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xd8, 0x00, 0x00,
	0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xb0, 0x00, 0x00,
	0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x78, 0x00, 0x00,
	0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9e, 0x78, 0x00, 0x00,
	0x00, 0x0f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3c, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0x70, 0x00, 0x00,
	0x00, 0x7f, 0xff, 0xdf, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x80, 0x00, 0x00,
	0x01, 0xff, 0xff, 0xef, 0x03, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xe1, 0xf0, 0x00, 0x00,
	0x03, 0xff, 0xff, 0xee, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x0e, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00,
	0x07, 0xff, 0xff, 0xe6, 0x00, 0x2f, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,
	0x7f, 0xff, 0xff, 0xf3, 0x00, 0x1f, 0xff, 0xff, 0x80, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00,
	0xbf, 0xff, 0xff, 0xd9, 0x80, 0x1f, 0xff, 0xff, 0xf8, 0x00, 0x3f, 0xf8, 0x0f, 0xff, 0xf0, 0x00,
	0x3f, 0xff, 0xff, 0xcf, 0xc0, 0x7f, 0xff, 0xff, 0xc0, 0x00, 0x1f, 0xfc, 0x07, 0xff, 0xfe, 0x00,
	0x3f, 0xff, 0xff, 0xef, 0xe3, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x0f, 0xfc, 0x80, 0x7f, 0xff, 0x00,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x7f, 0xff, 0x80, 0x7f, 0xff, 0xf8,
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x8f, 0xfd, 0x00, 0x3f, 0xff, 0xfe,
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xfe,
	0x7f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x70, 0x07, 0xff, 0xff,
	0x7f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x07, 0xff, 0xff,
	0x5f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xab, 0x9f, 0xff, 0xff,
	0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xfb, 0x1f, 0xff, 0xff,
	0x53, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xff, 0x8f, 0xff, 0xff,
	0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x1c, 0xff, 0x80, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xfc, 0x7f, 0xc0, 0x00, 0x03, 0xbf, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf8, 0x3f, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x7f, 0xff, 0xf5, 0xc8, 0x00, 0x01, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xcf, 0xfb, 0xc1, 0xc2, 0x02, 0x06, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf9, 0xff, 0x80, 0x40, 0x00, 0x13, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x81, 0x80, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xfe,
	0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xf4,
	0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x55, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xf8,
	0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x8a, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0xf8,
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x1d, 0xc1, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xff, 0xe0,
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0x04, 0x20, 0x0f, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x07, 0x80, 0x9f, 0xf3, 0xff, 0xff, 0x00, 0x37, 0xce, 0xfb,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xbf, 0x8f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xf9, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x41,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x5f, 0xbd, 0x2f, 0xff, 0xff, 0xc0, 0x00, 0x08,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0xbf, 0xf5, 0x7f, 0xff, 0xf8, 0x00, 0x07,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x3f, 0xff, 0x6f, 0xbf, 0xfc, 0x00, 0x00,
};


const unsigned char eddylogo2 []  = {

	// 'eddy2, 128x64px
	0xff, 0xff, 0xff, 0xff, 0xf3, 0x18, 0x8c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0f,
	0xff, 0xff, 0xff, 0xff, 0xf1, 0xc7, 0xff, 0xfc, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
	0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xfc, 0x0c, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f,
	0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0x9f, 0xc0, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
	0xff, 0xff, 0xff, 0xe1, 0xf3, 0xfd, 0xff, 0xff, 0xf3, 0x00, 0x60, 0x00, 0x04, 0x00, 0x00, 0x3f,
	0xff, 0xff, 0xff, 0xcf, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x33, 0x00, 0xff, 0xff, 0xde, 0x00, 0x3f,
	0xff, 0xff, 0xff, 0x3f, 0xcf, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x3f,
	0x7f, 0xff, 0xff, 0x3c, 0xef, 0xf3, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf8, 0x00, 0x03, 0xf0, 0x3f,
	0xf7, 0xf3, 0xfc, 0xf8, 0xcf, 0xcf, 0xff, 0xff, 0xff, 0xfe, 0xe0, 0x00, 0xff, 0xff, 0xf0, 0x7f,
	0x1e, 0xff, 0xfc, 0xf3, 0x8d, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xfe, 0x1f, 0x07, 0xf0, 0xff,
	0xf3, 0xff, 0xf1, 0xcf, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xef, 0xf0, 0x1f, 0xf8, 0xf3,
	0xdf, 0xff, 0xf3, 0xcf, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0x00, 0x1f, 0xfc, 0xff,
	0x73, 0xf3, 0xc3, 0x32, 0x3c, 0xff, 0xff, 0xf3, 0xfc, 0xff, 0xfc, 0x00, 0x70, 0x3f, 0xfc, 0xff,
	0xff, 0xff, 0xc1, 0x03, 0xef, 0xf3, 0xfa, 0x0c, 0x00, 0x1f, 0xcc, 0x04, 0x30, 0x3f, 0xfc, 0xff,
	0xff, 0xff, 0xc0, 0x07, 0xff, 0xfe, 0x3e, 0x00, 0xff, 0xc3, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff,
	0xff, 0xf7, 0x80, 0x33, 0xff, 0xff, 0xef, 0xcf, 0xff, 0xfc, 0xf0, 0x00, 0x00, 0x3f, 0xff, 0xff,
	0xcf, 0xff, 0x81, 0xfc, 0xe0, 0x0f, 0xef, 0x30, 0x0f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xff, 0xfc,
	0xff, 0x3e, 0x0f, 0x32, 0x00, 0x01, 0xf1, 0x80, 0x07, 0xff, 0xf0, 0x03, 0xbf, 0xff, 0xf0, 0x00,
	0x73, 0xf8, 0xe0, 0x83, 0x00, 0x00, 0xfc, 0xe0, 0x07, 0xff, 0xff, 0x0f, 0xfa, 0x00, 0x00, 0x01,
	0x3f, 0xf2, 0x03, 0x3c, 0x00, 0x00, 0x3f, 0x00, 0x3f, 0xff, 0xff, 0xce, 0x00, 0x00, 0x1f, 0xff,
	0xc7, 0xc8, 0xe0, 0xf0, 0x00, 0x18, 0xff, 0xcc, 0x7f, 0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xff,
	0x3f, 0xf0, 0x0c, 0x30, 0x00, 0x71, 0xdf, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xcf, 0xc0, 0xf0, 0xcc, 0x00, 0x0c, 0x33, 0xff, 0xef, 0xff, 0xff, 0xfc, 0xe0, 0x3f, 0xff, 0xff,
	0xff, 0xf0, 0xc0, 0x30, 0x00, 0x00, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff,
	0xff, 0xe0, 0xcf, 0x8c, 0x30, 0x1c, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff,
	0xff, 0x21, 0x70, 0xc3, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff,
	0xff, 0xcc, 0x63, 0x38, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xdf, 0xf0,
	0xff, 0x9c, 0x38, 0xcc, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff,
	0xff, 0xf1, 0xf8, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xc3, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x01, 0xff, 0xfc,
	0xff, 0x3f, 0x8d, 0xff, 0x3f, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xf0,
	0xf8, 0xc0, 0xf8, 0x7c, 0xff, 0xff, 0xff, 0xcf, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff,
	0xc3, 0x33, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1c, 0x7f,
	0x38, 0xcc, 0xfc, 0xff, 0xff, 0xff, 0xce, 0x33, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xf8,
	0xcf, 0xf0, 0xff, 0x87, 0xff, 0xff, 0x30, 0x38, 0xf3, 0xff, 0xff, 0xff, 0xf8, 0x78, 0x0f, 0x00,
	0xf1, 0xf3, 0xbf, 0xfe, 0xff, 0xfc, 0x0c, 0x03, 0xfc, 0xff, 0xff, 0xff, 0x08, 0xc7, 0xc0, 0x3f,
	0x03, 0xe1, 0xff, 0xcf, 0xcf, 0xfe, 0x30, 0x0c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff,
	0xe7, 0x33, 0xff, 0x3f, 0xfd, 0xf3, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xce, 0xe7, 0xfc, 0x00,
	0x3c, 0xc7, 0xff, 0xef, 0x8f, 0xff, 0xc0, 0x00, 0xcf, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xfc,
	0xf0, 0xff, 0xff, 0xdc, 0xec, 0x3e, 0x1c, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
	0xf0, 0xcf, 0xff, 0x3f, 0x7b, 0xdf, 0xc7, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf8, 0x00,
	0xe0, 0xff, 0xfc, 0xff, 0x31, 0xff, 0x8c, 0xf8, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x03, 0xe1, 0xe3,
	0xce, 0x3c, 0xe3, 0xcc, 0xce, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x01, 0xcf,
	0xe3, 0x7c, 0x3c, 0x03, 0x3f, 0xfc, 0xef, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0x80, 0x03, 0xf3,
	0x03, 0x3c, 0x3f, 0xff, 0xc3, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xf8, 0x70, 0x0f, 0xf3,
	0x3c, 0xfc, 0x33, 0xdc, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x8f, 0xc0, 0x00, 0xf3,
	0xef, 0xf0, 0x3f, 0x0f, 0x3c, 0x7e, 0xfe, 0xc7, 0xff, 0xff, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x3f,
	0xff, 0xf0, 0x07, 0x33, 0xe7, 0x78, 0xce, 0x0c, 0xfc, 0x3e, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x33,
	0x0f, 0xc0, 0xfc, 0xfc, 0xe3, 0xcf, 0x02, 0x1f, 0xf3, 0x01, 0xc0, 0x00, 0x01, 0x80, 0x00, 0xff,
	0xff, 0x10, 0x63, 0x33, 0x9c, 0xc7, 0xc0, 0x0f, 0xcf, 0xcc, 0xf0, 0x00, 0x03, 0xc0, 0x0f, 0x8f,
	0xff, 0x83, 0xfd, 0xe8, 0xcf, 0x10, 0x00, 0x7f, 0xc1, 0xff, 0x3c, 0x00, 0x03, 0xe0, 0x03, 0x00,
	0xff, 0xce, 0x0f, 0xff, 0x3c, 0xf8, 0x70, 0xc3, 0xcc, 0x07, 0xcc, 0x20, 0x0f, 0xe0, 0xc0, 0x00,
	0xfc, 0x0e, 0x7e, 0x3d, 0xe6, 0x03, 0x00, 0xff, 0xc1, 0xc0, 0xf1, 0xcc, 0x0f, 0xf0, 0xf0, 0x00,
	0xf0, 0x3b, 0x7c, 0xe0, 0x78, 0x0c, 0x3f, 0xff, 0xe3, 0x3b, 0x07, 0xfe, 0x0f, 0xf0, 0x30, 0x37,
	0xf0, 0x0e, 0x3f, 0xff, 0xbf, 0xf1, 0xdf, 0xff, 0xc4, 0x38, 0xc0, 0xf3, 0xff, 0x80, 0x07, 0xff,
	0x00, 0x3d, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0x0c, 0xc0, 0x07, 0x0c, 0x3b, 0x7c, 0x3f, 0xfc,
	0x00, 0x3b, 0xff, 0x3f, 0xff, 0xfc, 0xff, 0xfe, 0x30, 0x00, 0x1c, 0xf8, 0xf0, 0xcf, 0xff, 0xff,
	0x00, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x73, 0x00, 0x10, 0x3c, 0x3c, 0x3f, 0xff, 0xf3,
	0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0x00, 0x00, 0xcf, 0x30, 0xff, 0xff, 0xcf,
	0xc1, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x8c, 0x40, 0x40, 0xce, 0x3f, 0xff, 0xff, 0xf7,
	0xc7, 0x10, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xe3, 0x0c, 0x00, 0x00, 0x70, 0x03, 0xff, 0xff, 0x3c,
	0x00, 0x38, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x21, 0x00, 0x70, 0x70, 0x07, 0x00, 0x00, 0x3f,
	0x1c, 0x1c, 0xc1, 0xff, 0xff, 0xff, 0xc4, 0x00, 0x60, 0x18, 0x0c, 0xc0, 0xc8, 0x00, 0x01, 0xc1,
	0x33, 0x3c, 0x00, 0x78, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x41, 0x1d, 0xc7, 0x00, 0xfd, 0xfc, 0xff,
};

const unsigned char eddylogo3 []  = {

	// 'eddy3, 128x64px
	0x07, 0x80, 0x3f, 0xfc, 0xf8, 0xff, 0xdc, 0xf3, 0xff, 0xff, 0xf7, 0xbf, 0xff, 0xff, 0xff, 0xff,
	0xe0, 0x00, 0x3f, 0xfc, 0xfe, 0x87, 0xf9, 0xcc, 0xff, 0xff, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff,
	0x30, 0x00, 0x03, 0xff, 0xfc, 0x78, 0x38, 0x38, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xc7, 0x80, 0x00, 0xff, 0xf3, 0xf0, 0x0f, 0xf3, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x00, 0x80, 0x00, 0xf7, 0xfe, 0xcf, 0xf3, 0xfc, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xfe, 0x33, 0xcc, 0x00, 0xff, 0xfc, 0xce, 0xf3, 0x23, 0x80, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xf9, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xe0, 0x0c, 0x00, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff,
	0x01, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0x83, 0x3e, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff,
	0x3f, 0xff, 0xef, 0x7f, 0x00, 0x3f, 0xff, 0xff, 0xf7, 0x93, 0xf2, 0x30, 0x7f, 0xff, 0xff, 0xff,
	0x0f, 0xff, 0xff, 0x3b, 0x7f, 0xff, 0xff, 0xff, 0xcf, 0xfe, 0x30, 0x00, 0x00, 0xff, 0xff, 0xff,
	0x0f, 0xff, 0xff, 0xf1, 0xff, 0xcf, 0xff, 0xfc, 0x70, 0x00, 0x0c, 0x08, 0x00, 0x0f, 0xff, 0xff,
	0x3f, 0xff, 0xff, 0xfc, 0x7f, 0x37, 0xff, 0xfb, 0x8c, 0x31, 0x00, 0x4e, 0x07, 0xe0, 0xff, 0xff,
	0xff, 0xff, 0xfc, 0xff, 0x8f, 0x3c, 0xff, 0xff, 0xfd, 0xc4, 0x30, 0x03, 0x01, 0xfe, 0x0f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xc7, 0x0f, 0xff, 0xdf, 0xff, 0x30, 0xcf, 0xcf, 0x87, 0x8f, 0xf1, 0xff,
	0xff, 0xff, 0xfb, 0xff, 0x3e, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x43, 0x38, 0xf1, 0xfc, 0xff,
	0x7f, 0xff, 0xff, 0xce, 0xf3, 0xcf, 0x7f, 0xff, 0xff, 0x0c, 0x00, 0x10, 0xff, 0xfc, 0x3f, 0xff,
	0xff, 0xff, 0xff, 0x3f, 0xcf, 0x7b, 0xff, 0xff, 0xfc, 0xe0, 0x00, 0x03, 0xfc, 0x0f, 0xff, 0xff,
	0xff, 0xff, 0xfd, 0xef, 0x7d, 0xdf, 0xdf, 0xff, 0xff, 0xc0, 0x00, 0x01, 0xff, 0x30, 0x07, 0xff,
	0xff, 0xff, 0xf9, 0xfc, 0x7c, 0xfb, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x00,
	0xff, 0xff, 0xf0, 0x7f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xc7,
	0xff, 0xff, 0xf0, 0xcf, 0xc3, 0xff, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfc,
	0xff, 0xff, 0xf0, 0xe1, 0xf3, 0xff, 0xff, 0xff, 0xff, 0x00, 0x06, 0x00, 0xff, 0xf9, 0xff, 0xf0,
	0xff, 0xff, 0xc0, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x00, 0x03, 0xfb, 0xff, 0xff, 0xfe,
	0xff, 0xff, 0xe3, 0x0f, 0x1f, 0x3f, 0xff, 0x7f, 0xff, 0xfe, 0x00, 0x07, 0xff, 0xff, 0xff, 0xfc,
	0x7f, 0xff, 0xe0, 0x0e, 0xff, 0xef, 0x70, 0x0f, 0xff, 0xff, 0xcf, 0xff, 0xef, 0xff, 0xff, 0xff,
	0x0f, 0xff, 0xfc, 0x00, 0x3f, 0xf0, 0x02, 0x33, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
	0x03, 0xff, 0xfc, 0x00, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0x00, 0xff, 0xfc, 0x00, 0xff, 0xf2, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xfc,
	0x02, 0x1f, 0xff, 0xe0, 0x3f, 0xfc, 0x00, 0x03, 0xff, 0xff, 0xff, 0x19, 0xe3, 0xff, 0xff, 0xfc,
	0x00, 0x03, 0xff, 0xb0, 0x1f, 0xfc, 0x00, 0x3f, 0x7f, 0xff, 0xf8, 0x03, 0x83, 0xff, 0xff, 0xfc,
	0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x02, 0x01, 0xff, 0xff, 0xf8, 0x00, 0xcc, 0xff, 0xff, 0xfc,
	0x03, 0x81, 0xff, 0xff, 0x7f, 0xff, 0xc0, 0xcf, 0xff, 0xff, 0xf8, 0x00, 0xc3, 0xff, 0xff, 0xc0,
	0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x30, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x73, 0xff, 0xff, 0xc0,
	0x00, 0x0e, 0x0c, 0x03, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xf3, 0xff, 0xff, 0x00,
	0x81, 0x80, 0x01, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xf3, 0xff, 0xfc, 0x00,
	0x00, 0x1c, 0x1e, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x00,
	0x00, 0x00, 0x41, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xf0, 0x08,
	0x00, 0x00, 0x1e, 0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x38, 0x00,
	0x00, 0x00, 0x1c, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf0, 0x00,
	0x00, 0x00, 0x08, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00,
	0x00, 0x00, 0x13, 0xce, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf0, 0x00,
	0x0c, 0x04, 0x03, 0xbc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x01,
	0xf0, 0x07, 0x80, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xfc, 0xf0, 0x00,
	0x00, 0x00, 0xde, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x4c, 0xf0, 0x00,
	0xf8, 0xe7, 0x1f, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x38, 0x78, 0x00,
	0x07, 0x0f, 0x3c, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x1c, 0x78, 0x00,
	0x00, 0x7f, 0xce, 0x00, 0x07, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x78, 0x00,
	0x80, 0x60, 0x38, 0x00, 0x0f, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3c, 0x00, 0x78, 0x38, 0x00,
	0x00, 0x03, 0x30, 0x00, 0x02, 0x03, 0xff, 0x3f, 0xff, 0xfc, 0x1c, 0x38, 0x00, 0x32, 0x3c, 0x00,
	0x00, 0xff, 0xf0, 0x00, 0x03, 0x00, 0xe3, 0x7f, 0xff, 0xf0, 0x1e, 0x1e, 0x06, 0x3f, 0x1c, 0x00,
	0x00, 0xcc, 0x7f, 0x80, 0x0e, 0x00, 0xcf, 0xff, 0xff, 0xf0, 0x0c, 0x1f, 0x00, 0x0f, 0x1c, 0x00,
	0x07, 0xc0, 0x7f, 0xfe, 0x8c, 0x80, 0x07, 0x0f, 0xe3, 0xf0, 0x0e, 0x1f, 0x00, 0x07, 0x1c, 0x00,
	0xc3, 0xfb, 0xff, 0xff, 0xfe, 0x00, 0x3f, 0xfc, 0x01, 0xff, 0x8e, 0x0f, 0x00, 0x03, 0x04, 0x00,
	0x83, 0xfc, 0xcf, 0xa0, 0x00, 0x03, 0x3f, 0x30, 0x03, 0xff, 0xff, 0x0f, 0xff, 0xf3, 0x00, 0x00,
	0x83, 0xff, 0xc0, 0x00, 0x00, 0x03, 0x3f, 0x00, 0x03, 0xff, 0xff, 0x0f, 0xff, 0xff, 0x00, 0x00,
	0x03, 0xff, 0x80, 0x00, 0x00, 0x07, 0x3f, 0xc0, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x80, 0x00,
	0xc3, 0xff, 0x03, 0x80, 0x00, 0x0f, 0x3f, 0xc0, 0x0f, 0xff, 0xff, 0x07, 0xff, 0xff, 0xc0, 0x00,
	0xc3, 0xff, 0x87, 0x00, 0x00, 0x07, 0x3f, 0x00, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xc0, 0x00,
	0xc3, 0xff, 0xc0, 0x00, 0x03, 0x00, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xe0, 0x00, 0x00,
	0x03, 0xff, 0xe0, 0x38, 0x03, 0xc8, 0x33, 0x1f, 0xff, 0xff, 0xff, 0x83, 0xf8, 0x00, 0x00, 0x00,
	0xe1, 0xff, 0xf0, 0x07, 0x0f, 0xfc, 0x33, 0x0f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x00, 0x00,
	0xcf, 0xcf, 0xfc, 0x07, 0xff, 0xc4, 0x33, 0xc7, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xc0,
	0xcf, 0xf3, 0xf8, 0x0f, 0xfb, 0xf0, 0x13, 0xc7, 0xcf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff,
	0xfc, 0xff, 0x3c, 0x0f, 0xff, 0xfc, 0x03, 0xc3, 0xc1, 0xef, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff,

};

const unsigned char eddylogo4 []  = {

	// 'eddy4, 128x64px
	0xff, 0x3f, 0xbe, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x1c, 0xc8,
	0xc7, 0x00, 0x00, 0x00, 0x01, 0x30, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc3, 0x38, 0x18,
	0xf8, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x00,
	0x3f, 0xff, 0xff, 0xc0, 0x04, 0x00, 0x00, 0x00, 0x02, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x61,
	0xff, 0xff, 0xff, 0xfc, 0x02, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00,
	0xf3, 0xff, 0xff, 0x8c, 0x32, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00,
	0xdf, 0xff, 0xfe, 0x3c, 0x1e, 0x00, 0x00, 0x84, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00,
	0xff, 0xff, 0xfb, 0x0f, 0x1f, 0x30, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00,
	0x3f, 0xfc, 0x3f, 0xfc, 0x10, 0x40, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00,
	0xff, 0xc0, 0x03, 0xff, 0xff, 0x80, 0x1c, 0x07, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xf8, 0x0f,
	0xfc, 0x00, 0x0f, 0xf0, 0x3f, 0xc0, 0xfc, 0x4f, 0xff, 0xfc, 0x00, 0x1f, 0xff, 0xff, 0xfc, 0x0f,
	0x00, 0x0e, 0x0f, 0xf0, 0x03, 0xcf, 0x03, 0x87, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf0, 0x3f,
	0x00, 0x00, 0x07, 0xe0, 0x00, 0x3f, 0xf0, 0x37, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xf9, 0xf3, 0xff,
	0x00, 0x40, 0x07, 0xc0, 0x00, 0x3c, 0xff, 0x83, 0xfe, 0x00, 0x00, 0xff, 0x3f, 0xff, 0xc3, 0xff,
	0xf8, 0x00, 0x03, 0xc0, 0x00, 0x0f, 0x37, 0xf7, 0xf0, 0x03, 0xf7, 0xff, 0xff, 0xc6, 0x03, 0xff,
	0xff, 0x00, 0x01, 0x80, 0x00, 0x03, 0x80, 0xff, 0xf8, 0x01, 0xff, 0xef, 0xff, 0x1f, 0x03, 0xf8,
	0xfc, 0x00, 0x03, 0x80, 0x00, 0x00, 0xfe, 0x3f, 0xf0, 0x73, 0x3f, 0xff, 0xff, 0xf8, 0x0f, 0xff,
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfb, 0xff, 0xfe, 0x3f, 0xf1, 0xfc, 0x0f, 0xff,
	0xff, 0x00, 0x01, 0xf0, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xfc, 0x3f, 0x3e,
	0xff, 0xe0, 0x00, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xfc, 0x3f, 0xe0,
	0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7c, 0x3f, 0xff,
	0xf3, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x3f, 0xfb,
	0xc7, 0x83, 0xc0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x33, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f,
	0x00, 0x1f, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x23, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x0f,
	0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0xc0, 0x01, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x1f,
	0x1f, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xf3, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x3f,
	0x00, 0x3f, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xcc, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe0,
	0xfc, 0x03, 0xe3, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x87, 0xdf,
	0x00, 0xf0, 0x0e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x88, 0x05, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf3,
	0x1f, 0xf0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x33, 0xff, 0xff, 0xff, 0xff, 0x33, 0x1c,
	0xff, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0xc3,
	0xff, 0xf8, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x1f,
	0x0f, 0xf8, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xc0, 0xff,
	0x1f, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x83, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfe, 0x0f, 0x87, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x33, 0x06, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x0c, 0xc6, 0x07, 0xff,
	0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x0e, 0x07, 0xff,
	0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe0, 0x00, 0x00, 0x02, 0x07, 0xff,
	0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x02, 0x07, 0xff,
	0xff, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x06, 0x03, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0x00, 0x00, 0x00, 0x10, 0x0f, 0xff,
	0xff, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xfc, 0x01, 0xff, 0x00, 0x00, 0x04, 0x00, 0x07, 0xff,
	0xff, 0xf0, 0x00, 0x00, 0x33, 0xff, 0xff, 0xfc, 0x00, 0xff, 0x00, 0x00, 0x18, 0x00, 0x0f, 0xff,
	0x00, 0x00, 0x00, 0x0f, 0xe0, 0xff, 0xff, 0xe0, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x03, 0x1f, 0xff,
	0x00, 0x0f, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xe0, 0x00, 0x7f, 0x80, 0x00, 0x08, 0x40, 0x3f, 0xff,
	0x3f, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xf0, 0x0f, 0xff, 0xf0, 0x07, 0x7f, 0x00, 0xff, 0xff,
	0xff, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff,
	0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xf7, 0xff, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x30, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff,
	0xff, 0x3f, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x5f, 0x83, 0xff, 0xff,
	0xff, 0x1f, 0xf8, 0x00, 0x60, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x87, 0xff, 0xff,
	0xff, 0x1f, 0xf8, 0x0f, 0xf3, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff,
	0xff, 0x0f, 0xf0, 0x7c, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xdf, 0x1f, 0xff, 0xff,
	0xfe, 0x0f, 0xff, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x3f, 0x3f, 0xff, 0xff,
	0xfc, 0x07, 0x80, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0xff, 0xff, 0xff,
	0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff,
	0xfc, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xf3, 0xff, 0xff, 0xff,
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xff, 0xff, 0xcf, 0xcf, 0xff, 0xff, 0xff,
	0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff,
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff,
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf3, 0x8f, 0xff, 0xff, 0xff, 0xff,
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff
};



#endif
