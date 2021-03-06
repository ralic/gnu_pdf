/* -*- mode: C -*-
 *
 *       File:         pdf-text-ucd-combclass.c
 *       Date:         Sun Mar 09 12:59:01 2008
 *
 *       GNU PDF Library - Unicode Character Database - Combining Class
 *
 *    WARNING! The contents of the arrays in this file are self-generated
 *     from the UnicodeData.txt file, using the `pdf_text_generate_ucd'
 *     utility
 *
 */

/* Copyright (C) 2008-2011 Free Software Foundation, Inc. */

/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <config.h>

#include <pdf-text-ucd-combclass.h>

typedef struct _unicode_combclass_info_s {
  pdf_u32_t unicode_point;
  pdf_u8_t combining_class;
} unicode_combclass_info_t;

typedef struct _unicode_combclass_interval_s {
  pdf_u32_t interval_start;
  pdf_u32_t interval_stop;
  long delta;
} unicode_combclass_interval_t;

/*************** START OF SELF-GENERATED DATA *********************************/

/* Constant length of arrays */
#define UCD_COMBCLASS_INFO_N   501
#define UCD_COMBCLASS_INT_N     94

static unicode_combclass_info_t unicode_combclass_info[UCD_COMBCLASS_INFO_N] = {
	{ 0x0300, 230},
	{ 0x0301, 230},
	{ 0x0302, 230},
	{ 0x0303, 230},
	{ 0x0304, 230},
	{ 0x0305, 230},
	{ 0x0306, 230},
	{ 0x0307, 230},
	{ 0x0308, 230},
	{ 0x0309, 230},
	{ 0x030A, 230},
	{ 0x030B, 230},
	{ 0x030C, 230},
	{ 0x030D, 230},
	{ 0x030E, 230},
	{ 0x030F, 230},
	{ 0x0310, 230},
	{ 0x0311, 230},
	{ 0x0312, 230},
	{ 0x0313, 230},
	{ 0x0314, 230},
	{ 0x0315, 232},
	{ 0x0316, 220},
	{ 0x0317, 220},
	{ 0x0318, 220},
	{ 0x0319, 220},
	{ 0x031A, 232},
	{ 0x031B, 216},
	{ 0x031C, 220},
	{ 0x031D, 220},
	{ 0x031E, 220},
	{ 0x031F, 220},
	{ 0x0320, 220},
	{ 0x0321, 202},
	{ 0x0322, 202},
	{ 0x0323, 220},
	{ 0x0324, 220},
	{ 0x0325, 220},
	{ 0x0326, 220},
	{ 0x0327, 202},
	{ 0x0328, 202},
	{ 0x0329, 220},
	{ 0x032A, 220},
	{ 0x032B, 220},
	{ 0x032C, 220},
	{ 0x032D, 220},
	{ 0x032E, 220},
	{ 0x032F, 220},
	{ 0x0330, 220},
	{ 0x0331, 220},
	{ 0x0332, 220},
	{ 0x0333, 220},
	{ 0x0334, 1},
	{ 0x0335, 1},
	{ 0x0336, 1},
	{ 0x0337, 1},
	{ 0x0338, 1},
	{ 0x0339, 220},
	{ 0x033A, 220},
	{ 0x033B, 220},
	{ 0x033C, 220},
	{ 0x033D, 230},
	{ 0x033E, 230},
	{ 0x033F, 230},
	{ 0x0340, 230},
	{ 0x0341, 230},
	{ 0x0342, 230},
	{ 0x0343, 230},
	{ 0x0344, 230},
	{ 0x0345, 240},
	{ 0x0346, 230},
	{ 0x0347, 220},
	{ 0x0348, 220},
	{ 0x0349, 220},
	{ 0x034A, 230},
	{ 0x034B, 230},
	{ 0x034C, 230},
	{ 0x034D, 220},
	{ 0x034E, 220},
	{ 0x0350, 230},
	{ 0x0351, 230},
	{ 0x0352, 230},
	{ 0x0353, 220},
	{ 0x0354, 220},
	{ 0x0355, 220},
	{ 0x0356, 220},
	{ 0x0357, 230},
	{ 0x0358, 232},
	{ 0x0359, 220},
	{ 0x035A, 220},
	{ 0x035B, 230},
	{ 0x035C, 233},
	{ 0x035D, 234},
	{ 0x035E, 234},
	{ 0x035F, 233},
	{ 0x0360, 234},
	{ 0x0361, 234},
	{ 0x0362, 233},
	{ 0x0363, 230},
	{ 0x0364, 230},
	{ 0x0365, 230},
	{ 0x0366, 230},
	{ 0x0367, 230},
	{ 0x0368, 230},
	{ 0x0369, 230},
	{ 0x036A, 230},
	{ 0x036B, 230},
	{ 0x036C, 230},
	{ 0x036D, 230},
	{ 0x036E, 230},
	{ 0x036F, 230},
	{ 0x0483, 230},
	{ 0x0484, 230},
	{ 0x0485, 230},
	{ 0x0486, 230},
	{ 0x0487, 230},
	{ 0x0591, 220},
	{ 0x0592, 230},
	{ 0x0593, 230},
	{ 0x0594, 230},
	{ 0x0595, 230},
	{ 0x0596, 220},
	{ 0x0597, 230},
	{ 0x0598, 230},
	{ 0x0599, 230},
	{ 0x059A, 222},
	{ 0x059B, 220},
	{ 0x059C, 230},
	{ 0x059D, 230},
	{ 0x059E, 230},
	{ 0x059F, 230},
	{ 0x05A0, 230},
	{ 0x05A1, 230},
	{ 0x05A2, 220},
	{ 0x05A3, 220},
	{ 0x05A4, 220},
	{ 0x05A5, 220},
	{ 0x05A6, 220},
	{ 0x05A7, 220},
	{ 0x05A8, 230},
	{ 0x05A9, 230},
	{ 0x05AA, 220},
	{ 0x05AB, 230},
	{ 0x05AC, 230},
	{ 0x05AD, 222},
	{ 0x05AE, 228},
	{ 0x05AF, 230},
	{ 0x05B0, 10},
	{ 0x05B1, 11},
	{ 0x05B2, 12},
	{ 0x05B3, 13},
	{ 0x05B4, 14},
	{ 0x05B5, 15},
	{ 0x05B6, 16},
	{ 0x05B7, 17},
	{ 0x05B8, 18},
	{ 0x05B9, 19},
	{ 0x05BA, 19},
	{ 0x05BB, 20},
	{ 0x05BC, 21},
	{ 0x05BD, 22},
	{ 0x05BF, 23},
	{ 0x05C1, 24},
	{ 0x05C2, 25},
	{ 0x05C4, 230},
	{ 0x05C5, 220},
	{ 0x05C7, 18},
	{ 0x0610, 230},
	{ 0x0611, 230},
	{ 0x0612, 230},
	{ 0x0613, 230},
	{ 0x0614, 230},
	{ 0x0615, 230},
	{ 0x0616, 230},
	{ 0x0617, 230},
	{ 0x0618, 30},
	{ 0x0619, 31},
	{ 0x061A, 32},
	{ 0x064B, 27},
	{ 0x064C, 28},
	{ 0x064D, 29},
	{ 0x064E, 30},
	{ 0x064F, 31},
	{ 0x0650, 32},
	{ 0x0651, 33},
	{ 0x0652, 34},
	{ 0x0653, 230},
	{ 0x0654, 230},
	{ 0x0655, 220},
	{ 0x0656, 220},
	{ 0x0657, 230},
	{ 0x0658, 230},
	{ 0x0659, 230},
	{ 0x065A, 230},
	{ 0x065B, 230},
	{ 0x065C, 220},
	{ 0x065D, 230},
	{ 0x065E, 230},
	{ 0x0670, 35},
	{ 0x06D6, 230},
	{ 0x06D7, 230},
	{ 0x06D8, 230},
	{ 0x06D9, 230},
	{ 0x06DA, 230},
	{ 0x06DB, 230},
	{ 0x06DC, 230},
	{ 0x06DF, 230},
	{ 0x06E0, 230},
	{ 0x06E1, 230},
	{ 0x06E2, 230},
	{ 0x06E3, 220},
	{ 0x06E4, 230},
	{ 0x06E7, 230},
	{ 0x06E8, 230},
	{ 0x06EA, 220},
	{ 0x06EB, 230},
	{ 0x06EC, 230},
	{ 0x06ED, 220},
	{ 0x0711, 36},
	{ 0x0730, 230},
	{ 0x0731, 220},
	{ 0x0732, 230},
	{ 0x0733, 230},
	{ 0x0734, 220},
	{ 0x0735, 230},
	{ 0x0736, 230},
	{ 0x0737, 220},
	{ 0x0738, 220},
	{ 0x0739, 220},
	{ 0x073A, 230},
	{ 0x073B, 220},
	{ 0x073C, 220},
	{ 0x073D, 230},
	{ 0x073E, 220},
	{ 0x073F, 230},
	{ 0x0740, 230},
	{ 0x0741, 230},
	{ 0x0742, 220},
	{ 0x0743, 230},
	{ 0x0744, 220},
	{ 0x0745, 230},
	{ 0x0746, 220},
	{ 0x0747, 230},
	{ 0x0748, 220},
	{ 0x0749, 230},
	{ 0x074A, 230},
	{ 0x07EB, 230},
	{ 0x07EC, 230},
	{ 0x07ED, 230},
	{ 0x07EE, 230},
	{ 0x07EF, 230},
	{ 0x07F0, 230},
	{ 0x07F1, 230},
	{ 0x07F2, 220},
	{ 0x07F3, 230},
	{ 0x093C, 7},
	{ 0x094D, 9},
	{ 0x0951, 230},
	{ 0x0952, 220},
	{ 0x0953, 230},
	{ 0x0954, 230},
	{ 0x09BC, 7},
	{ 0x09CD, 9},
	{ 0x0A3C, 7},
	{ 0x0A4D, 9},
	{ 0x0ABC, 7},
	{ 0x0ACD, 9},
	{ 0x0B3C, 7},
	{ 0x0B4D, 9},
	{ 0x0BCD, 9},
	{ 0x0C4D, 9},
	{ 0x0C55, 84},
	{ 0x0C56, 91},
	{ 0x0CBC, 7},
	{ 0x0CCD, 9},
	{ 0x0D4D, 9},
	{ 0x0DCA, 9},
	{ 0x0E38, 103},
	{ 0x0E39, 103},
	{ 0x0E3A, 9},
	{ 0x0E48, 107},
	{ 0x0E49, 107},
	{ 0x0E4A, 107},
	{ 0x0E4B, 107},
	{ 0x0EB8, 118},
	{ 0x0EB9, 118},
	{ 0x0EC8, 122},
	{ 0x0EC9, 122},
	{ 0x0ECA, 122},
	{ 0x0ECB, 122},
	{ 0x0F18, 220},
	{ 0x0F19, 220},
	{ 0x0F35, 220},
	{ 0x0F37, 220},
	{ 0x0F39, 216},
	{ 0x0F71, 129},
	{ 0x0F72, 130},
	{ 0x0F74, 132},
	{ 0x0F7A, 130},
	{ 0x0F7B, 130},
	{ 0x0F7C, 130},
	{ 0x0F7D, 130},
	{ 0x0F80, 130},
	{ 0x0F82, 230},
	{ 0x0F83, 230},
	{ 0x0F84, 9},
	{ 0x0F86, 230},
	{ 0x0F87, 230},
	{ 0x0FC6, 220},
	{ 0x1037, 7},
	{ 0x1039, 9},
	{ 0x103A, 9},
	{ 0x108D, 220},
	{ 0x135F, 230},
	{ 0x1714, 9},
	{ 0x1734, 9},
	{ 0x17D2, 9},
	{ 0x17DD, 230},
	{ 0x18A9, 228},
	{ 0x1939, 222},
	{ 0x193A, 230},
	{ 0x193B, 220},
	{ 0x1A17, 230},
	{ 0x1A18, 220},
	{ 0x1B34, 7},
	{ 0x1B44, 9},
	{ 0x1B6B, 230},
	{ 0x1B6C, 220},
	{ 0x1B6D, 230},
	{ 0x1B6E, 230},
	{ 0x1B6F, 230},
	{ 0x1B70, 230},
	{ 0x1B71, 230},
	{ 0x1B72, 230},
	{ 0x1B73, 230},
	{ 0x1BAA, 9},
	{ 0x1C37, 7},
	{ 0x1DC0, 230},
	{ 0x1DC1, 230},
	{ 0x1DC2, 220},
	{ 0x1DC3, 230},
	{ 0x1DC4, 230},
	{ 0x1DC5, 230},
	{ 0x1DC6, 230},
	{ 0x1DC7, 230},
	{ 0x1DC8, 230},
	{ 0x1DC9, 230},
	{ 0x1DCA, 220},
	{ 0x1DCB, 230},
	{ 0x1DCC, 230},
	{ 0x1DCD, 234},
	{ 0x1DCE, 214},
	{ 0x1DCF, 220},
	{ 0x1DD0, 202},
	{ 0x1DD1, 230},
	{ 0x1DD2, 230},
	{ 0x1DD3, 230},
	{ 0x1DD4, 230},
	{ 0x1DD5, 230},
	{ 0x1DD6, 230},
	{ 0x1DD7, 230},
	{ 0x1DD8, 230},
	{ 0x1DD9, 230},
	{ 0x1DDA, 230},
	{ 0x1DDB, 230},
	{ 0x1DDC, 230},
	{ 0x1DDD, 230},
	{ 0x1DDE, 230},
	{ 0x1DDF, 230},
	{ 0x1DE0, 230},
	{ 0x1DE1, 230},
	{ 0x1DE2, 230},
	{ 0x1DE3, 230},
	{ 0x1DE4, 230},
	{ 0x1DE5, 230},
	{ 0x1DE6, 230},
	{ 0x1DFE, 230},
	{ 0x1DFF, 220},
	{ 0x20D0, 230},
	{ 0x20D1, 230},
	{ 0x20D2, 1},
	{ 0x20D3, 1},
	{ 0x20D4, 230},
	{ 0x20D5, 230},
	{ 0x20D6, 230},
	{ 0x20D7, 230},
	{ 0x20D8, 1},
	{ 0x20D9, 1},
	{ 0x20DA, 1},
	{ 0x20DB, 230},
	{ 0x20DC, 230},
	{ 0x20E1, 230},
	{ 0x20E5, 1},
	{ 0x20E6, 1},
	{ 0x20E7, 230},
	{ 0x20E8, 220},
	{ 0x20E9, 230},
	{ 0x20EA, 1},
	{ 0x20EB, 1},
	{ 0x20EC, 220},
	{ 0x20ED, 220},
	{ 0x20EE, 220},
	{ 0x20EF, 220},
	{ 0x20F0, 230},
	{ 0x2DE0, 230},
	{ 0x2DE1, 230},
	{ 0x2DE2, 230},
	{ 0x2DE3, 230},
	{ 0x2DE4, 230},
	{ 0x2DE5, 230},
	{ 0x2DE6, 230},
	{ 0x2DE7, 230},
	{ 0x2DE8, 230},
	{ 0x2DE9, 230},
	{ 0x2DEA, 230},
	{ 0x2DEB, 230},
	{ 0x2DEC, 230},
	{ 0x2DED, 230},
	{ 0x2DEE, 230},
	{ 0x2DEF, 230},
	{ 0x2DF0, 230},
	{ 0x2DF1, 230},
	{ 0x2DF2, 230},
	{ 0x2DF3, 230},
	{ 0x2DF4, 230},
	{ 0x2DF5, 230},
	{ 0x2DF6, 230},
	{ 0x2DF7, 230},
	{ 0x2DF8, 230},
	{ 0x2DF9, 230},
	{ 0x2DFA, 230},
	{ 0x2DFB, 230},
	{ 0x2DFC, 230},
	{ 0x2DFD, 230},
	{ 0x2DFE, 230},
	{ 0x2DFF, 230},
	{ 0x302A, 218},
	{ 0x302B, 228},
	{ 0x302C, 232},
	{ 0x302D, 222},
	{ 0x302E, 224},
	{ 0x302F, 224},
	{ 0x3099, 8},
	{ 0x309A, 8},
	{ 0xA66F, 230},
	{ 0xA67C, 230},
	{ 0xA67D, 230},
	{ 0xA806, 9},
	{ 0xA8C4, 9},
	{ 0xA92B, 220},
	{ 0xA92C, 220},
	{ 0xA92D, 220},
	{ 0xA953, 9},
	{ 0xFB1E, 26},
	{ 0xFE20, 230},
	{ 0xFE21, 230},
	{ 0xFE22, 230},
	{ 0xFE23, 230},
	{ 0xFE24, 230},
	{ 0xFE25, 230},
	{ 0xFE26, 230},
	{ 0x101FD, 220},
	{ 0x10A0D, 220},
	{ 0x10A0F, 230},
	{ 0x10A38, 230},
	{ 0x10A39, 1},
	{ 0x10A3A, 220},
	{ 0x10A3F, 9},
	{ 0x1D165, 216},
	{ 0x1D166, 216},
	{ 0x1D167, 1},
	{ 0x1D168, 1},
	{ 0x1D169, 1},
	{ 0x1D16D, 226},
	{ 0x1D16E, 216},
	{ 0x1D16F, 216},
	{ 0x1D170, 216},
	{ 0x1D171, 216},
	{ 0x1D172, 216},
	{ 0x1D17B, 220},
	{ 0x1D17C, 220},
	{ 0x1D17D, 220},
	{ 0x1D17E, 220},
	{ 0x1D17F, 220},
	{ 0x1D180, 220},
	{ 0x1D181, 220},
	{ 0x1D182, 220},
	{ 0x1D185, 230},
	{ 0x1D186, 230},
	{ 0x1D187, 230},
	{ 0x1D188, 230},
	{ 0x1D189, 230},
	{ 0x1D18A, 220},
	{ 0x1D18B, 220},
	{ 0x1D1AA, 230},
	{ 0x1D1AB, 230},
	{ 0x1D1AC, 230},
	{ 0x1D1AD, 230},
	{ 0x1D242, 230},
	{ 0x1D243, 230},
	{ 0x1D244, 230},
};

