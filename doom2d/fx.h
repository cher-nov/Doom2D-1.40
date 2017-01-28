#ifndef DOOM2D_FX_H
#define DOOM2D_FX_H

#include "libs/vga.h"

#define MAXFX 300

typedef struct {
    int x, y;
    int xv, yv;
    char t, s;
} fx_t;

void FX_trans1(int t);

void FX_savegame(int h);

void FX_loadgame(int h);

void FX_alloc(void);

void FX_init(void);

void FX_act(void);

void FX_draw(void);

void FX_tfog(int x, int y);

void FX_ifog(int x, int y);

void FX_bubble(int x, int y, int xv, int yv, int n);

extern unsigned char fx_scr1[V_SCR_WIDTH * V_SCR_HEIGHT];
extern unsigned char fx_scr2[V_SCR_WIDTH * V_SCR_HEIGHT];

#endif //DOOM2D_FX_H
