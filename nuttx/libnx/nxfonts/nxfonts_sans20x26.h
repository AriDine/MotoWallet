/****************************************************************************
 * libnx/nxfonts/nxfonts_serif30x26.h
 *
 *   Copyright (C) 2011-2012 NX Engineering, S.A., All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT}
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING}
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __GRAPHICS_NXFONTS_NXFONTS_SANS20X26_H
#define __GRAPHICS_NXFONTS_NXFONTS_SANS20X26_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-Processor Definitions
 ****************************************************************************/

/* Font ID */

#define NXFONT_ID         FONTID_SANS20X26

/* Ranges of 7-bit and 8-bit fonts */

#define NXFONT_MIN7BIT    33
#define NXFONT_MAX7BIT    126

#define NXFONT_MIN8BIT    161
#define NXFONT_MAX8BIT    255

/* Maximum height and width of any glyph in the set */

#define NXFONT_MAXHEIGHT  26
#define NXFONT_MAXWIDTH   20

/* The width of a space */

#define NXFONT_SPACEWIDTH 5

/* exclam (33) */
#define NXFONT_METRICS_33 {1, 1, 12, 2, 8, 0}
#define NXFONT_BITMAP_33 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 0x80, 0x80}

/* quotedbl (34) */
#define NXFONT_METRICS_34 {1, 4, 4, 1, 8, 0}
#define NXFONT_BITMAP_34 {0x90, 0x90, 0x90, 0x90}

/* numbersign (35) */
#define NXFONT_METRICS_35 {1, 8, 11, 0, 9, 0}
#define NXFONT_BITMAP_35 {0x12, 0x12, 0x12, 0x7f, 0x24, 0x24, 0x24, 0xfe, 0x48, 0x48, 0x48}

/* dollar (36) */
#define NXFONT_METRICS_36 {1, 7, 15, 1, 7, 0}
#define NXFONT_BITMAP_36 {0x10, 0x7c, 0x92, 0x92, 0x90, 0x50, 0x30, 0x18, 0x14, 0x12, 0x92, 0x92, 0x7c, 0x10, 0x10}

/* percent (37) */
#define NXFONT_METRICS_37 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_37 {0x70, 0x40, 0x88, 0x80, 0x88, 0x80, 0x89, 0x0, 0x72, 0x0, 0x2, 0x0, 0x4, 0x0, 0x4, 0xe0, 0x9, 0x10, 0x11, 0x10, 0x11, 0x10, 0x20, 0xe0}

/* ampersand (38) */
#define NXFONT_METRICS_38 {2, 10, 12, 0, 8, 0}
#define NXFONT_BITMAP_38 {0x18, 0x0, 0x24, 0x0, 0x42, 0x0, 0x42, 0x0, 0x24, 0x0, 0x18, 0x0, 0x29, 0x0, 0x45, 0x0, 0x82, 0x0, 0x83, 0x0, 0x44, 0x80, 0x38, 0x40}

/* quotesingle (39) */
#define NXFONT_METRICS_39 {1, 2, 4, 0, 8, 0}
#define NXFONT_BITMAP_39 {0xc0, 0xc0, 0x40, 0x40}

/* parenleft (40) */
#define NXFONT_METRICS_40 {1, 3, 16, 1, 8, 0}
#define NXFONT_BITMAP_40 {0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20}

/* parenright (41) */
#define NXFONT_METRICS_41 {1, 3, 16, 1, 8, 0}
#define NXFONT_BITMAP_41 {0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80}

/* asterisk (42) */
#define NXFONT_METRICS_42 {1, 5, 5, 0, 8, 0}
#define NXFONT_BITMAP_42 {0x20, 0xa8, 0x70, 0x50, 0x88}

/* plus (43) */
#define NXFONT_METRICS_43 {2, 9, 9, 0, 11, 0}
#define NXFONT_BITMAP_43 {0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0xff, 0x80, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0}

/* comma (44) */
#define NXFONT_METRICS_44 {1, 2, 4, 1, 18, 0}
#define NXFONT_BITMAP_44 {0x40, 0x40, 0x40, 0x80}

/* hyphen (45) */
#define NXFONT_METRICS_45 {1, 4, 1, 0, 15, 0}
#define NXFONT_BITMAP_45 {0xf0}

/* period (46) */
#define NXFONT_METRICS_46 {1, 1, 2, 2, 18, 0}
#define NXFONT_BITMAP_46 {0x80, 0x80}

/* slash (47) */
#define NXFONT_METRICS_47 {1, 4, 12, 0, 8, 0}
#define NXFONT_BITMAP_47 {0x10, 0x10, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80}

/* zero (48) */
#define NXFONT_METRICS_48 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_48 {0x38, 0x44, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x44, 0x38}

/* one (49) */
#define NXFONT_METRICS_49 {1, 3, 12, 3, 8, 0}
#define NXFONT_BITMAP_49 {0x20, 0x20, 0x60, 0xa0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

/* two (50) */
#define NXFONT_METRICS_50 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_50 {0x38, 0x44, 0x82, 0x82, 0x2, 0x4, 0x8, 0x30, 0x40, 0x80, 0x80, 0xfe}

/* three (51) */
#define NXFONT_METRICS_51 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_51 {0x38, 0x44, 0x82, 0x82, 0x4, 0x38, 0x4, 0x2, 0x82, 0x82, 0x44, 0x38}

/* four (52) */
#define NXFONT_METRICS_52 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_52 {0xc, 0x14, 0x14, 0x24, 0x24, 0x44, 0x44, 0x84, 0xff, 0x4, 0x4, 0x4}

/* five (53) */
#define NXFONT_METRICS_53 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_53 {0x3e, 0x20, 0x20, 0x40, 0x78, 0x44, 0x2, 0x2, 0x2, 0x82, 0x44, 0x38}

