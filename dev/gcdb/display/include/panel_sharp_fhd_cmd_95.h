/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_SHARP_FHD_CMD_95_H_
#define _PANEL_SHARP_FHD_CMD_95_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config sharp_fhd_cmd_95_panel_data = {
	"qcom,mdss_dsi_sharp_fhd_cmd_95", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 1, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution sharp_fhd_cmd_95_panel_res = {
	//1080, 1920, 80, 40, 10, 0, 4, 4, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0
	1080, 1920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info sharp_fhd_cmd_95_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char sharp_fhd_cmd_95_on_cmd0[] = {
	0xFF, 0x10, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd1[] = {
	0xBB, 0x10, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd2[] = {
	0xB0, 0x03, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd3[] = {
	0xFF, 0x24, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd4[] = {
	0xC4, 0x69, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd5[] = {
	0xC9, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd6[] = {
	0xFB, 0x01, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd7[] = {
	0xFF, 0x22, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd8[] = {
	0xFB, 0x01, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd9[] = {
	0x00, 0x28, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd10[] = {
	0x01, 0x2C, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd11[] = {
	0x02, 0x30, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd12[] = {
	0x03, 0x34, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd13[] = {
	0x04, 0x38, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd14[] = {
	0x05, 0x3C, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd15[] = {
	0x06, 0x40, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd16[] = {
	0x07, 0x48, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd17[] = {
	0x08, 0x4C, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd18[] = {
	0x09, 0x50, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd19[] = {
	0x0A, 0x58, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd20[] = {
	0x0B, 0x60, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd21[] = {
	0x0C, 0x60, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd22[] = {
	0x0D, 0x58, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd23[] = {
	0x0E, 0x50, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd24[] = {
	0x0F, 0x48, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd25[] = {
	0x10, 0x38, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd26[] = {
	0x11, 0x28, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd27[] = {
	0x12, 0x28, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd28[] = {
	0x13, 0x28, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd29[] = {
	0x1B, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd30[] = {
	0x1C, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd31[] = {
	0x1D, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd32[] = {
	0x1E, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd33[] = {
	0x1F, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd34[] = {
	0x20, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd35[] = {
	0x21, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd36[] = {
	0x22, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd37[] = {
	0x23, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd38[] = {
	0x24, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd39[] = {
	0x25, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd40[] = {
	0x26, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd41[] = {
	0x27, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd42[] = {
	0x28, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd43[] = {
	0x29, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd44[] = {
	0x2A, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd45[] = {
	0x2B, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd46[] = {
	0x2F, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd47[] = {
	0x30, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd48[] = {
	0x31, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd49[] = {
	0x32, 0x80, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd50[] = {
	0x33, 0x80, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd51[] = {
	0x34, 0x80, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd52[] = {
	0x35, 0x82, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd53[] = {
	0x36, 0x84, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd54[] = {
	0x37, 0x86, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd55[] = {
	0x38, 0x88, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd56[] = {
	0x39, 0x8A, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd57[] = {
	0x3A, 0x8C, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd58[] = {
	0x3B, 0x8E, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd59[] = {
	0x3F, 0x90, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd60[] = {
	0x40, 0x92, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd61[] = {
	0x41, 0x94, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd62[] = {
	0x42, 0x94, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd63[] = {
	0x43, 0x92, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd64[] = {
	0x44, 0x90, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd65[] = {
	0x45, 0x8E, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd66[] = {
	0x46, 0x8C, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd67[] = {
	0x47, 0x8A, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd68[] = {
	0x48, 0x88, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd69[] = {
	0x49, 0x86, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd70[] = {
	0x4A, 0x84, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd71[] = {
	0x4B, 0x82, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd72[] = {
	0x4C, 0x80, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd73[] = {
	0x4D, 0x08, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd74[] = {
	0x1A, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd75[] = {
	0x53, 0x01, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd76[] = {
	0x54, 0x01, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd77[] = {
	0x56, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd78[] = {
	0x64, 0x2F, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd79[] = {
	0x68, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd80[] = {
	0xFF, 0x10, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd81[] = {
	0x35, 0x00, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd82[] = {
	0x11, 0x00, 0x05, 0x80
};

static char sharp_fhd_cmd_95_on_cmd83[] = {
	0x51, 0xde, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd84[] = {
	0x53, 0x2c, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd85[] = {
	0x55, 0x80, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd86[] = {
	0xFF, 0xF0, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd87[] = {
	0x92, 0x01, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd88[] = {
	0x13, 0x01, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd89[] = {
	0xFF, 0x10, 0x15, 0x80
};

static char sharp_fhd_cmd_95_on_cmd90[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd sharp_fhd_cmd_95_on_command[] = {
	{0x4, sharp_fhd_cmd_95_on_cmd0,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd1,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd2,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd3,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd4,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd5,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd6,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd7,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd8,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd9,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd10,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd11,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd12,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd13,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd14,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd15,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd16,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd17,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd18,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd19,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd20,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd21,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd22,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd23,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd24,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd25,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd26,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd27,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd28,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd29,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd30,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd31,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd32,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd33,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd34,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd35,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd36,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd37,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd38,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd39,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd40,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd41,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd42,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd43,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd44,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd45,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd46,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd47,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd48,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd49,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd50,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd51,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd52,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd53,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd54,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd55,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd56,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd57,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd58,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd59,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd60,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd61,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd62,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd63,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd64,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd65,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd66,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd67,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd68,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd69,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd70,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd71,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd72,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd73,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd74,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd75,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd76,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd77,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd78,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd79,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd80,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd81,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd82,0x78 },
	{0x4, sharp_fhd_cmd_95_on_cmd83,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd84,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd85,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd86,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd87,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd88,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd89,0x01 },
	{0x4, sharp_fhd_cmd_95_on_cmd90,0x28 }
};

#define SHARP_FHD_CMD_95_ON_COMMAND 91


static char sharp_fhd_cmd_95off_cmd0[] = {
	0xFF, 0x10, 0x15, 0x80
};

static char sharp_fhd_cmd_95off_cmd1[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x28, 0x00, 0xFF, 0xFF,
};

static char sharp_fhd_cmd_95off_cmd2[] = {
	0x02, 0x00, 0x39, 0xC0,
	0x10, 0x00, 0xFF, 0xFF,
};

static struct mipi_dsi_cmd sharp_fhd_cmd_95_off_command[] = {
	{0x4, sharp_fhd_cmd_95off_cmd0,0x00 },
	{0x8, sharp_fhd_cmd_95off_cmd1,0x11 },
	{0x8, sharp_fhd_cmd_95off_cmd2,0x44 }
};

#define SHARP_FHD_CMD_95_OFF_COMMAND 3


static struct command_state sharp_fhd_cmd_95_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info sharp_fhd_cmd_95_command_panel = {
	1, 1, 1, 0, 0, 0x2c, 0/* 0 */, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info sharp_fhd_cmd_95_video_panel = {
	0, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration sharp_fhd_cmd_95_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t sharp_fhd_cmd_95_timings[] = {
	0xe3 ,0x50 ,0x36 ,0x00 ,0xa9 ,0xa3 ,0x3a ,0x50 ,0x3d ,0x03 ,0x04 ,0x00
};

static struct panel_timing sharp_fhd_cmd_95_timing_info = {
	0x0, 0x04, 0x20, 0x36
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence sharp_fhd_cmd_95_reset_seq = {
	{1, 0, 1, }, {20, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight sharp_fhd_cmd_95_backlight = {
	1, 1, 4095, 100, 1, "PMIC_8941"
};

#endif /*_PANEL_SHARP_FHD_CMD_95_H_*/
