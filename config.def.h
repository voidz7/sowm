#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask
#define BORDER_SELECT   "#ffffff"
#define BORDER_NORMAL   "#79695a"
#define BORDER_NONE     "#000000"
#define BORDER_WIDTH    0

const char* menu[]    = {"demon",                   0};
const char* term[]    = {"xterm",                   0};
const char* briup[]   = {"xbacklight", "-inc", "5", 0};
const char* bridown[] = {"xbacklight", "-dec", "5", 0};
const char* voldown[] = {"pamixer", "-d", "5",      0};
const char* volup[]   = {"pamixer", "-i", "5",      0};
const char* volmute[] = {"pamixer", "-t",           0};

static struct key keys[] = {
    {MOD|ShiftMask,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_k,  win_move,  {.com = (const char*[]){"move",   "n"}, .i = 20}},
    {MOD,           XK_j,  win_move,  {.com = (const char*[]){"move",   "s"}, .i = 20}},
    {MOD,           XK_l,  win_move,  {.com = (const char*[]){"move",   "e"}, .i = 20}},
    {MOD,           XK_h,  win_move,  {.com = (const char*[]){"move",   "w"}, .i = 20}},

    {MOD|ShiftMask, XK_k,  win_move,  {.com = (const char*[]){"resize", "n"}, .i = 20}},
    {MOD|ShiftMask, XK_j,  win_move,  {.com = (const char*[]){"resize", "s"}, .i = 20}},
    {MOD|ShiftMask, XK_l,  win_move,  {.com = (const char*[]){"resize", "e"}, .i = 20}},
    {MOD|ShiftMask, XK_h,  win_move,  {.com = (const char*[]){"resize", "w"}, .i = 20}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