/* six (54) */
#define NXFONT_METRICS_54 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_54 {0x3c, 0x42, 0x82, 0x80, 0xb8, 0xc4, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* seven (55) */
#define NXFONT_METRICS_55 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_55 {0xff, 0x1, 0x2, 0x4, 0x4, 0x8, 0x8, 0x10, 0x10, 0x10, 0x20, 0x20}

/* eight (56) */
#define NXFONT_METRICS_56 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_56 {0x38, 0x44, 0x82, 0x82, 0x44, 0x38, 0x44, 0x82, 0x82, 0x82, 0x44, 0x38}

/* nine (57) */
#define NXFONT_METRICS_57 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_57 {0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x46, 0x3a, 0x2, 0x82, 0x84, 0x78}

/* colon (58) */
#define NXFONT_METRICS_58 {1, 1, 9, 2, 11, 0}
#define NXFONT_BITMAP_58 {0x80, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80}

/* semicolon (59) */
#define NXFONT_METRICS_59 {1, 2, 11, 1, 11, 0}
#define NXFONT_BITMAP_59 {0x40, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0x40, 0x40, 0x80}

/* less (60) */
#define NXFONT_METRICS_60 {2, 9, 9, 0, 11, 0}
#define NXFONT_BITMAP_60 {0x1, 0x80, 0x6, 0x0, 0x18, 0x0, 0x60, 0x0, 0x80, 0x0, 0x60, 0x0, 0x18, 0x0, 0x6, 0x0, 0x1, 0x80}

/* equal (61) */
#define NXFONT_METRICS_61 {1, 8, 4, 0, 14, 0}
#define NXFONT_BITMAP_61 {0xff, 0x0, 0x0, 0xff}

/* greater (62) */
#define NXFONT_METRICS_62 {2, 9, 9, 1, 11, 0}
#define NXFONT_BITMAP_62 {0xc0, 0x0, 0x30, 0x0, 0xc, 0x0, 0x3, 0x0, 0x0, 0x80, 0x3, 0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x0}

/* question (63) */
#define NXFONT_METRICS_63 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_63 {0x38, 0x44, 0x82, 0x82, 0x2, 0x4, 0x8, 0x10, 0x10, 0x0, 0x10, 0x10}

/* at (64) */
#define NXFONT_METRICS_64 {2, 13, 14, 1, 8, 0}
#define NXFONT_BITMAP_64 {0x7, 0x80, 0x18, 0x60, 0x20, 0x10, 0x43, 0xd0, 0x4c, 0x48, 0x88, 0x48, 0x90, 0x88, 0x90, 0x88, 0x90, 0x90, 0x99, 0x90, 0x4e, 0x60, 0x40, 0x0, 0x30, 0x60, 0xf, 0x80}

/* A (65) */
#define NXFONT_METRICS_65 {2, 10, 12, 0, 8, 0}
#define NXFONT_BITMAP_65 {0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* B (66) */
#define NXFONT_METRICS_66 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_66 {0xfc, 0x0, 0x82, 0x0, 0x81, 0x0, 0x81, 0x0, 0x82, 0x0, 0xfe, 0x0, 0x81, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x0, 0xfe, 0x0}

/* C (67) */
#define NXFONT_METRICS_67 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_67 {0xf, 0x0, 0x30, 0x80, 0x40, 0x40, 0x40, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x40, 0x0, 0x40, 0x40, 0x30, 0x80, 0xf, 0x0}

/* D (68) */
#define NXFONT_METRICS_68 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_68 {0xfc, 0x0, 0x83, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x80, 0x80, 0x83, 0x0, 0xfc, 0x0}

/* E (69) */
#define NXFONT_METRICS_69 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_69 {0xff, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff}

/* F (70) */
#define NXFONT_METRICS_70 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_70 {0xfe, 0x80, 0x80, 0x80, 0x80, 0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* G (71) */
#define NXFONT_METRICS_71 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_71 {0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x0, 0x80, 0x0, 0x80, 0x0, 0x87, 0xc0, 0x80, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x31, 0x40, 0xe, 0x40}

/* H (72) */
#define NXFONT_METRICS_72 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_72 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* I (73) */
#define NXFONT_METRICS_73 {1, 1, 12, 1, 8, 0}
#define NXFONT_BITMAP_73 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* J (74) */
#define NXFONT_METRICS_74 {1, 6, 12, 0, 8, 0}
#define NXFONT_BITMAP_74 {0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x84, 0x84, 0x84, 0x78}

/* K (75) */
#define NXFONT_METRICS_75 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_75 {0x81, 0x82, 0x84, 0x88, 0x90, 0xb0, 0xc8, 0x88, 0x84, 0x82, 0x82, 0x81}

/* L (76) */
#define NXFONT_METRICS_76 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_76 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfe}

/* M (77) */
#define NXFONT_METRICS_77 {2, 11, 12, 1, 8, 0}
#define NXFONT_BITMAP_77 {0x80, 0x20, 0xc0, 0x60, 0xc0, 0x60, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x91, 0x20, 0x91, 0x20, 0x91, 0x20, 0x8a, 0x20, 0x8a, 0x20, 0x84, 0x20}

/* N (78) */
#define NXFONT_METRICS_78 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_78 {0x80, 0x80, 0xc0, 0x80, 0xa0, 0x80, 0xa0, 0x80, 0x90, 0x80, 0x88, 0x80, 0x88, 0x80, 0x84, 0x80, 0x82, 0x80, 0x82, 0x80, 0x81, 0x80, 0x80, 0x80}

/* O (79) */
#define NXFONT_METRICS_79 {2, 11, 12, 1, 8, 0}
#define NXFONT_BITMAP_79 {0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x40, 0x40, 0x31, 0x80, 0xe, 0x0}

