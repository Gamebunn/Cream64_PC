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
#include "src/game/texscroll/wmotr_texscroll.inc.c"
#include "src/game/texscroll/group0_texscroll.inc.c"
#include "src/game/texscroll/totwc_texscroll.inc.c"
#include "src/game/texscroll/cotmc_texscroll.inc.c"
#include "src/game/texscroll/castle_inside_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x3] == (uintptr_t)_common1_mio0SegmentRomStart)) {
		scroll_textures_common1();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wmotr_segment_7SegmentRomStart)) {
		scroll_textures_wmotr();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x4] == (uintptr_t)_group0_mio0SegmentRomStart)) {
		scroll_textures_group0();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_totwc_segment_7SegmentRomStart)) {
		scroll_textures_totwc();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_cotmc_segment_7SegmentRomStart)) {
		scroll_textures_cotmc();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_castle_inside_segment_7SegmentRomStart)) {
		scroll_textures_castle_inside();
	}

}
