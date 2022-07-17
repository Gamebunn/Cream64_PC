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

#include "actors/common0.h"
#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x7, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_FLOOMBA, floomba_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GOLFTREE, golftree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TAILS_C1, tails_c1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_JOHNNY, johnny_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STARFLAG, starflag_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_VECTOR, vector_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		WARP_NODE(0x0A, LEVEL_WMOTR, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x02, 0x38, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x02, 0x6D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHEESE_FOLLOW, 5447, -4342, 6268, 0, 0, 0, 0x00000000, bhvCheeseFollow),
		OBJECT(MODEL_FLOOMBA, 2670, -4342, 4283, 0, 0, 0, NTM_002 << 24, bhvToadMessageFloomba),
		OBJECT(MODEL_JOHNNY, 5834, 1200, -3444, 0, 0, 0, NTM_003 << 24, bhvToadMessageJohnny),
		OBJECT(MODEL_TAILS_C1, 5237, -4369, 4361, 0, 0, 0, NTM_001 << 24, bhvToadMessageTails3),
		OBJECT(MODEL_VECTOR, 6166, -3827, 5078, 0, -90, 0, NTM_000 << 24, bhvToadMessageVector),
		OBJECT(MODEL_WISP1, 4175, -4369, 4768, 0, 0, 0, MWISP_NTM << 16, bhvWisp1),
		OBJECT(MODEL_NONE, -4460, 3374, 3447, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -4460, 3074, 3447, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_STARFLAG, -4439, 3074, 3097, 0, 0, 0, 0x00000000, bhvStarFlag),
		OBJECT(MODEL_GOLFTREE, 5586, -4369, 5370, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 1087, -4369, 5338, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 1717, -4369, 7252, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, -2848, -2050, -3972, -15, -1, -6, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, -806, -2054, -1242, 0, -1, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 4710, 1200, -5365, 0, -1, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 6398, 1200, -4138, 0, -1, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 2122, 1200, 387, 0, -1, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 4491, 1200, -481, 0, -1, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_GOLFTREE, 5984, 1200, -4907, 0, -1, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 5217, -4369, 6083, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		MARIO_POS(0x01, 0, 5217, -4369, 6083),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_NTMFUGIYAMA),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 5217, -4369, 6083),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