/* P (80) */
#define NXFONT_METRICS_80 {1, 8, 12, 2, 8, 0}
#define NXFONT_BITMAP_80 {0xfc, 0x82, 0x81, 0x81, 0x82, 0xfc, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* Q (81) */
#define NXFONT_METRICS_81 {2, 11, 13, 1, 8, 0}
#define NXFONT_BITMAP_81 {0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x42, 0x40, 0x31, 0x80, 0xe, 0x80, 0x0, 0x40}

/* R (82) */
#define NXFONT_METRICS_82 {2, 9, 12, 2, 8, 0}
#define NXFONT_BITMAP_82 {0xfc, 0x0, 0x82, 0x0, 0x81, 0x0, 0x81, 0x0, 0x82, 0x0, 0xfc, 0x0, 0x82, 0x0, 0x81, 0x0, 0x81, 0x0, 0x81, 0x0, 0x81, 0x0, 0x80, 0x80}

/* S (83) */
#define NXFONT_METRICS_83 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_83 {0x3e, 0x0, 0x41, 0x0, 0x80, 0x80, 0x80, 0x80, 0x40, 0x0, 0x30, 0x0, 0xe, 0x0, 0x1, 0x0, 0x80, 0x80, 0x80, 0x80, 0x41, 0x0, 0x3e, 0x0}

/* T (84) */
#define NXFONT_METRICS_84 {2, 9, 12, 0, 8, 0}
#define NXFONT_BITMAP_84 {0xff, 0x80, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0}

/* U (85) */
#define NXFONT_METRICS_85 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_85 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x41, 0x0, 0x3e, 0x0}

/* V (86) */
#define NXFONT_METRICS_86 {2, 10, 12, 0, 8, 0}
#define NXFONT_BITMAP_86 {0x80, 0x40, 0x80, 0x40, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x21, 0x0, 0x21, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0xc, 0x0, 0xc, 0x0}

/* W (87) */
#define NXFONT_METRICS_87 {2, 13, 12, 1, 8, 0}
#define NXFONT_BITMAP_87 {0x82, 0x8, 0x82, 0x8, 0x82, 0x8, 0x45, 0x10, 0x45, 0x10, 0x45, 0x10, 0x28, 0xa0, 0x28, 0xa0, 0x28, 0xa0, 0x10, 0x40, 0x10, 0x40, 0x10, 0x40}

/* X (88) */
#define NXFONT_METRICS_88 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_88 {0x81, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x24, 0x24, 0x42, 0x42, 0x81}

/* Y (89) */
#define NXFONT_METRICS_89 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_89 {0x80, 0x80, 0x41, 0x0, 0x41, 0x0, 0x22, 0x0, 0x22, 0x0, 0x14, 0x0, 0x1c, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0}

/* Z (90) */
#define NXFONT_METRICS_90 {2, 9, 12, 0, 8, 0}
#define NXFONT_BITMAP_90 {0x7f, 0x80, 0x1, 0x0, 0x3, 0x0, 0x2, 0x0, 0x4, 0x0, 0xc, 0x0, 0x8, 0x0, 0x10, 0x0, 0x30, 0x0, 0x20, 0x0, 0x40, 0x0, 0xff, 0x80}

/* bracketleft (91) */
#define NXFONT_METRICS_91 {1, 3, 15, 1, 8, 0}
#define NXFONT_BITMAP_91 {0xe0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xe0}

/* backslash (92) */
#define NXFONT_METRICS_92 {1, 4, 12, 0, 8, 0}
#define NXFONT_BITMAP_92 {0x80, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10, 0x10}

/* bracketright (93) */
#define NXFONT_METRICS_93 {1, 3, 15, 0, 8, 0}
#define NXFONT_BITMAP_93 {0xe0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xe0}

/* asciicircum (94) */
#define NXFONT_METRICS_94 {1, 7, 7, 0, 8, 0}
#define NXFONT_BITMAP_94 {0x10, 0x28, 0x28, 0x44, 0x44, 0x82, 0x82}

/* underscore (95) */
#define NXFONT_METRICS_95 {2, 9, 1, 0, 22, 0}
#define NXFONT_BITMAP_95 {0xff, 0x80}

/* grave (96) */
#define NXFONT_METRICS_96 {1, 3, 3, 0, 7, 0}
#define NXFONT_BITMAP_96 {0x80, 0xc0, 0x20}

/* a (97) */
#define NXFONT_METRICS_97 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_97 {0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* b (98) */
#define NXFONT_METRICS_98 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_98 {0x80, 0x80, 0x80, 0xb8, 0xc4, 0x82, 0x82, 0x82, 0x82, 0x82, 0xc4, 0xb8}

/* c (99) */
#define NXFONT_METRICS_99 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_99 {0x38, 0x44, 0x82, 0x80, 0x80, 0x80, 0x82, 0x44, 0x38}

/* d (100) */
#define NXFONT_METRICS_100 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_100 {0x2, 0x2, 0x2, 0x3a, 0x46, 0x82, 0x82, 0x82, 0x82, 0x82, 0x46, 0x3a}

/* e (101) */
#define NXFONT_METRICS_101 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_101 {0x38, 0x44, 0x82, 0x82, 0xfe, 0x80, 0x82, 0x44, 0x38}

/* f (102) */
#define NXFONT_METRICS_102 {1, 4, 12, 1, 8, 0}
#define NXFONT_BITMAP_102 {0x30, 0x40, 0x40, 0xf0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* g (103) */
#define NXFONT_METRICS_103 {1, 7, 13, 1, 11, 0}
#define NXFONT_BITMAP_103 {0x3a, 0x46, 0x82, 0x82, 0x82, 0x82, 0x82, 0x46, 0x3a, 0x2, 0x82, 0x84, 0x78}