static unicode_combclass_interval_t unicode_combclass_interval[UCD_COMBCLASS_INT_N] = {
  { 0x000300, 0x00034E, 768 },
  { 0x000350, 0x00036F, 769 },
  { 0x000483, 0x000487, 1044 },
  { 0x000591, 0x0005BD, 1309 },
  { 0x0005BF, 0x0005BF, 1310 },
  { 0x0005C1, 0x0005C2, 1311 },
  { 0x0005C4, 0x0005C5, 1312 },
  { 0x0005C7, 0x0005C7, 1313 },
  { 0x000610, 0x00061A, 1385 },
  { 0x00064B, 0x00065E, 1433 },
  { 0x000670, 0x000670, 1450 },
  { 0x0006D6, 0x0006DC, 1551 },
  { 0x0006DF, 0x0006E4, 1553 },
  { 0x0006E7, 0x0006E8, 1555 },
  { 0x0006EA, 0x0006ED, 1556 },
  { 0x000711, 0x000711, 1591 },
  { 0x000730, 0x00074A, 1621 },
  { 0x0007EB, 0x0007F3, 1781 },
  { 0x00093C, 0x00093C, 2109 },
  { 0x00094D, 0x00094D, 2125 },
  { 0x000951, 0x000954, 2128 },
  { 0x0009BC, 0x0009BC, 2231 },
  { 0x0009CD, 0x0009CD, 2247 },
  { 0x000A3C, 0x000A3C, 2357 },
  { 0x000A4D, 0x000A4D, 2373 },
  { 0x000ABC, 0x000ABC, 2483 },
  { 0x000ACD, 0x000ACD, 2499 },
  { 0x000B3C, 0x000B3C, 2609 },
  { 0x000B4D, 0x000B4D, 2625 },
  { 0x000BCD, 0x000BCD, 2752 },
  { 0x000C4D, 0x000C4D, 2879 },
  { 0x000C55, 0x000C56, 2886 },
  { 0x000CBC, 0x000CBC, 2987 },
  { 0x000CCD, 0x000CCD, 3003 },
  { 0x000D4D, 0x000D4D, 3130 },
  { 0x000DCA, 0x000DCA, 3254 },
  { 0x000E38, 0x000E3A, 3363 },
  { 0x000E48, 0x000E4B, 3376 },
  { 0x000EB8, 0x000EB9, 3484 },
  { 0x000EC8, 0x000ECB, 3498 },
  { 0x000F18, 0x000F19, 3574 },
  { 0x000F35, 0x000F35, 3601 },
  { 0x000F37, 0x000F37, 3602 },
  { 0x000F39, 0x000F39, 3603 },
  { 0x000F71, 0x000F72, 3658 },
  { 0x000F74, 0x000F74, 3659 },
  { 0x000F7A, 0x000F7D, 3664 },
  { 0x000F80, 0x000F80, 3666 },
  { 0x000F82, 0x000F84, 3667 },
  { 0x000F86, 0x000F87, 3668 },
  { 0x000FC6, 0x000FC6, 3730 },
  { 0x001037, 0x001037, 3842 },
  { 0x001039, 0x00103A, 3843 },
  { 0x00108D, 0x00108D, 3925 },
  { 0x00135F, 0x00135F, 4646 },
  { 0x001714, 0x001714, 5594 },
  { 0x001734, 0x001734, 5625 },
  { 0x0017D2, 0x0017D2, 5782 },
  { 0x0017DD, 0x0017DD, 5792 },
  { 0x0018A9, 0x0018A9, 5995 },
  { 0x001939, 0x00193B, 6138 },
  { 0x001A17, 0x001A18, 6357 },
  { 0x001B34, 0x001B34, 6640 },
  { 0x001B44, 0x001B44, 6655 },
  { 0x001B6B, 0x001B73, 6693 },
  { 0x001BAA, 0x001BAA, 6747 },
  { 0x001C37, 0x001C37, 6887 },
  { 0x001DC0, 0x001DE6, 7279 },
  { 0x001DFE, 0x001DFF, 7302 },
  { 0x0020D0, 0x0020DC, 8022 },
  { 0x0020E1, 0x0020E1, 8026 },
  { 0x0020E5, 0x0020F0, 8029 },
  { 0x002DE0, 0x002DFF, 11340 },
  { 0x00302A, 0x00302F, 11894 },
  { 0x003099, 0x00309A, 11999 },
  { 0x00A66F, 0x00A66F, 42163 },
  { 0x00A67C, 0x00A67D, 42175 },
  { 0x00A806, 0x00A806, 42567 },
  { 0x00A8C4, 0x00A8C4, 42756 },
  { 0x00A92B, 0x00A92D, 42858 },
  { 0x00A953, 0x00A953, 42895 },
  { 0x00FB1E, 0x00FB1E, 63833 },
  { 0x00FE20, 0x00FE26, 64602 },
  { 0x0101FD, 0x0101FD, 65584 },
  { 0x010A0D, 0x010A0D, 67647 },
  { 0x010A0F, 0x010A0F, 67648 },
  { 0x010A38, 0x010A3A, 67688 },
  { 0x010A3F, 0x010A3F, 67692 },
  { 0x01D165, 0x01D169, 118673 },
  { 0x01D16D, 0x01D172, 118676 },
  { 0x01D17B, 0x01D182, 118684 },
  { 0x01D185, 0x01D18B, 118686 },
  { 0x01D1AA, 0x01D1AD, 118716 },
  { 0x01D242, 0x01D244, 118864 },
};

/***************** END OF SELF-GENERATED DATA *********************************/

pdf_u8_t
pdf_text_ucd_get_combining_class (const pdf_u32_t character)
{
  pdf_bool_t found;
  int index;
  long delta = 0;

  /* Look for input unicode point in intervals */
  index = 0;
  found = PDF_FALSE;
  while ((!found) &&
         (index < UCD_COMBCLASS_INT_N))
    {
      /* First, check if the input point is not within the interval, but between
       *  two given intervals */
      if (character < unicode_combclass_interval[index].interval_start)
        {
          /* Ok, no combining class information for this point. Force
           *  loop exit without having found the point */
          index = UCD_COMBCLASS_INT_N;
        }
      else if (character <= unicode_combclass_interval[index].interval_stop)
        {
          /* Found!! Set deltaToIndex */
          found = PDF_TRUE;
          delta = unicode_combclass_interval[index].delta;
        }
      else
        {
          index++;
        }
    }

  return (found ?
          (unicode_combclass_info[character - delta].combining_class) :
          0);
}

/* End of pdf-text-ucd-combclass.c */
