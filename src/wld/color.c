/* Adapted from xorg-server */

/***********************************************************

Copyright 1987, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

******************************************************************/

#include "wld/wld-private.h"

#include <strings.h>

struct named_color {
  const char *name;
  uint32_t color;
};

static const struct named_color named_colors[] = {
    {"alice blue", 0xfff0f8ff},
    {"AliceBlue", 0xfff0f8ff},
    {"antique white", 0xfffaebd7},
    {"AntiqueWhite", 0xfffaebd7},
    {"AntiqueWhite1", 0xffffefdb},
    {"AntiqueWhite2", 0xffeedfcc},
    {"AntiqueWhite3", 0xffcdc0b0},
    {"AntiqueWhite4", 0xff8b8378},
    {"aquamarine", 0xff7fffd4},
    {"aquamarine1", 0xff7fffd4},
    {"aquamarine2", 0xff76eec6},
    {"aquamarine3", 0xff66cdaa},
    {"aquamarine4", 0xff458b74},
    {"azure", 0xfff0ffff},
    {"azure1", 0xfff0ffff},
    {"azure2", 0xffe0eeee},
    {"azure3", 0xffc1cdcd},
    {"azure4", 0xff838b8b},
    {"beige", 0xfff5f5dc},
    {"bisque", 0xffffe4c4},
    {"bisque1", 0xffffe4c4},
    {"bisque2", 0xffeed5b7},
    {"bisque3", 0xffcdb79e},
    {"bisque4", 0xff8b7d6b},
    {"black", 0xff000000},
    {"blanched almond", 0xffffebcd},
    {"BlanchedAlmond", 0xffffebcd},
    {"blue", 0xff0000ff},
    {"blue violet", 0xff8a2be2},
    {"blue1", 0xff0000ff},
    {"blue2", 0xff0000ee},
    {"blue3", 0xff0000cd},
    {"blue4", 0xff00008b},
    {"BlueViolet", 0xff8a2be2},
    {"brown", 0xffa52a2a},
    {"brown1", 0xffff4040},
    {"brown2", 0xffee3b3b},
    {"brown3", 0xffcd3333},
    {"brown4", 0xff8b2323},
    {"burlywood", 0xffdeb887},
    {"burlywood1", 0xffffd39b},
    {"burlywood2", 0xffeec591},
    {"burlywood3", 0xffcdaa7d},
    {"burlywood4", 0xff8b7355},
    {"cadet blue", 0xff5f9ea0},
    {"CadetBlue", 0xff5f9ea0},
    {"CadetBlue1", 0xff98f5ff},
    {"CadetBlue2", 0xff8ee5ee},
    {"CadetBlue3", 0xff7ac5cd},
    {"CadetBlue4", 0xff53868b},
    {"chartreuse", 0xff7fff00},
    {"chartreuse1", 0xff7fff00},
    {"chartreuse2", 0xff76ee00},
    {"chartreuse3", 0xff66cd00},
    {"chartreuse4", 0xff458b00},
    {"chocolate", 0xffd2691e},
    {"chocolate1", 0xffff7f24},
    {"chocolate2", 0xffee7621},
    {"chocolate3", 0xffcd661d},
    {"chocolate4", 0xff8b4513},
    {"coral", 0xffff7f50},
    {"coral1", 0xffff7256},
    {"coral2", 0xffee6a50},
    {"coral3", 0xffcd5b45},
    {"coral4", 0xff8b3e2f},
    {"cornflower blue", 0xff6495ed},
    {"CornflowerBlue", 0xff6495ed},
    {"cornsilk", 0xfffff8dc},
    {"cornsilk1", 0xfffff8dc},
    {"cornsilk2", 0xffeee8cd},
    {"cornsilk3", 0xffcdc8b1},
    {"cornsilk4", 0xff8b8878},
    {"cyan", 0xff00ffff},
    {"cyan1", 0xff00ffff},
    {"cyan2", 0xff00eeee},
    {"cyan3", 0xff00cdcd},
    {"cyan4", 0xff008b8b},
    {"dark blue", 0xff00008b},
    {"dark cyan", 0xff008b8b},
    {"dark goldenrod", 0xffb8860b},
    {"dark gray", 0xffa9a9a9},
    {"dark green", 0xff006400},
    {"dark grey", 0xffa9a9a9},
    {"dark khaki", 0xffbdb76b},
    {"dark magenta", 0xff8b008b},
    {"dark olive green", 0xff556b2f},
    {"dark orange", 0xffff8c00},
    {"dark orchid", 0xff9932cc},
    {"dark red", 0xff8b0000},
    {"dark salmon", 0xffe9967a},
    {"dark sea green", 0xff8fbc8f},
    {"dark slate blue", 0xff483d8b},
    {"dark slate gray", 0xff2f4f4f},
    {"dark slate grey", 0xff2f4f4f},
    {"dark turquoise", 0xff00ced1},
    {"dark violet", 0xff9400d3},
    {"DarkBlue", 0xff00008b},
    {"DarkCyan", 0xff008b8b},
    {"DarkGoldenrod", 0xffb8860b},
    {"DarkGoldenrod1", 0xffffb90f},
    {"DarkGoldenrod2", 0xffeead0e},
    {"DarkGoldenrod3", 0xffcd950c},
    {"DarkGoldenrod4", 0xff8b6508},
    {"DarkGray", 0xffa9a9a9},
    {"DarkGreen", 0xff006400},
    {"DarkGrey", 0xffa9a9a9},
    {"DarkKhaki", 0xffbdb76b},
    {"DarkMagenta", 0xff8b008b},
    {"DarkOliveGreen", 0xff556b2f},
    {"DarkOliveGreen1", 0xffcaff70},
    {"DarkOliveGreen2", 0xffbcee68},
    {"DarkOliveGreen3", 0xffa2cd5a},
    {"DarkOliveGreen4", 0xff6e8b3d},
    {"DarkOrange", 0xffff8c00},
    {"DarkOrange1", 0xffff7f00},
    {"DarkOrange2", 0xffee7600},
    {"DarkOrange3", 0xffcd6600},
    {"DarkOrange4", 0xff8b4500},
    {"DarkOrchid", 0xff9932cc},
    {"DarkOrchid1", 0xffbf3eff},
    {"DarkOrchid2", 0xffb23aee},
    {"DarkOrchid3", 0xff9a32cd},
    {"DarkOrchid4", 0xff68228b},
    {"DarkRed", 0xff8b0000},
    {"DarkSalmon", 0xffe9967a},
    {"DarkSeaGreen", 0xff8fbc8f},
    {"DarkSeaGreen1", 0xffc1ffc1},
    {"DarkSeaGreen2", 0xffb4eeb4},
    {"DarkSeaGreen3", 0xff9bcd9b},
    {"DarkSeaGreen4", 0xff698b69},
    {"DarkSlateBlue", 0xff483d8b},
    {"DarkSlateGray", 0xff2f4f4f},
    {"DarkSlateGray1", 0xff97ffff},
    {"DarkSlateGray2", 0xff8deeee},
    {"DarkSlateGray3", 0xff79cdcd},
    {"DarkSlateGray4", 0xff528b8b},
    {"DarkSlateGrey", 0xff2f4f4f},
    {"DarkTurquoise", 0xff00ced1},
    {"DarkViolet", 0xff9400d3},
    {"deep pink", 0xffff1493},
    {"deep sky blue", 0xff00bfff},
    {"DeepPink", 0xffff1493},
    {"DeepPink1", 0xffff1493},
    {"DeepPink2", 0xffee1289},
    {"DeepPink3", 0xffcd1076},
    {"DeepPink4", 0xff8b0a50},
    {"DeepSkyBlue", 0xff00bfff},
    {"DeepSkyBlue1", 0xff00bfff},
    {"DeepSkyBlue2", 0xff00b2ee},
    {"DeepSkyBlue3", 0xff009acd},
    {"DeepSkyBlue4", 0xff00688b},
    {"dim gray", 0xff696969},
    {"dim grey", 0xff696969},
    {"DimGray", 0xff696969},
    {"DimGrey", 0xff696969},
    {"dodger blue", 0xff1e90ff},
    {"DodgerBlue", 0xff1e90ff},
    {"DodgerBlue1", 0xff1e90ff},
    {"DodgerBlue2", 0xff1c86ee},
    {"DodgerBlue3", 0xff1874cd},
    {"DodgerBlue4", 0xff104e8b},
    {"firebrick", 0xffb22222},
    {"firebrick1", 0xffff3030},
    {"firebrick2", 0xffee2c2c},
    {"firebrick3", 0xffcd2626},
    {"firebrick4", 0xff8b1a1a},
    {"floral white", 0xfffffaf0},
    {"FloralWhite", 0xfffffaf0},
    {"forest green", 0xff228b22},
    {"ForestGreen", 0xff228b22},
    {"gainsboro", 0xffdcdcdc},
    {"ghost white", 0xfff8f8ff},
    {"GhostWhite", 0xfff8f8ff},
    {"gold", 0xffffd700},
    {"gold1", 0xffffd700},
    {"gold2", 0xffeec900},
    {"gold3", 0xffcdad00},
    {"gold4", 0xff8b7500},
    {"goldenrod", 0xffdaa520},
    {"goldenrod1", 0xffffc125},
    {"goldenrod2", 0xffeeb422},
    {"goldenrod3", 0xffcd9b1d},
    {"goldenrod4", 0xff8b6914},
    {"gray", 0xffbebebe},
    {"gray0", 0xff000000},
    {"gray1", 0xff030303},
    {"gray10", 0xff1a1a1a},
    {"gray100", 0xffffffff},
    {"gray11", 0xff1c1c1c},
    {"gray12", 0xff1f1f1f},
    {"gray13", 0xff212121},
    {"gray14", 0xff242424},
    {"gray15", 0xff262626},
    {"gray16", 0xff292929},
    {"gray17", 0xff2b2b2b},
    {"gray18", 0xff2e2e2e},
    {"gray19", 0xff303030},
    {"gray2", 0xff050505},
    {"gray20", 0xff333333},
    {"gray21", 0xff363636},
    {"gray22", 0xff383838},
    {"gray23", 0xff3b3b3b},
    {"gray24", 0xff3d3d3d},
    {"gray25", 0xff404040},
    {"gray26", 0xff424242},
    {"gray27", 0xff454545},
    {"gray28", 0xff474747},
    {"gray29", 0xff4a4a4a},
    {"gray3", 0xff080808},
    {"gray30", 0xff4d4d4d},
    {"gray31", 0xff4f4f4f},
    {"gray32", 0xff525252},
    {"gray33", 0xff545454},
    {"gray34", 0xff575757},
    {"gray35", 0xff595959},
    {"gray36", 0xff5c5c5c},
    {"gray37", 0xff5e5e5e},
    {"gray38", 0xff616161},
    {"gray39", 0xff636363},
    {"gray4", 0xff0a0a0a},
    {"gray40", 0xff666666},
    {"gray41", 0xff696969},
    {"gray42", 0xff6b6b6b},
    {"gray43", 0xff6e6e6e},
    {"gray44", 0xff707070},
    {"gray45", 0xff737373},
    {"gray46", 0xff757575},
    {"gray47", 0xff787878},
    {"gray48", 0xff7a7a7a},
    {"gray49", 0xff7d7d7d},
    {"gray5", 0xff0d0d0d},
    {"gray50", 0xff7f7f7f},
    {"gray51", 0xff828282},
    {"gray52", 0xff858585},
    {"gray53", 0xff878787},
    {"gray54", 0xff8a8a8a},
    {"gray55", 0xff8c8c8c},
    {"gray56", 0xff8f8f8f},
    {"gray57", 0xff919191},
    {"gray58", 0xff949494},
    {"gray59", 0xff969696},
    {"gray6", 0xff0f0f0f},
    {"gray60", 0xff999999},
    {"gray61", 0xff9c9c9c},
    {"gray62", 0xff9e9e9e},
    {"gray63", 0xffa1a1a1},
    {"gray64", 0xffa3a3a3},
    {"gray65", 0xffa6a6a6},
    {"gray66", 0xffa8a8a8},
    {"gray67", 0xffababab},
    {"gray68", 0xffadadad},
    {"gray69", 0xffb0b0b0},
    {"gray7", 0xff121212},
    {"gray70", 0xffb3b3b3},
    {"gray71", 0xffb5b5b5},
    {"gray72", 0xffb8b8b8},
    {"gray73", 0xffbababa},
    {"gray74", 0xffbdbdbd},
    {"gray75", 0xffbfbfbf},
    {"gray76", 0xffc2c2c2},
    {"gray77", 0xffc4c4c4},
    {"gray78", 0xffc7c7c7},
    {"gray79", 0xffc9c9c9},
    {"gray8", 0xff141414},
    {"gray80", 0xffcccccc},
    {"gray81", 0xffcfcfcf},
    {"gray82", 0xffd1d1d1},
    {"gray83", 0xffd4d4d4},
    {"gray84", 0xffd6d6d6},
    {"gray85", 0xffd9d9d9},
    {"gray86", 0xffdbdbdb},
    {"gray87", 0xffdedede},
    {"gray88", 0xffe0e0e0},
    {"gray89", 0xffe3e3e3},
    {"gray9", 0xff171717},
    {"gray90", 0xffe5e5e5},
    {"gray91", 0xffe8e8e8},
    {"gray92", 0xffebebeb},
    {"gray93", 0xffededed},
    {"gray94", 0xfff0f0f0},
    {"gray95", 0xfff2f2f2},
    {"gray96", 0xfff5f5f5},
    {"gray97", 0xfff7f7f7},
    {"gray98", 0xfffafafa},
    {"gray99", 0xfffcfcfc},
    {"green", 0xff00ff00},
    {"green yellow", 0xffadff2f},
    {"green1", 0xff00ff00},
    {"green2", 0xff00ee00},
    {"green3", 0xff00cd00},
    {"green4", 0xff008b00},
    {"GreenYellow", 0xffadff2f},
    {"grey", 0xffbebebe},
    {"grey0", 0xff000000},
    {"grey1", 0xff030303},
    {"grey10", 0xff1a1a1a},
    {"grey100", 0xffffffff},
    {"grey11", 0xff1c1c1c},
    {"grey12", 0xff1f1f1f},
    {"grey13", 0xff212121},
    {"grey14", 0xff242424},
    {"grey15", 0xff262626},
    {"grey16", 0xff292929},
    {"grey17", 0xff2b2b2b},
    {"grey18", 0xff2e2e2e},
    {"grey19", 0xff303030},
    {"grey2", 0xff050505},
    {"grey20", 0xff333333},
    {"grey21", 0xff363636},
    {"grey22", 0xff383838},
    {"grey23", 0xff3b3b3b},
    {"grey24", 0xff3d3d3d},
    {"grey25", 0xff404040},
    {"grey26", 0xff424242},
    {"grey27", 0xff454545},
    {"grey28", 0xff474747},
    {"grey29", 0xff4a4a4a},
    {"grey3", 0xff080808},
    {"grey30", 0xff4d4d4d},
    {"grey31", 0xff4f4f4f},
    {"grey32", 0xff525252},
    {"grey33", 0xff545454},
    {"grey34", 0xff575757},
    {"grey35", 0xff595959},
    {"grey36", 0xff5c5c5c},
    {"grey37", 0xff5e5e5e},
    {"grey38", 0xff616161},
    {"grey39", 0xff636363},
    {"grey4", 0xff0a0a0a},
    {"grey40", 0xff666666},
    {"grey41", 0xff696969},
    {"grey42", 0xff6b6b6b},
    {"grey43", 0xff6e6e6e},
    {"grey44", 0xff707070},
    {"grey45", 0xff737373},
    {"grey46", 0xff757575},
    {"grey47", 0xff787878},
    {"grey48", 0xff7a7a7a},
    {"grey49", 0xff7d7d7d},
    {"grey5", 0xff0d0d0d},
    {"grey50", 0xff7f7f7f},
    {"grey51", 0xff828282},
    {"grey52", 0xff858585},
    {"grey53", 0xff878787},
    {"grey54", 0xff8a8a8a},
    {"grey55", 0xff8c8c8c},
    {"grey56", 0xff8f8f8f},
    {"grey57", 0xff919191},
    {"grey58", 0xff949494},
    {"grey59", 0xff969696},
    {"grey6", 0xff0f0f0f},
    {"grey60", 0xff999999},
    {"grey61", 0xff9c9c9c},
    {"grey62", 0xff9e9e9e},
    {"grey63", 0xffa1a1a1},
    {"grey64", 0xffa3a3a3},
    {"grey65", 0xffa6a6a6},
    {"grey66", 0xffa8a8a8},
    {"grey67", 0xffababab},
    {"grey68", 0xffadadad},
    {"grey69", 0xffb0b0b0},
    {"grey7", 0xff121212},
    {"grey70", 0xffb3b3b3},
    {"grey71", 0xffb5b5b5},
    {"grey72", 0xffb8b8b8},
    {"grey73", 0xffbababa},
    {"grey74", 0xffbdbdbd},
    {"grey75", 0xffbfbfbf},
    {"grey76", 0xffc2c2c2},
    {"grey77", 0xffc4c4c4},
    {"grey78", 0xffc7c7c7},
    {"grey79", 0xffc9c9c9},
    {"grey8", 0xff141414},
    {"grey80", 0xffcccccc},
    {"grey81", 0xffcfcfcf},
    {"grey82", 0xffd1d1d1},
    {"grey83", 0xffd4d4d4},
    {"grey84", 0xffd6d6d6},
    {"grey85", 0xffd9d9d9},
    {"grey86", 0xffdbdbdb},
    {"grey87", 0xffdedede},
    {"grey88", 0xffe0e0e0},
    {"grey89", 0xffe3e3e3},
    {"grey9", 0xff171717},
    {"grey90", 0xffe5e5e5},
    {"grey91", 0xffe8e8e8},
    {"grey92", 0xffebebeb},
    {"grey93", 0xffededed},
    {"grey94", 0xfff0f0f0},
    {"grey95", 0xfff2f2f2},
    {"grey96", 0xfff5f5f5},
    {"grey97", 0xfff7f7f7},
    {"grey98", 0xfffafafa},
    {"grey99", 0xfffcfcfc},
    {"honeydew", 0xfff0fff0},
    {"honeydew1", 0xfff0fff0},
    {"honeydew2", 0xffe0eee0},
    {"honeydew3", 0xffc1cdc1},
    {"honeydew4", 0xff838b83},
    {"hot pink", 0xffff69b4},
    {"HotPink", 0xffff69b4},
    {"HotPink1", 0xffff6eb4},
    {"HotPink2", 0xffee6aa7},
    {"HotPink3", 0xffcd6090},
    {"HotPink4", 0xff8b3a62},
    {"indian red", 0xffcd5c5c},
    {"IndianRed", 0xffcd5c5c},
    {"IndianRed1", 0xffff6a6a},
    {"IndianRed2", 0xffee6363},
    {"IndianRed3", 0xffcd5555},
    {"IndianRed4", 0xff8b3a3a},
    {"ivory", 0xfffffff0},
    {"ivory1", 0xfffffff0},
    {"ivory2", 0xffeeeee0},
    {"ivory3", 0xffcdcdc1},
    {"ivory4", 0xff8b8b83},
    {"khaki", 0xfff0e68c},
    {"khaki1", 0xfffff68f},
    {"khaki2", 0xffeee685},
    {"khaki3", 0xffcdc673},
    {"khaki4", 0xff8b864e},
    {"lavender", 0xffe6e6fa},
    {"lavender blush", 0xfffff0f5},
    {"LavenderBlush", 0xfffff0f5},
    {"LavenderBlush1", 0xfffff0f5},
    {"LavenderBlush2", 0xffeee0e5},
    {"LavenderBlush3", 0xffcdc1c5},
    {"LavenderBlush4", 0xff8b8386},
    {"lawn green", 0xff7cfc00},
    {"LawnGreen", 0xff7cfc00},
    {"lemon chiffon", 0xfffffacd},
    {"LemonChiffon", 0xfffffacd},
    {"LemonChiffon1", 0xfffffacd},
    {"LemonChiffon2", 0xffeee9bf},
    {"LemonChiffon3", 0xffcdc9a5},
    {"LemonChiffon4", 0xff8b8970},
    {"light blue", 0xffadd8e6},
    {"light coral", 0xfff08080},
    {"light cyan", 0xffe0ffff},
    {"light goldenrod", 0xffeedd82},
    {"light goldenrod yellow", 0xfffafad2},
    {"light gray", 0xffd3d3d3},
    {"light green", 0xff90ee90},
    {"light grey", 0xffd3d3d3},
    {"light pink", 0xffffb6c1},
    {"light salmon", 0xffffa07a},
    {"light sea green", 0xff20b2aa},
    {"light sky blue", 0xff87cefa},
    {"light slate blue", 0xff8470ff},
    {"light slate gray", 0xff778899},
    {"light slate grey", 0xff778899},
    {"light steel blue", 0xffb0c4de},
    {"light yellow", 0xffffffe0},
    {"LightBlue", 0xffadd8e6},
    {"LightBlue1", 0xffbfefff},
    {"LightBlue2", 0xffb2dfee},
    {"LightBlue3", 0xff9ac0cd},
    {"LightBlue4", 0xff68838b},
    {"LightCoral", 0xfff08080},
    {"LightCyan", 0xffe0ffff},
    {"LightCyan1", 0xffe0ffff},
    {"LightCyan2", 0xffd1eeee},
    {"LightCyan3", 0xffb4cdcd},
    {"LightCyan4", 0xff7a8b8b},
    {"LightGoldenrod", 0xffeedd82},
    {"LightGoldenrod1", 0xffffec8b},
    {"LightGoldenrod2", 0xffeedc82},
    {"LightGoldenrod3", 0xffcdbe70},
    {"LightGoldenrod4", 0xff8b814c},
    {"LightGoldenrodYellow", 0xfffafad2},
    {"LightGray", 0xffd3d3d3},
    {"LightGreen", 0xff90ee90},
    {"LightGrey", 0xffd3d3d3},
    {"LightPink", 0xffffb6c1},
    {"LightPink1", 0xffffaeb9},
    {"LightPink2", 0xffeea2ad},
    {"LightPink3", 0xffcd8c95},
    {"LightPink4", 0xff8b5f65},
    {"LightSalmon", 0xffffa07a},
    {"LightSalmon1", 0xffffa07a},
    {"LightSalmon2", 0xffee9572},
    {"LightSalmon3", 0xffcd8162},
    {"LightSalmon4", 0xff8b5742},
    {"LightSeaGreen", 0xff20b2aa},
    {"LightSkyBlue", 0xff87cefa},
    {"LightSkyBlue1", 0xffb0e2ff},
    {"LightSkyBlue2", 0xffa4d3ee},
    {"LightSkyBlue3", 0xff8db6cd},
    {"LightSkyBlue4", 0xff607b8b},
    {"LightSlateBlue", 0xff8470ff},
    {"LightSlateGray", 0xff778899},
    {"LightSlateGrey", 0xff778899},
    {"LightSteelBlue", 0xffb0c4de},
    {"LightSteelBlue1", 0xffcae1ff},
    {"LightSteelBlue2", 0xffbcd2ee},
    {"LightSteelBlue3", 0xffa2b5cd},
    {"LightSteelBlue4", 0xff6e7b8b},
    {"LightYellow", 0xffffffe0},
    {"LightYellow1", 0xffffffe0},
    {"LightYellow2", 0xffeeeed1},
    {"LightYellow3", 0xffcdcdb4},
    {"LightYellow4", 0xff8b8b7a},
    {"lime green", 0xff32cd32},
    {"LimeGreen", 0xff32cd32},
    {"linen", 0xfffaf0e6},
    {"magenta", 0xffff00ff},
    {"magenta1", 0xffff00ff},
    {"magenta2", 0xffee00ee},
    {"magenta3", 0xffcd00cd},
    {"magenta4", 0xff8b008b},
    {"maroon", 0xffb03060},
    {"maroon1", 0xffff34b3},
    {"maroon2", 0xffee30a7},
    {"maroon3", 0xffcd2990},
    {"maroon4", 0xff8b1c62},
    {"medium aquamarine", 0xff66cdaa},
    {"medium blue", 0xff0000cd},
    {"medium orchid", 0xffba55d3},
    {"medium purple", 0xff9370db},
    {"medium sea green", 0xff3cb371},
    {"medium slate blue", 0xff7b68ee},
    {"medium spring green", 0xff00fa9a},
    {"medium turquoise", 0xff48d1cc},
    {"medium violet red", 0xffc71585},
    {"MediumAquamarine", 0xff66cdaa},
    {"MediumBlue", 0xff0000cd},
    {"MediumOrchid", 0xffba55d3},
    {"MediumOrchid1", 0xffe066ff},
    {"MediumOrchid2", 0xffd15fee},
    {"MediumOrchid3", 0xffb452cd},
    {"MediumOrchid4", 0xff7a378b},
    {"MediumPurple", 0xff9370db},
    {"MediumPurple1", 0xffab82ff},
    {"MediumPurple2", 0xff9f79ee},
    {"MediumPurple3", 0xff8968cd},
    {"MediumPurple4", 0xff5d478b},
    {"MediumSeaGreen", 0xff3cb371},
    {"MediumSlateBlue", 0xff7b68ee},
    {"MediumSpringGreen", 0xff00fa9a},
    {"MediumTurquoise", 0xff48d1cc},
    {"MediumVioletRed", 0xffc71585},
    {"midnight blue", 0xff191970},
    {"MidnightBlue", 0xff191970},
    {"mint cream", 0xfff5fffa},
    {"MintCream", 0xfff5fffa},
    {"misty rose", 0xffffe4e1},
    {"MistyRose", 0xffffe4e1},
    {"MistyRose1", 0xffffe4e1},
    {"MistyRose2", 0xffeed5d2},
    {"MistyRose3", 0xffcdb7b5},
    {"MistyRose4", 0xff8b7d7b},
    {"moccasin", 0xffffe4b5},
    {"navajo white", 0xffffdead},
    {"NavajoWhite", 0xffffdead},
    {"NavajoWhite1", 0xffffdead},
    {"NavajoWhite2", 0xffeecfa1},
    {"NavajoWhite3", 0xffcdb38b},
    {"NavajoWhite4", 0xff8b795e},
    {"navy", 0xff000080},
    {"navy blue", 0xff000080},
    {"NavyBlue", 0xff000080},
    {"old lace", 0xfffdf5e6},
    {"OldLace", 0xfffdf5e6},
    {"olive drab", 0xff6b8e23},
    {"OliveDrab", 0xff6b8e23},
    {"OliveDrab1", 0xffc0ff3e},
    {"OliveDrab2", 0xffb3ee3a},
    {"OliveDrab3", 0xff9acd32},
    {"OliveDrab4", 0xff698b22},
    {"orange", 0xffffa500},
    {"orange red", 0xffff4500},
    {"orange1", 0xffffa500},
    {"orange2", 0xffee9a00},
    {"orange3", 0xffcd8500},
    {"orange4", 0xff8b5a00},
    {"OrangeRed", 0xffff4500},
    {"OrangeRed1", 0xffff4500},
    {"OrangeRed2", 0xffee4000},
    {"OrangeRed3", 0xffcd3700},
    {"OrangeRed4", 0xff8b2500},
    {"orchid", 0xffda70d6},
    {"orchid1", 0xffff83fa},
    {"orchid2", 0xffee7ae9},
    {"orchid3", 0xffcd69c9},
    {"orchid4", 0xff8b4789},
    {"pale goldenrod", 0xffeee8aa},
    {"pale green", 0xff98fb98},
    {"pale turquoise", 0xffafeeee},
    {"pale violet red", 0xffdb7093},
    {"PaleGoldenrod", 0xffeee8aa},
    {"PaleGreen", 0xff98fb98},
    {"PaleGreen1", 0xff9aff9a},
    {"PaleGreen2", 0xff90ee90},
    {"PaleGreen3", 0xff7ccd7c},
    {"PaleGreen4", 0xff548b54},
    {"PaleTurquoise", 0xffafeeee},
    {"PaleTurquoise1", 0xffbbffff},
    {"PaleTurquoise2", 0xffaeeeee},
    {"PaleTurquoise3", 0xff96cdcd},
    {"PaleTurquoise4", 0xff668b8b},
    {"PaleVioletRed", 0xffdb7093},
    {"PaleVioletRed1", 0xffff82ab},
    {"PaleVioletRed2", 0xffee799f},
    {"PaleVioletRed3", 0xffcd6889},
    {"PaleVioletRed4", 0xff8b475d},
    {"papaya whip", 0xffffefd5},
    {"PapayaWhip", 0xffffefd5},
    {"peach puff", 0xffffdab9},
    {"PeachPuff", 0xffffdab9},
    {"PeachPuff1", 0xffffdab9},
    {"PeachPuff2", 0xffeecbad},
    {"PeachPuff3", 0xffcdaf95},
    {"PeachPuff4", 0xff8b7765},
    {"peru", 0xffcd853f},
    {"pink", 0xffffc0cb},
    {"pink1", 0xffffb5c5},
    {"pink2", 0xffeea9b8},
    {"pink3", 0xffcd919e},
    {"pink4", 0xff8b636c},
    {"plum", 0xffdda0dd},
    {"plum1", 0xffffbbff},
    {"plum2", 0xffeeaeee},
    {"plum3", 0xffcd96cd},
    {"plum4", 0xff8b668b},
    {"powder blue", 0xffb0e0e6},
    {"PowderBlue", 0xffb0e0e6},
    {"purple", 0xffa020f0},
    {"purple1", 0xff9b30ff},
    {"purple2", 0xff912cee},
    {"purple3", 0xff7d26cd},
    {"purple4", 0xff551a8b},
    {"red", 0xffff0000},
    {"red1", 0xffff0000},
    {"red2", 0xffee0000},
    {"red3", 0xffcd0000},
    {"red4", 0xff8b0000},
    {"rosy brown", 0xffbc8f8f},
    {"RosyBrown", 0xffbc8f8f},
    {"RosyBrown1", 0xffffc1c1},
    {"RosyBrown2", 0xffeeb4b4},
    {"RosyBrown3", 0xffcd9b9b},
    {"RosyBrown4", 0xff8b6969},
    {"royal blue", 0xff4169e1},
    {"RoyalBlue", 0xff4169e1},
    {"RoyalBlue1", 0xff4876ff},
    {"RoyalBlue2", 0xff436eee},
    {"RoyalBlue3", 0xff3a5fcd},
    {"RoyalBlue4", 0xff27408b},
    {"saddle brown", 0xff8b4513},
    {"SaddleBrown", 0xff8b4513},
    {"salmon", 0xfffa8072},
    {"salmon1", 0xffff8c69},
    {"salmon2", 0xffee8262},
    {"salmon3", 0xffcd7054},
    {"salmon4", 0xff8b4c39},
    {"sandy brown", 0xfff4a460},
    {"SandyBrown", 0xfff4a460},
    {"sea green", 0xff2e8b57},
    {"SeaGreen", 0xff2e8b57},
    {"SeaGreen1", 0xff54ff9f},
    {"SeaGreen2", 0xff4eee94},
    {"SeaGreen3", 0xff43cd80},
    {"SeaGreen4", 0xff2e8b57},
    {"seashell", 0xfffff5ee},
    {"seashell1", 0xfffff5ee},
    {"seashell2", 0xffeee5de},
    {"seashell3", 0xffcdc5bf},
    {"seashell4", 0xff8b8682},
    {"sienna", 0xffa0522d},
    {"sienna1", 0xffff8247},
    {"sienna2", 0xffee7942},
    {"sienna3", 0xffcd6839},
    {"sienna4", 0xff8b4726},
    {"sky blue", 0xff87ceeb},
    {"SkyBlue", 0xff87ceeb},
    {"SkyBlue1", 0xff87ceff},
    {"SkyBlue2", 0xff7ec0ee},
    {"SkyBlue3", 0xff6ca6cd},
    {"SkyBlue4", 0xff4a708b},
    {"slate blue", 0xff6a5acd},
    {"slate gray", 0xff708090},
    {"slate grey", 0xff708090},
    {"SlateBlue", 0xff6a5acd},
    {"SlateBlue1", 0xff836fff},
    {"SlateBlue2", 0xff7a67ee},
    {"SlateBlue3", 0xff6959cd},
    {"SlateBlue4", 0xff473c8b},
    {"SlateGray", 0xff708090},
    {"SlateGray1", 0xffc6e2ff},
    {"SlateGray2", 0xffb9d3ee},
    {"SlateGray3", 0xff9fb6cd},
    {"SlateGray4", 0xff6c7b8b},
    {"SlateGrey", 0xff708090},
    {"snow", 0xfffffafa},
    {"snow1", 0xfffffafa},
    {"snow2", 0xffeee9e9},
    {"snow3", 0xffcdc9c9},
    {"snow4", 0xff8b8989},
    {"spring green", 0xff00ff7f},
    {"SpringGreen", 0xff00ff7f},
    {"SpringGreen1", 0xff00ff7f},
    {"SpringGreen2", 0xff00ee76},
    {"SpringGreen3", 0xff00cd66},
    {"SpringGreen4", 0xff008b45},
    {"steel blue", 0xff4682b4},
    {"SteelBlue", 0xff4682b4},
    {"SteelBlue1", 0xff63b8ff},
    {"SteelBlue2", 0xff5cacee},
    {"SteelBlue3", 0xff4f94cd},
    {"SteelBlue4", 0xff36648b},
    {"tan", 0xffd2b48c},
    {"tan1", 0xffffa54f},
    {"tan2", 0xffee9a49},
    {"tan3", 0xffcd853f},
    {"tan4", 0xff8b5a2b},
    {"thistle", 0xffd8bfd8},
    {"thistle1", 0xffffe1ff},
    {"thistle2", 0xffeed2ee},
    {"thistle3", 0xffcdb5cd},
    {"thistle4", 0xff8b7b8b},
    {"tomato", 0xffff6347},
    {"tomato1", 0xffff6347},
    {"tomato2", 0xffee5c42},
    {"tomato3", 0xffcd4f39},
    {"tomato4", 0xff8b3626},
    {"turquoise", 0xff40e0d0},
    {"turquoise1", 0xff00f5ff},
    {"turquoise2", 0xff00e5ee},
    {"turquoise3", 0xff00c5cd},
    {"turquoise4", 0xff00868b},
    {"violet", 0xffee82ee},
    {"violet red", 0xffd02090},
    {"VioletRed", 0xffd02090},
    {"VioletRed1", 0xffff3e96},
    {"VioletRed2", 0xffee3a8c},
    {"VioletRed3", 0xffcd3278},
    {"VioletRed4", 0xff8b2252},
    {"wheat", 0xfff5deb3},
    {"wheat1", 0xffffe7ba},
    {"wheat2", 0xffeed8ae},
    {"wheat3", 0xffcdba96},
    {"wheat4", 0xff8b7e66},
    {"white", 0xffffffff},
    {"white smoke", 0xfff5f5f5},
    {"WhiteSmoke", 0xfff5f5f5},
    {"yellow", 0xffffff00},
    {"yellow green", 0xff9acd32},
    {"yellow1", 0xffffff00},
    {"yellow2", 0xffeeee00},
    {"yellow3", 0xffcdcd00},
    {"yellow4", 0xff8b8b00},
    {"YellowGreen", 0xff9acd32}};

EXPORT
bool wld_lookup_named_color(const char *name, uint32_t *color) {
  char *end;
  int low = 0, mid, high = ARRAY_LENGTH(named_colors);
  int r;

  if (name[0] == '#' && name[1] != '\0') {
    *color = strtoul(name + 1, &end, 16);

    /* Set alpha channel to opaque. */
    *color |= 0xff << 24;

    if (*end == '\0')
      return true;
  }

  while (low <= high) {
    mid = (low + high) / 2;
    r = strcasecmp(named_colors[mid].name, name);

    if (r == 0) {
      *color = named_colors[mid].color;
      return true;
    }
    if (r < 0)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return false;
}