/* h (104) */
#define NXFONT_METRICS_104 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_104 {0x80, 0x80, 0x80, 0xbc, 0xc2, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82}

/* i (105) */
#define NXFONT_METRICS_105 {1, 1, 12, 1, 8, 0}
#define NXFONT_BITMAP_105 {0x80, 0x80, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* j (106) -- NOTE: Xoffset should be -1, not 0. */
#define NXFONT_METRICS_106 {1, 3, 16, 0, 8, 0}
#define NXFONT_BITMAP_106 {0x20, 0x20, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc0}

/* k (107) */
#define NXFONT_METRICS_107 {1, 7, 12, 0, 8, 0}
#define NXFONT_BITMAP_107 {0x80, 0x80, 0x80, 0x84, 0x88, 0x90, 0xa0, 0xe0, 0x90, 0x88, 0x84, 0x82}

/* l (108) */
#define NXFONT_METRICS_108 {1, 1, 12, 1, 8, 0}
#define NXFONT_BITMAP_108 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* m (109) */
#define NXFONT_METRICS_109 {2, 11, 9, 2, 11, 0}
#define NXFONT_BITMAP_109 {0xb9, 0xc0, 0xc6, 0x20, 0x84, 0x20, 0x84, 0x20, 0x84, 0x20, 0x84, 0x20, 0x84, 0x20, 0x84, 0x20, 0x84, 0x20}

/* n (110) */
#define NXFONT_METRICS_110 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_110 {0xbc, 0xc2, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82}

/* o (111) */
#define NXFONT_METRICS_111 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_111 {0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* p (112) */
#define NXFONT_METRICS_112 {1, 7, 13, 1, 11, 0}
#define NXFONT_BITMAP_112 {0xb8, 0xc4, 0x82, 0x82, 0x82, 0x82, 0x82, 0xc4, 0xb8, 0x80, 0x80, 0x80, 0x80}

/* q (113) */
#define NXFONT_METRICS_113 {1, 7, 13, 1, 11, 0}
#define NXFONT_BITMAP_113 {0x3a, 0x46, 0x82, 0x82, 0x82, 0x82, 0x82, 0x46, 0x3a, 0x2, 0x2, 0x2, 0x2}

/* r (114) */
#define NXFONT_METRICS_114 {1, 4, 9, 1, 11, 0}
#define NXFONT_BITMAP_114 {0xb0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* s (115) */
#define NXFONT_METRICS_115 {1, 6, 9, 1, 11, 0}
#define NXFONT_BITMAP_115 {0x78, 0x84, 0x84, 0xc0, 0x30, 0xc, 0x84, 0x84, 0x78}

/* t (116) */
#define NXFONT_METRICS_116 {1, 4, 11, 1, 9, 0}
#define NXFONT_BITMAP_116 {0x40, 0x40, 0xf0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x30}

/* u (117) */
#define NXFONT_METRICS_117 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_117 {0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86, 0x7a}

/* v (118) */
#define NXFONT_METRICS_118 {1, 7, 9, 0, 11, 0}
#define NXFONT_BITMAP_118 {0x82, 0x82, 0x44, 0x44, 0x44, 0x28, 0x28, 0x38, 0x10}

/* w (119) */
#define NXFONT_METRICS_119 {2, 11, 9, 0, 11, 0}
#define NXFONT_BITMAP_119 {0x84, 0x20, 0x84, 0x20, 0x44, 0x40, 0x4e, 0x40, 0x4a, 0x40, 0x2a, 0x80, 0x2a, 0x80, 0x11, 0x0, 0x11, 0x0}

/* x (120) */
#define NXFONT_METRICS_120 {1, 7, 9, 0, 11, 0}
#define NXFONT_BITMAP_120 {0x82, 0x44, 0x44, 0x28, 0x10, 0x28, 0x44, 0x44, 0x82}

/* y (121) */
#define NXFONT_METRICS_121 {1, 7, 12, 0, 11, 0}
#define NXFONT_BITMAP_121 {0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x38, 0x10, 0x10, 0x20, 0x20, 0xc0}

/* z (122) */
#define NXFONT_METRICS_122 {1, 6, 9, 1, 11, 0}
#define NXFONT_BITMAP_122 {0xfc, 0x4, 0x8, 0x10, 0x20, 0x20, 0x40, 0x80, 0xfc}

/* braceleft (123) */
#define NXFONT_METRICS_123 {1, 3, 16, 1, 8, 0}
#define NXFONT_BITMAP_123 {0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20}

/* bar (124) */
#define NXFONT_METRICS_124 {1, 1, 16, 1, 8, 0}
#define NXFONT_BITMAP_124 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* braceright (125) */
#define NXFONT_METRICS_125 {1, 3, 16, 1, 8, 0}
#define NXFONT_BITMAP_125 {0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80}

/* asciitilde (126) */
#define NXFONT_METRICS_126 {1, 8, 2, 1, 14, 0}
#define NXFONT_BITMAP_126 {0x71, 0x8e}

/* exclamdown (161) */
#define NXFONT_METRICS_161 {1, 1, 12, 2, 11, 0}
#define NXFONT_BITMAP_161 {0x80, 0x80, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* cent (162) */
#define NXFONT_METRICS_162 {1, 7, 13, 1, 9, 0}
#define NXFONT_BITMAP_162 {0x4, 0x4, 0x38, 0x4c, 0x8a, 0x90, 0x90, 0x90, 0xa2, 0x64, 0x38, 0x40, 0x40}

/* sterling (163) */
#define NXFONT_METRICS_163 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_163 {0xe, 0x11, 0x21, 0x20, 0x20, 0x10, 0x7e, 0x8, 0x10, 0x20, 0x79, 0x86}

