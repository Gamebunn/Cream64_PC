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
#include "levels/vcutm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x7, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CAROUSEL, carousel_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_JACK, jack_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KITTEN_LAYLA, kitten_layla_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SWEET, sweet_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HOCUS, hocus_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TAILS_C1, tails_c1_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, vcutm_area_1),
		WARP_NODE(0x0A, LEVEL_VCUTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x08, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x06, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CAROUSEL, -2468, 100, 817, 0, 0, 0, 0x00000000, bhvOctagonalPlatformRotatingVC),
		MARIO_POS(0x01, 0, -4337, 100, 6038),
		OBJECT(MODEL_CHEESE_FOLLOW, -4373, 94, 6389, 0, 176, 0, MWISP_WP << 16, bhvCheeseFollow),
		OBJECT(MODEL_HOCUS, 4330, 129, 1404, 0, -90, 0, WP_003 << 24, bhvToadMessageHocus),
		OBJECT(MODEL_JACK, -905, 122, 2427, 0, 90, 0, WP_001 << 16, bhvJack),
		OBJECT(MODEL_KITTEN_LAYLA, -442, 100, 2362, 0, 20, 0, WP_002 << 16, bhvKittenLayla),
		OBJECT(MODEL_SWEET, 2500, 349, 2467, 0, 90, 0, 0x00000000, bhvSweet),
		OBJECT(MODEL_WOODEN_SIGNPOST, 2721, 94, 1853, 0, 90, 0, WP_004 << 16, bhvMessagePanel),
		OBJECT(MODEL_TAILS_C1, -4715, 94, 4638, 0, 25, 0, WP_000 << 24, bhvToadMessageTails2),
		OBJECT(MODEL_WISP1, -5192, 94, 5232, 0, 45, 0, MWISP_WP << 16, bhvWisp1),
		OBJECT(MODEL_NONE, 3824, 451, -809, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 3824, 154, -809, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, -4655, 94, -1428, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3450, 94, -1911, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 466, 94, -1958, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2489, 94, -31, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3381, 94, -4, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3277, 94, 2983, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -222, 94, 3163, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2885, 94, 3089, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -4789, 94, 3577, 0, 0, 0, 0x00710000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -272, 94, -125, 0, 0, 0, 0x004C0000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -2979, 94, 4182, 0, 0, 0, 0x00710000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2226, 94, 4475, 0, 0, 0, 0x00710000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -4337, 195, 6038, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(vcutm_area_1_collision),
		MACRO_OBJECTS(vcutm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_WHITE_PARK),
		SHOW_DIALOG(0x00, DIALOG_129),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -4337, 100, 6038),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
