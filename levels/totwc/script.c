#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x7, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160), 
	LOAD_MODEL_FROM_GEO(MODEL_BULLYK, bullyk_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHARMY, charmy_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		WARP_NODE(0x0A, LEVEL_TOTWC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BULLYK, -3580, -396, 3351, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, -956, 942, 3946, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 887, 2250, 918, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 505, 2250, -2681, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 1363, 2250, -1281, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 4615, -2348, 1642, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 2952, -2345, 881, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 1102, -2749, 1923, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_BULLYK, 110, -2645, 526, 0, 0, 0, 0x00000000, bhvSmallBullyK),
		OBJECT(MODEL_CHARMY, 3723, 2174, 621, 3, -32, -2, DIALOG_126 << 24, bhvToadMessageCharmy),
		OBJECT(MODEL_CHEESE_FOLLOW, -7733, -238, 5818, 0, -19, 0, MWISP_WP << 16, bhvCheeseFollow),
		OBJECT(MODEL_RED_FLAME, -8125, 72, 6861, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -219, 2806, -3346, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1640, 2806, -3346, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -219, 2806, -389, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 1640, 2806, -389, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_WISP1, -7752, -409, 6938, 0, -66, 0, MWISP_TOTWC << 16, bhvWisp1),
		OBJECT(MODEL_NONE, 804, 2506, -1626, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 804, 2258, -1626, 2, 0, -2, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, -7702, -286, 6127, 0, 75, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 75, -7702, -286, 6127),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_NEW_TOTWC),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 75, -7702, -286, 6127),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
