#pragma once
#include <PR/gbi.h>
#include <PR/ultratypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "game/game_init.h"
#include "game/ingame_menu.h"

struct DjuiFont {
    f32 charWidth;
    f32 charHeight;
    f32 lineHeight;
    f32 defaultFontScale;
    u8 textureBitSize;
    bool rotatedUV;
    const Gfx* textBeginDisplayList;
    void (*render_char)(char);
    f32 (*char_width)(char);
};

extern const struct DjuiFont* gDjuiFonts[];
