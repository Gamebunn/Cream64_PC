#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "tile_scroll.h"
#include "texscroll.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif


#include "src/game/texscroll/common1_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x3] == (uintptr_t)_common1_mio0SegmentRomStart)) {
		scroll_textures_common1();
	}

}