/* currency (164) */
#define NXFONT_METRICS_164 {1, 8, 7, 0, 10, 0}
#define NXFONT_BITMAP_164 {0xbd, 0x66, 0x42, 0x42, 0x42, 0x66, 0xbd}

/* yen (165) */
#define NXFONT_METRICS_165 {2, 9, 12, 0, 8, 0}
#define NXFONT_BITMAP_165 {0x80, 0x80, 0x41, 0x0, 0x41, 0x0, 0x22, 0x0, 0x22, 0x0, 0x14, 0x0, 0x7f, 0x0, 0x8, 0x0, 0x7f, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0}

/* brokenbar (166) */
#define NXFONT_METRICS_166 {1, 1, 16, 1, 8, 0}
#define NXFONT_BITMAP_166 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* section (167) */
#define NXFONT_METRICS_167 {1, 7, 15, 1, 8, 0}
#define NXFONT_BITMAP_167 {0x38, 0x44, 0x46, 0x60, 0x98, 0x8c, 0x86, 0xc2, 0x62, 0x32, 0x1c, 0x4, 0xc4, 0x44, 0x38}

/* dieresis (168) */
#define NXFONT_METRICS_168 {1, 3, 2, 1, 8, 0}
#define NXFONT_BITMAP_168 {0xa0, 0xa0}

/* copyright (169) */
#define NXFONT_METRICS_169 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_169 {0xf, 0x0, 0x30, 0xc0, 0x47, 0x20, 0x48, 0xa0, 0x90, 0x10, 0x90, 0x10, 0x90, 0x10, 0x90, 0x10, 0x48, 0xa0, 0x47, 0x20, 0x30, 0xc0, 0xf, 0x0}

/* ordfeminine (170) */
#define NXFONT_METRICS_170 {1, 5, 7, 1, 8, 0}
#define NXFONT_BITMAP_170 {0x60, 0x90, 0x70, 0x90, 0x78, 0x0, 0xf8}

/* guillemotleft (171) */
#define NXFONT_METRICS_171 {1, 6, 6, 1, 12, 0}
#define NXFONT_BITMAP_171 {0x24, 0x48, 0x90, 0x90, 0x48, 0x24}

/* logicalnot (172) */
#define NXFONT_METRICS_172 {1, 8, 5, 0, 14, 0}
#define NXFONT_BITMAP_172 {0xff, 0x1, 0x1, 0x1, 0x1}

/* hyphen (173) */
#define NXFONT_METRICS_173 {1, 4, 1, 0, 15, 0}
#define NXFONT_BITMAP_173 {0xf0}

/* registered (174) */
#define NXFONT_METRICS_174 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_174 {0xf, 0x0, 0x30, 0xc0, 0x40, 0x20, 0x4f, 0x20, 0x88, 0x90, 0x88, 0x90, 0x8f, 0x10, 0x8a, 0x10, 0x49, 0x20, 0x48, 0xa0, 0x30, 0xc0, 0xf, 0x0}

/* macron (175) */
#define NXFONT_METRICS_175 {1, 5, 1, 0, 9, 0}
#define NXFONT_BITMAP_175 {0xf8}

/* degree (176) */
#define NXFONT_METRICS_176 {1, 5, 5, 1, 8, 0}
#define NXFONT_BITMAP_176 {0x70, 0x88, 0x88, 0x88, 0x70}

/* plusminus (177) */
#define NXFONT_METRICS_177 {2, 9, 11, 0, 9, 0}
#define NXFONT_BITMAP_177 {0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0xff, 0x80, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x0, 0x0, 0xff, 0x80}

/* twosuperior (178) */
#define NXFONT_METRICS_178 {1, 5, 7, 0, 8, 0}
#define NXFONT_BITMAP_178 {0x70, 0x88, 0x88, 0x10, 0x60, 0x80, 0xf8}

/* threesuperior (179) */
#define NXFONT_METRICS_179 {1, 5, 7, 0, 8, 0}
#define NXFONT_BITMAP_179 {0x70, 0x88, 0x8, 0x30, 0x8, 0x88, 0x70}

/* acute (180) */
#define NXFONT_METRICS_180 {1, 3, 3, 1, 7, 0}
#define NXFONT_BITMAP_180 {0x20, 0x60, 0x80}

/* mu (181) */
#define NXFONT_METRICS_181 {1, 7, 13, 1, 11, 0}
#define NXFONT_BITMAP_181 {0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86, 0xfa, 0x80, 0x80, 0x80, 0x80}

/* paragraph (182) */
#define NXFONT_METRICS_182 {1, 7, 15, 1, 8, 0}
#define NXFONT_BITMAP_182 {0x3e, 0x74, 0xf4, 0xf4, 0xf4, 0xf4, 0x74, 0x34, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14}

/* periodcentered (183) */
#define NXFONT_METRICS_183 {1, 1, 2, 2, 14, 0}
#define NXFONT_BITMAP_183 {0x80, 0x80}

/* cedilla (184) */
#define NXFONT_METRICS_184 {1, 4, 4, 0, 20, 0}
#define NXFONT_BITMAP_184 {0x20, 0x20, 0x90, 0x60}

/* onesuperior (185) */
#define NXFONT_METRICS_185 {1, 3, 7, 0, 8, 0}
#define NXFONT_BITMAP_185 {0x20, 0xe0, 0x20, 0x20, 0x20, 0x20, 0x20}

/* ordmasculine (186) */
#define NXFONT_METRICS_186 {1, 4, 7, 1, 8, 0}
#define NXFONT_BITMAP_186 {0x60, 0x90, 0x90, 0x90, 0x60, 0x0, 0xf0}

/* guillemotright (187) */
#define NXFONT_METRICS_187 {1, 6, 6, 1, 12, 0}
#define NXFONT_BITMAP_187 {0x90, 0x48, 0x24, 0x24, 0x48, 0x90}

