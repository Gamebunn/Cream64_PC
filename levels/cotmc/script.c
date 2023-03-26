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
#include "levels/cotmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd), 
	LOAD_MIO0(0x7, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x7, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_SKEETER_MM, skeeter_mm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ESPIO, espio_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, cotmc_area_1),
		OBJECT(MODEL_CAP_SWITCH, 14, 372, -6160, 0, 180, 0, 0x00010000, bhvCapSwitch),
		TERRAIN(cotmc_area_1_collision),
		MACRO_OBJECTS(cotmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_NEW_COTMC),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, cotmc_area_2),
		WARP_NODE(0x0A, LEVEL_COTMC, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE_GROUNDS, 0x01, 0x14, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHEESE_FOLLOW, -1738, 1328, -2088, 0, 0, 0, 0x00000000, bhvCheeseFollow),
		OBJECT(MODEL_ESPIO, 2507, 3047, -3826, 0, -48, 0, DIALOG_125 << 24, bhvToadMessageEspio),
		OBJECT(MODEL_WISP1, -4089, 1229, -3036, 0, -66, 0, MWISP_COTMC << 16, bhvWisp1),
		OBJECT(MODEL_NONE, -1385, 1419, -1472, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, -1385, 1203, -1472, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_SKEETER_MM, -2040, 1150, -2933, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_SKEETER_MM, 49, 1150, -1470, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_SKEETER_MM, 3860, 2927, 750, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_SKEETER_MM, -2220, 1150, -553, 0, -37, 0, 0x00000000, bhvSkeeter_MM),
		OBJECT(MODEL_NONE, 997, 1186, 2216, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -1034, 1186, -4135, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, 5063, 2964, 49, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -997, 8369, -5395, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, 956, 351, 2776, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1125, 351, 2666, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1291, 351, 2555, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1464, 351, 2441, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 956, 146, 2776, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1125, 146, 2666, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1291, 146, 2555, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1464, 146, 2441, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 956, 552, 2776, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1125, 552, 2666, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1291, 552, 2555, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, 1464, 552, 2441, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_NONE, -1737, 1298, -1838, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -90, -1737, 1298, -1838),
		TERRAIN(cotmc_area_2_collision),
		MACRO_OBJECTS(cotmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_NEW_COTMC),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, -1737, 1298, -1838),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
