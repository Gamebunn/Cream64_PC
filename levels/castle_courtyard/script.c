#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "dialog_ids.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common0.h"
#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/     0, 200, -1652, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvAmbientSounds),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2700,   0, -1652, /*angle*/ 0, 0, 0, /*bhvParam*/ BPARAM2(0x00), /*bhv*/ bhvBirdsSoundLoop),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2700,   0, -1652, /*angle*/ 0, 0, 0, /*bhvParam*/ BPARAM2(0x01), /*bhv*/ bhvBirdsSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_BOO, /*pos*/ -3217, 100,  -101, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  3317, 100, -1701, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/   -71,   1, -1387, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvCourtyardBooTriplet),
    RETURN(),
};

const LevelScript level_castle_courtyard_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0        (/*seg*/ 0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_10),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE,  spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     castle_courtyard_geo_000200),

    LOAD_MODEL_FROM_GEO(MODEL_WARPRING,     warpring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BAIT,     bait_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LURK,     lurk_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BUMP,     bump_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SAGE,     sage_geo),
    LOAD_MODEL_FROM_GEO(MODEL_GOOMBA_MARINE,     goomba_marine_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TOAD_NORMAL,     toad_normal_geo),

    AREA(/*index*/ 1, castle_courtyard_geo_000218),
        OBJECT(/*model*/ MODEL_BOO,  /*pos*/ -2360, -100, -2712, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(1) | BPARAM2(WARP_NODE_05), /*bhv*/ bhvBooWithCage),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,   51, -1000, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvLaunchStarCollectWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,   51, -1000, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0B), /*bhv*/ bhvLaunchDeathWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 3180,    500,   330, /*angle*/ 0,   0, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvWarp),
        OBJECT(/*model*/ MODEL_WARPRING, /*pos*/ 3180,    500,   330, /*angle*/ 0,   0, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvWarpRing),
        OBJECT(/*model*/ MODEL_CHEESE_FOLLOW, /*pos*/ 0, 0, 461, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCheeseFollow),
        WARP_NODE(/*id*/ WARP_NODE_05,    /*destLevel*/ LEVEL_BBH,              /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_0A,    /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_0B,    /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0B, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_01,    /*destLevel*/ LEVEL_CASTLE,           /*destArea*/ 1, /*destNode*/ WARP_NODE_02, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH, /*destLevel*/ LEVEL_CASTLE_GROUNDS,   /*destArea*/ 1, /*destNode*/ WARP_NODE_03, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 0x02, /*destNode*/ 0x0D, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        TERRAIN(/*terrainData*/ castle_courtyard_seg7_collision),
        MACRO_OBJECTS(/*objList*/ castle_courtyard_seg7_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

AREA(2, castle_courtyard_area_2),
		WARP_NODE(0x0D, LEVEL_CASTLE_COURTYARD, 0x02, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x03, -1, -2, -840),
		OBJECT(MODEL_NONE, 0, 200, 5689, 0, 0, 0, 0x000D0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 200, 5689),
		TERRAIN(castle_courtyard_area_2_collision),
		MACRO_OBJECTS(castle_courtyard_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_KARAOKE_BAR),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, castle_courtyard_area_3),
		WARP_NODE(0x0D, LEVEL_CASTLE_COURTYARD, 0x02, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x01, 0x02, 0, 0, 884),
		WARP_NODE(0xF3, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -5311, -31, -3715, 0, 0, 0, 0x00F30000, bhvWarp),
		OBJECT(MODEL_WARPRING, -5311, -31, -3715, 0, 0, 0, 0x00000000, bhvWarpRing),
		OBJECT(MODEL_NONE, -3133, -219, -2908, 0, 90, 0, KB_MVC2 << 16, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3152, -219, -2476, 0, 90, 0, KB_CVS2 << 16, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3152, -219, -2186, 0, 90, 0, KB_SF3 << 16, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3152, -219, -1878, 0, 90, 0, KB_MRDO << 16, bhvSignOnWall),
		OBJECT(MODEL_NONE, -3152, -219, -1589, 0, 90, 0, KB_MAPPY << 16, bhvSignOnWall),
		OBJECT(MODEL_BAIT, -4057, -434, -3484, 0, -180, 0, KB_007 << 24, bhvToadMessageBait),
		OBJECT(MODEL_NONE, 541, 196, -599, 0, -90, 0, KB_008 << 16, bhvSignOnWall),
		OBJECT(MODEL_BUMP, 582, -325, -3332, 0, -45, 0, KB_002 << 24, bhvToadMessageBump),
		OBJECT(MODEL_GOOMBA_MARINE, -2731, -336, -1301, 0, 0, 0, KB_003 << 24, bhvToadMessageGoombaMarine),
		OBJECT(MODEL_GOOMBA_MARINE, -1086, -435, -1207, 0, -118, 0, KB_004 << 24, bhvToadMessageGoombaMarine),
		OBJECT(MODEL_LURK, -153, -435, -1256, 0, -180, 0, 0x00000000, bhvLurk),
		OBJECT(MODEL_NONE, -152, -294, -1557, 0, -180, 0, KB_000 << 16, bhvSignOnWall),
		OBJECT(MODEL_NONE, 1110, -379, -2118, 0, -90, 0, MWISP_KB << 16, bhvSignOnWall),
		OBJECT(MODEL_SAGE, -824, -336, -1651, 0, 0, 0, 0x00000000, bhvSage),
		OBJECT(MODEL_NONE, -890, -348, -1701, 0, -90, 0, KB_001 << 16, bhvSignOnWall),
		OBJECT(MODEL_TOAD_NORMAL, 272, -358, -2616, 0, 154, 0, KB_005 << 24, bhvToadMessageNormal),
		OBJECT(MODEL_TOAD_NORMAL, -440, -358, -3450, 0, 93, 0, KB_006 << 24, bhvToadMessageNormal),
		TERRAIN(castle_courtyard_area_3_collision),
		MACRO_OBJECTS(castle_courtyard_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_KARAOKE_BAR),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -14, 0, -201),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