/* onequarter (188) */
#define NXFONT_METRICS_188 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_188 {0x20, 0x40, 0xe0, 0x80, 0x20, 0x80, 0x21, 0x0, 0x22, 0x0, 0x22, 0x20, 0x24, 0x60, 0x4, 0xa0, 0x9, 0x20, 0x11, 0xf0, 0x10, 0x20, 0x20, 0x20}

/* onehalf (189) */
#define NXFONT_METRICS_189 {2, 12, 13, 0, 7, 0}
#define NXFONT_BITMAP_189 {0x0, 0x40, 0x20, 0x80, 0xe0, 0x80, 0x21, 0x0, 0x22, 0x0, 0x22, 0x0, 0x24, 0xe0, 0x25, 0x10, 0x9, 0x10, 0x8, 0x20, 0x10, 0xc0, 0x21, 0x0, 0x21, 0xf0}

/* threequarters (190) */
#define NXFONT_METRICS_190 {2, 13, 12, 0, 8, 0}
#define NXFONT_BITMAP_190 {0x70, 0x40, 0x88, 0x40, 0x8, 0x80, 0x30, 0x80, 0x9, 0x0, 0x89, 0x10, 0x72, 0x30, 0x2, 0x50, 0x4, 0x90, 0x4, 0xf8, 0x8, 0x10, 0x8, 0x10}

/* questiondown (191) */
#define NXFONT_METRICS_191 {1, 7, 12, 1, 11, 0}
#define NXFONT_BITMAP_191 {0x10, 0x10, 0x0, 0x10, 0x10, 0x20, 0x40, 0x80, 0x82, 0x82, 0x44, 0x38}

/* Agrave (192) */
#define NXFONT_METRICS_192 {2, 10, 16, 0, 4, 0}
#define NXFONT_BITMAP_192 {0x10, 0x0, 0x18, 0x0, 0x4, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* Aacute (193) */
#define NXFONT_METRICS_193 {2, 10, 16, 0, 4, 0}
#define NXFONT_BITMAP_193 {0x2, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* Acircumflex (194) */
#define NXFONT_METRICS_194 {2, 10, 16, 0, 4, 0}
#define NXFONT_BITMAP_194 {0x4, 0x0, 0xe, 0x0, 0x11, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* Atilde (195) */
#define NXFONT_METRICS_195 {2, 10, 15, 0, 5, 0}
#define NXFONT_BITMAP_195 {0x1a, 0x0, 0x2c, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* Adieresis (196) */
#define NXFONT_METRICS_196 {2, 10, 15, 0, 5, 0}
#define NXFONT_BITMAP_196 {0x12, 0x0, 0x12, 0x0, 0x0, 0x0, 0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* Aring (197) */
#define NXFONT_METRICS_197 {2, 10, 15, 0, 5, 0}
#define NXFONT_BITMAP_197 {0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0xc, 0x0, 0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0x12, 0x0, 0x21, 0x0, 0x21, 0x0, 0x7f, 0x80, 0x40, 0x80, 0x40, 0x80, 0x80, 0x40, 0x80, 0x40}

/* AE (198) */
#define NXFONT_METRICS_198 {2, 14, 12, 0, 8, 0}
#define NXFONT_BITMAP_198 {0x7, 0xfc, 0x9, 0x0, 0x9, 0x0, 0x11, 0x0, 0x11, 0x0, 0x21, 0xfc, 0x21, 0x0, 0x7f, 0x0, 0x41, 0x0, 0x41, 0x0, 0x81, 0x0, 0x81, 0xfc}

/* Ccedilla (199) */
#define NXFONT_METRICS_199 {2, 10, 16, 1, 8, 0}
#define NXFONT_BITMAP_199 {0xf, 0x0, 0x30, 0x80, 0x40, 0x40, 0x40, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x80, 0x0, 0x40, 0x0, 0x40, 0x40, 0x30, 0x80, 0xf, 0x0, 0x4, 0x0, 0x4, 0x0, 0x12, 0x0, 0xc, 0x0}

/* Egrave (200) */
#define NXFONT_METRICS_200 {1, 8, 16, 1, 4, 0}
#define NXFONT_BITMAP_200 {0x20, 0x30, 0x8, 0x0, 0xff, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff}

/* Eacute (201) */
#define NXFONT_METRICS_201 {1, 8, 16, 1, 4, 0}
#define NXFONT_BITMAP_201 {0x4, 0xc, 0x10, 0x0, 0xff, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff}

/* Ecircumflex (202) */
#define NXFONT_METRICS_202 {1, 8, 16, 1, 4, 0}
#define NXFONT_BITMAP_202 {0x10, 0x38, 0x44, 0x0, 0xff, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff}

/* Edieresis (203) */
#define NXFONT_METRICS_203 {1, 8, 15, 1, 5, 0}
#define NXFONT_BITMAP_203 {0x24, 0x24, 0x0, 0xff, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff}

/* Igrave (204) */
#define NXFONT_METRICS_204 {1, 3, 16, 0, 4, 0}
#define NXFONT_BITMAP_204 {0x80, 0xc0, 0x20, 0x0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* Iacute (205) */
#define NXFONT_METRICS_205 {1, 3, 16, 0, 4, 0}
#define NXFONT_BITMAP_205 {0x20, 0x60, 0x80, 0x0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* Icircumflex (206) -- NOTE: Xoffset should be -1, not 0. */
#define NXFONT_METRICS_206 {1, 5, 16, 0, 4, 0}
#define NXFONT_BITMAP_206 {0x20, 0x70, 0x88, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

/* Idieresis (207) */
#define NXFONT_METRICS_207 {1, 3, 15, 0, 5, 0}
#define NXFONT_BITMAP_207 {0xa0, 0xa0, 0x0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* Eth (208) */
#define NXFONT_METRICS_208 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_208 {0x3f, 0x0, 0x20, 0xc0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0xf8, 0x10, 0x20, 0x10, 0x20, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x3f, 0x0}

/* Ntilde (209) */
#define NXFONT_METRICS_209 {2, 9, 15, 1, 5, 0}
#define NXFONT_BITMAP_209 {0x1a, 0x0, 0x2c, 0x0, 0x0, 0x0, 0x80, 0x80, 0xc0, 0x80, 0xa0, 0x80, 0xa0, 0x80, 0x90, 0x80, 0x88, 0x80, 0x88, 0x80, 0x84, 0x80, 0x82, 0x80, 0x82, 0x80, 0x81, 0x80, 0x80, 0x80}

/* Ograve (210) */
#define NXFONT_METRICS_210 {2, 11, 16, 1, 4, 0}
#define NXFONT_BITMAP_210 {0x8, 0x0, 0xc, 0x0, 0x2, 0x0, 0x0, 0x0, 0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x40, 0x40, 0x31, 0x80, 0xe, 0x0}

/* Oacute (211) */
#define NXFONT_METRICS_211 {2, 11, 16, 1, 4, 0}
#define NXFONT_BITMAP_211 {0x1, 0x0, 0x3, 0x0, 0x4, 0x0, 0x0, 0x0, 0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x40, 0x40, 0x31, 0x80, 0xe, 0x0}

/* Ocircumflex (212) */
#define NXFONT_METRICS_212 {2, 11, 16, 1, 4, 0}
#define NXFONT_BITMAP_212 {0x4, 0x0, 0xe, 0x0, 0x11, 0x0, 0x0, 0x0, 0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x40, 0x40, 0x31, 0x80, 0xe, 0x0}

/* Otilde (213) */
#define NXFONT_METRICS_213 {2, 11, 15, 1, 5, 0}
#define NXFONT_BITMAP_213 {0xd, 0x0, 0x16, 0x0, 0x0, 0x0, 0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x40, 0x40, 0x31, 0x80, 0xe, 0x0}

/* Odieresis (214) */
#define NXFONT_METRICS_214 {2, 11, 15, 1, 5, 0}
#define NXFONT_BITMAP_214 {0x11, 0x0, 0x11, 0x0, 0x0, 0x0, 0xe, 0x0, 0x31, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x80, 0x20, 0x40, 0x40, 0x40, 0x40, 0x31, 0x80, 0xe, 0x0}

/* multiply (215) */
#define NXFONT_METRICS_215 {1, 8, 8, 1, 12, 0}
#define NXFONT_BITMAP_215 {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81}

/* Oslash (216) */
#define NXFONT_METRICS_216 {2, 11, 14, 1, 7, 0}
#define NXFONT_BITMAP_216 {0x0, 0x40, 0xe, 0x80, 0x31, 0x80, 0x41, 0x40, 0x42, 0x40, 0x82, 0x20, 0x84, 0x20, 0x84, 0x20, 0x88, 0x20, 0x48, 0x40, 0x50, 0x40, 0x31, 0x80, 0x2e, 0x0, 0x40, 0x0}

/* Ugrave (217) */
#define NXFONT_METRICS_217 {2, 9, 16, 1, 4, 0}
#define NXFONT_BITMAP_217 {0x20, 0x0, 0x30, 0x0, 0x8, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x41, 0x0, 0x3e, 0x0}

/* Uacute (218) */
#define NXFONT_METRICS_218 {2, 9, 16, 1, 4, 0}
#define NXFONT_BITMAP_218 {0x2, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x41, 0x0, 0x3e, 0x0}

/* Ucircumflex (219) */
#define NXFONT_METRICS_219 {2, 9, 16, 1, 4, 0}
#define NXFONT_BITMAP_219 {0x8, 0x0, 0x1c, 0x0, 0x22, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x41, 0x0, 0x3e, 0x0}

/* Udieresis (220) */
#define NXFONT_METRICS_220 {2, 9, 15, 1, 5, 0}
#define NXFONT_BITMAP_220 {0x22, 0x0, 0x22, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x41, 0x0, 0x3e, 0x0}

/* Yacute (221) */
#define NXFONT_METRICS_221 {2, 9, 16, 1, 4, 0}
#define NXFONT_BITMAP_221 {0x2, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0x80, 0x80, 0x41, 0x0, 0x41, 0x0, 0x22, 0x0, 0x22, 0x0, 0x14, 0x0, 0x1c, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8, 0x0}

/* Thorn (222) */
#define NXFONT_METRICS_222 {1, 8, 12, 2, 8, 0}
#define NXFONT_BITMAP_222 {0x80, 0x80, 0xfc, 0x82, 0x81, 0x81, 0x82, 0xfc, 0x80, 0x80, 0x80, 0x80}

/* germandbls (223) */
#define NXFONT_METRICS_223 {1, 7, 12, 2, 8, 0}
#define NXFONT_BITMAP_223 {0x78, 0x84, 0x82, 0x82, 0x84, 0xbc, 0x86, 0x82, 0x82, 0x82, 0x84, 0xb8}

/* agrave (224) */
#define NXFONT_METRICS_224 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_224 {0x20, 0x30, 0x8, 0x0, 0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* aacute (225) */
#define NXFONT_METRICS_225 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_225 {0x4, 0xc, 0x10, 0x0, 0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* acircumflex (226) */
#define NXFONT_METRICS_226 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_226 {0x10, 0x38, 0x44, 0x0, 0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* atilde (227) */
#define NXFONT_METRICS_227 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_227 {0x34, 0x58, 0x0, 0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* adieresis (228) */
#define NXFONT_METRICS_228 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_228 {0x28, 0x28, 0x0, 0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* aring (229) */
#define NXFONT_METRICS_229 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_229 {0x10, 0x28, 0x10, 0x0, 0x7c, 0x82, 0x2, 0x6, 0x7a, 0x82, 0x82, 0x86, 0x7b}

/* ae (230) */
#define NXFONT_METRICS_230 {2, 13, 9, 1, 11, 0}
#define NXFONT_BITMAP_230 {0x7c, 0xe0, 0x83, 0x10, 0x2, 0x8, 0x6, 0x8, 0x7b, 0xf8, 0x82, 0x0, 0x82, 0x8, 0x87, 0x10, 0x78, 0xe0}

/* ccedilla (231) */
#define NXFONT_METRICS_231 {1, 7, 13, 1, 11, 0}
#define NXFONT_BITMAP_231 {0x38, 0x44, 0x82, 0x80, 0x80, 0x80, 0x82, 0x44, 0x38, 0x10, 0x10, 0x48, 0x30}

/* egrave (232) */
#define NXFONT_METRICS_232 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_232 {0x40, 0x60, 0x10, 0x0, 0x38, 0x44, 0x82, 0x82, 0xfe, 0x80, 0x82, 0x44, 0x38}

/* eacute (233) */
#define NXFONT_METRICS_233 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_233 {0x8, 0x18, 0x20, 0x0, 0x38, 0x44, 0x82, 0x82, 0xfe, 0x80, 0x82, 0x44, 0x38}

/* ecircumflex (234) */
#define NXFONT_METRICS_234 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_234 {0x10, 0x38, 0x44, 0x0, 0x38, 0x44, 0x82, 0x82, 0xfe, 0x80, 0x82, 0x44, 0x38}

/* edieresis (235) */
#define NXFONT_METRICS_235 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_235 {0x28, 0x28, 0x0, 0x38, 0x44, 0x82, 0x82, 0xfe, 0x80, 0x82, 0x44, 0x38}

/* igrave (236) */
#define NXFONT_METRICS_236 {1, 3, 13, 1, 7, 0}
#define NXFONT_BITMAP_236 {0x80, 0xc0, 0x20, 0x0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* iacute (237) */
#define NXFONT_METRICS_237 {1, 3, 13, 1, 7, 0}
#define NXFONT_BITMAP_237 {0x20, 0x60, 0x80, 0x0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* icircumflex (238) */
#define NXFONT_METRICS_238 {1, 5, 13, 0, 7, 0}
#define NXFONT_BITMAP_238 {0x20, 0x70, 0x88, 0x0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}

/* idieresis (239) */
#define NXFONT_METRICS_239 {1, 3, 12, 1, 8, 0}
#define NXFONT_BITMAP_239 {0xa0, 0xa0, 0x0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40}

/* eth (240) */
#define NXFONT_METRICS_240 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_240 {0x48, 0x30, 0x58, 0x3c, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* ntilde (241) */
#define NXFONT_METRICS_241 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_241 {0x34, 0x58, 0x0, 0xbc, 0xc2, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82}

/* ograve (242) */
#define NXFONT_METRICS_242 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_242 {0x20, 0x30, 0x8, 0x0, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* oacute (243) */
#define NXFONT_METRICS_243 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_243 {0x8, 0x18, 0x20, 0x0, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* ocircumflex (244) */
#define NXFONT_METRICS_244 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_244 {0x10, 0x38, 0x44, 0x0, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* otilde (245) */
#define NXFONT_METRICS_245 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_245 {0x34, 0x58, 0x0, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* odieresis (246) */
#define NXFONT_METRICS_246 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_246 {0x28, 0x28, 0x0, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x44, 0x38}

/* divide (247) */
#define NXFONT_METRICS_247 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_247 {0x10, 0x10, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x10, 0x10}

/* oslash (248) */
#define NXFONT_METRICS_248 {1, 7, 10, 1, 10, 0}
#define NXFONT_BITMAP_248 {0x2, 0x3c, 0x44, 0x8a, 0x92, 0x92, 0xa2, 0xa2, 0x44, 0xb8}

/* ugrave (249) */
#define NXFONT_METRICS_249 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_249 {0x20, 0x30, 0x8, 0x0, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86, 0x7a}

/* uacute (250) */
#define NXFONT_METRICS_250 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_250 {0x4, 0xc, 0x10, 0x0, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86, 0x7a}

/* ucircumflex (251) */
#define NXFONT_METRICS_251 {1, 7, 13, 1, 7, 0}
#define NXFONT_BITMAP_251 {0x10, 0x38, 0x44, 0x0, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86, 0x7a}

/* udieresis (252) */
#define NXFONT_METRICS_252 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_252 {0x28, 0x28, 0x0, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86, 0x7a}

/* yacute (253) */
#define NXFONT_METRICS_253 {1, 7, 16, 0, 7, 0}
#define NXFONT_BITMAP_253 {0x8, 0x18, 0x20, 0x0, 0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x38, 0x10, 0x10, 0x20, 0x20, 0xc0}

/* thorn (254) */
#define NXFONT_METRICS_254 {1, 7, 16, 1, 8, 0}
#define NXFONT_BITMAP_254 {0x80, 0x80, 0x80, 0xb8, 0xc4, 0x82, 0x82, 0x82, 0x82, 0x82, 0xc4, 0xb8, 0x80, 0x80, 0x80, 0x80}

/* ydieresis (255) */
#define NXFONT_METRICS_255 {1, 7, 15, 0, 8, 0}
#define NXFONT_BITMAP_255 {0x28, 0x28, 0x0, 0x82, 0x82, 0x44, 0x44, 0x28, 0x28, 0x38, 0x10, 0x10, 0x20, 0x20, 0xc0}

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __GRAPHICS_NXFONTS_NXFONTS_SANS20X26_H */
