#include <ultra64.h>
#include "sm64.h"
#include "game/level_update.h"
#include "level_commands.h"
#include "game/area.h"

#include "make_const_nonconst.h"

#include "segment_symbols.h"

#include "actors/common0.h"
#include "actors/common1.h"
#include "actors/group0.h"
#include "actors/group1.h"
#include "actors/group2.h"
#include "actors/group3.h"
#include "actors/group4.h"
#include "actors/group5.h"
#include "actors/group6.h"
#include "actors/group7.h"
#include "actors/group8.h"
#include "actors/group9.h"
#include "actors/group10.h"
#include "actors/group11.h"
#include "actors/group12.h"
#include "actors/group13.h"
#include "actors/group14.h"
#include "actors/group15.h"
#include "actors/group16.h"
#include "actors/group17.h"

#include "levels/menu/header.h"
#include "levels/intro/header.h"

#include "level_headers.h"

#include "level_table.h"

#define STUB_LEVEL(_0, _1, _2, _3, _4, _5, _6, _7, _8)
#define DEFINE_LEVEL(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) + 3
static const LevelScript script_exec_level_table[2
  #include "level_defines.h"
];
#undef DEFINE_LEVEL
#undef STUB_LEVEL

static const LevelScript script_L1[4];
static const LevelScript script_L2[4];
static const LevelScript goto_mario_head_regular[4];
static const LevelScript goto_mario_head_dizzy[4];
static const LevelScript script_L5[4];

#define STUB_LEVEL(_0, _1, _2, _3, _4, _5, _6, _7, _8)
#define DEFINE_LEVEL(_0, _1, _2, folder, _4, _5, _6, _7, _8, _9, _10) static const LevelScript script_exec_ ## folder [4 + 1];

#include "level_defines.h"

#undef DEFINE_LEVEL
#undef STUB_LEVEL

const LevelScript level_main_scripts_entry[] = {
    LOAD_MIO0(/*seg*/ 0x04, _group0_mio0SegmentRomStart, _group0_mio0SegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x03, _common1_mio0SegmentRomStart, _common1_mio0SegmentRomEnd),
    LOAD_RAW (/*seg*/ 0x17, _group0_geoSegmentRomStart, _group0_geoSegmentRomEnd),
    LOAD_RAW (/*seg*/ 0x16, _common1_geoSegmentRomStart, _common1_geoSegmentRomEnd),
    LOAD_RAW (/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO,                   mario_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_RIDERS,            mario_riders_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_WINTER,            mario_winter_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SPRING,            mario_spring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_UNICORN,           mario_unicorn_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_YUKATA,            mario_yukata_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_VANILLA,           mario_vanilla_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_BEAN,              mario_bean_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MARIO,             mario_mario_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_LUFFY,             mario_luffy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ICHIBAN,           mario_ichiban_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KLONOA,            mario_klonoa_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_GOKU,              mario_goku_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KATE,              mario_kate_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_CHEF,              mario_chef_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_VAL,               mario_val_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ROGER,             mario_roger_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KATALINA,          mario_katalina_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KITTEN,            mario_kitten_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_LAYLA,             mario_layla_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_CREAMOCCHIA,       mario_creamocchia_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_HALLOWEEN,         mario_halloween_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SWIMSUIT,          mario_swimsuit_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_TRAVIS,            mario_travis_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_BAIT,              mario_bait_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ANYA,              mario_anya_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_WIZ,               mario_wiz_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_JACK,              mario_jack_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_AUSTIN,            mario_austin_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_CAROLINE,          mario_caroline_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MACER,             mario_macer_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DUDLEY,            mario_dudley_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_PAN,               mario_pan_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_POCKY,             mario_pocky_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_LAN,               mario_lan_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DANI,              mario_dani_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_AMY,               mario_amy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MARINE,            mario_marine_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_BLAZE,             mario_blaze_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_TAILS,             mario_tails_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_EGGMAN,            mario_eggman_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KZ,                mario_kz_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_COSMO,             mario_cosmo_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_TIKAL,             mario_tikal_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_CHARMY,            mario_charmy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_VIRGIL,            mario_virgil_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SORA,              mario_sora_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_YUGI,              mario_yugi_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DAWN,              mario_dawn_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SERENA,            mario_serena_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MIKU,              mario_miku_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MAGE,              mario_mage_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_WONDER,            mario_wonder_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DENJI,             mario_denji_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_JOHNNY,            mario_johnny_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SWEET,             mario_sweet_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MMX,               mario_mmx_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_LATINA,            mario_latina_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DOT,               mario_dot_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_NEZUKO,            mario_nezuko_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SENA,              mario_sena_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MARIA,             mario_maria_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ENGIE,             mario_engie_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ROLL,              mario_roll_geo),
    

    LOAD_MODEL_FROM_GEO(MODEL_MARIO_FLY,               mario_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ANYA_FLY,          mario_anya_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_AUSTIN_FLY,        mario_austin_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_CAROLINE_FLY,      mario_caroline_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_CHEF_FLY,          mario_chef_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_GOKU_FLY,          mario_goku_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KATE_FLY,          mario_kate_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_HALLOWEEN_FLY,     mario_halloween_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ICHIBAN_FLY,       mario_ichiban_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_JACK_FLY,          mario_jack_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_YUKATA_FLY,        mario_yukata_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_RIDERS_FLY,        mario_riders_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ROGER_FLY,         mario_roger_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_BEAN_FLY,          mario_bean_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SPRING_FLY,        mario_spring_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SWIMSUIT_FLY,      mario_swimsuit_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_TRAVIS_FLY,        mario_travis_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_UNICORN_FLY,       mario_unicorn_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_VANILLA_FLY,       mario_vanilla_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_WINTER_FLY,        mario_winter_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_WIZ_FLY,           mario_wiz_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MACER_FLY,         mario_macer_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DUDLEY_FLY,        mario_dudley_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_PAN_FLY,           mario_pan_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_POCKY_FLY,         mario_pocky_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_LAN_FLY,           mario_lan_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DANI_FLY,          mario_dani_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_AMY_FLY,           mario_amy_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MARINE_FLY,        mario_marine_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_BLAZE_FLY,         mario_blaze_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_EGGMAN_FLY,        mario_eggman_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_KZ_FLY,            mario_kz_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_COSMO_FLY,         mario_cosmo_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_TIKAL_FLY,         mario_tikal_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_VIRGIL_FLY,        mario_virgil_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SORA_FLY,          mario_sora_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_YUGI_FLY,          mario_yugi_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MIKU_FLY,          mario_miku_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MAGE_FLY,          mario_mage_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_WONDER_FLY,        mario_wonder_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_DENJI_FLY,         mario_denji_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_JOHNNY_FLY,        mario_johnny_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SWEET_FLY,         mario_sweet_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_LATINA_FLY,        mario_latina_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_NEZUKO_FLY,        mario_nezuko_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_SENA_FLY,          mario_sena_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_MARIA_FLY,         mario_maria_fly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIO_ROLL_FLY,          mario_roll_fly_geo),


    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW,           cheese_follow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_RIDERS,    cheese_follow_riders_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_CHOCOLA,   cheese_follow_chocola_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_SPRING,    cheese_follow_spring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_UNICORN,   cheese_follow_unicorn_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_YUKATA,    cheese_follow_yukata_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_WINTER,    cheese_follow_winter_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_BEAN,      cheese_follow_bean_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MARIO,     cheese_follow_mario_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_LUFFY,     cheese_follow_luffy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_KLONOA,    cheese_follow_klonoa_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_VAL,       cheese_follow_val_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_CHEF,      cheese_follow_chef_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_ICHIBAN,   cheese_follow_ichiban_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_GOKU,      cheese_follow_goku_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_KATE,      cheese_follow_kate_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_ROGER,     cheese_follow_roger_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_CREAMOCCHIA, cheese_follow_creamocchia_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_KATALINA,  cheese_follow_katalina_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_KITTEN,    cheese_follow_kitten_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_LAYLA,     cheese_follow_layla_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_HALLOWEEN, cheese_follow_halloween_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_SWIMSUIT,  cheese_follow_swimsuit_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_TRAVIS,    cheese_follow_travis_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_BAIT,      cheese_follow_bait_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_ANYA,      cheese_follow_anya_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_WIZ,       cheese_follow_wiz_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_JACK,      cheese_follow_jack_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_AUSTIN,    cheese_follow_austin_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MACER,     cheese_follow_macer_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_DUDLEY,    cheese_follow_dudley_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_PAN,       cheese_follow_pan_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_POCKY,     cheese_follow_pocky_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_LAN,       cheese_follow_lan_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_DANI,      cheese_follow_dani_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_AMY,       cheese_follow_amy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MARINE,    cheese_follow_marine_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_BLAZE,     cheese_follow_blaze_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_TAILS,     cheese_follow_tails_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_EGGMAN,    cheese_follow_eggman_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_KZ,        cheese_follow_kz_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_COSMO,     cheese_follow_cosmo_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_TIKAL,     cheese_follow_tikal_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_CHARMY,    cheese_follow_charmy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_VIRGIL,    cheese_follow_virgil_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_SORA,      cheese_follow_sora_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_YUGI,      cheese_follow_yugi_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_DAWN,      cheese_follow_dawn_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_SERENA,    cheese_follow_serena_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MIKU,      cheese_follow_miku_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MAGE,      cheese_follow_mage_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_WONDER,    cheese_follow_wonder_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_DENJI,     cheese_follow_denji_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_JOHNNY,    cheese_follow_johnny_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_SWEET,     cheese_follow_sweet_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MMX,       cheese_follow_mmx_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_LATINA,    cheese_follow_latina_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_DOT,       cheese_follow_dot_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_NEZUKO,    cheese_follow_nezuko_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_SENA,      cheese_follow_sena_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_MARIA,     cheese_follow_maria_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_ENGIE,     cheese_follow_engie_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHEESE_FOLLOW_ROLL,      cheese_follow_roll_geo),
    

    LOAD_MODEL_FROM_GEO(MODEL_WISP1,                   wisp1_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SMOKE,                   smoke_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SPARKLES,                sparkles_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BUBBLE,                  bubble_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SMALL_WATER_SPLASH,      small_water_splash_geo),
    LOAD_MODEL_FROM_GEO(MODEL_IDLE_WATER_WAVE,         idle_water_wave_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WATER_SPLASH,            water_splash_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WAVE_TRAIL,              wave_trail_geo),
    LOAD_MODEL_FROM_GEO(MODEL_YELLOW_COIN,             yellow_ring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_STAR,                    star_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TRANSPARENT_STAR,        transparent_star_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WOODEN_SIGNPOST,         wooden_signpost_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SIGNPOST_DEV,            signpost_dev_geo),
    LOAD_MODEL_FROM_DL (MODEL_WHITE_PARTICLE_SMALL,    white_particle_small_dl, LAYER_ALPHA),
    LOAD_MODEL_FROM_GEO(MODEL_RED_FLAME,               red_flame_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BLUE_FLAME,              blue_flame_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BURN_SMOKE,              burn_smoke_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEAVES,                  leaves_geo),
    LOAD_MODEL_FROM_GEO(MODEL_PURPLE_MARBLE,           purple_marble_geo),
    LOAD_MODEL_FROM_GEO(MODEL_FISH,                    fish_geo),
    LOAD_MODEL_FROM_GEO(MODEL_FISH_SHADOW,             fish_shadow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SPARKLES_ANIMATION,      sparkles_animation_geo),
    LOAD_MODEL_FROM_DL (MODEL_SAND_DUST,               sand_seg3_dl_0302BCD0,   LAYER_ALPHA),
    LOAD_MODEL_FROM_GEO(MODEL_BUTTERFLY,               butterfly_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BURN_SMOKE_UNUSED,       burn_smoke_geo),
    LOAD_MODEL_FROM_DL (MODEL_PEBBLE,                  pebble_seg3_dl_0301CB00, LAYER_ALPHA),
    LOAD_MODEL_FROM_GEO(MODEL_MIST,                    mist_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WHITE_PUFF,              white_puff_geo),
    LOAD_MODEL_FROM_DL (MODEL_WHITE_PARTICLE_DL,       white_particle_dl,       LAYER_ALPHA),
    LOAD_MODEL_FROM_GEO(MODEL_WHITE_PARTICLE,          white_particle_geo),
    LOAD_MODEL_FROM_GEO(MODEL_YELLOW_COIN_NO_SHADOW,   yellow_ring_no_shadow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BLUE_COIN,               blue_ring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BLUE_COIN_NO_SHADOW,     blue_ring_no_shadow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIOS_WINGED_METAL_CAP, marios_winged_metal_cap_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIOS_METAL_CAP,        marios_metal_cap_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIOS_WING_CAP,         marios_wing_cap_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIOS_CAP,              marios_cap_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MARIOS_CAP,              marios_cap_geo), // repeated
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_KEY_CUTSCENE,     bowser_key_cutscene_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_KEY,              bowser_key_geo),
    LOAD_MODEL_FROM_GEO(MODEL_RED_FLAME_SHADOW,        red_flame_shadow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_1UP,                     mushroom_1up_geo),
    LOAD_MODEL_FROM_GEO(MODEL_RED_COIN,                green_ring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_RED_COIN_NO_SHADOW,      green_ring_no_shadow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_NUMBER,                  number_geo),
    LOAD_MODEL_FROM_GEO(MODEL_EXPLOSION,               explosion_geo),
    LOAD_MODEL_FROM_GEO(MODEL_DIRT_ANIMATION,          dirt_animation_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CARTOON_STAR,            cartoon_star_geo),
#ifdef PORT_MOP_OBJS
    LOAD_MODEL_FROM_GEO(MODEL_MOP_NOTEBLOCK,                Noteblock_MOP),
    LOAD_MODEL_FROM_GEO(MODEL_MOP_CHECKPOINT_FLAG,          Checkpoint_Flap_MOP),
    LOAD_MODEL_FROM_GEO(MODEL_MOP_FLIPBLOCK,                FlipBlock_MOP),
	LOAD_MODEL_FROM_DL (MODEL_MOP_FLIPSWAP_PLATFORM,        DL_Flipswap_Platform_MOP_0x5f9ac0, LAYER_OPAQUE),
    LOAD_MODEL_FROM_DL (MODEL_MOP_FLIPSWAP_PLATFORM_BORDER, DL_Flipswap_Platform_Border_MOP_0x5f8560, LAYER_OPAQUE),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_FLIPSWITCH_PANEL,         Flipswitch_Panel_MOP),
	LOAD_MODEL_FROM_DL (MODEL_MOP_SWITCHBOARD,              DL_Green_Switchboard_MOP_0x5fd8b0, LAYER_OPAQUE),
    LOAD_MODEL_FROM_DL (MODEL_MOP_SWITCHBOARD_GEARS,        DL_Green_Switchboard_Gears_MOP_0x600460, LAYER_OPAQUE),
    LOAD_MODEL_FROM_DL (MODEL_MOP_SHRINKPLAT_BORDER,        DL_Shrink_Platform_Border_MOP, LAYER_OPAQUE),
	LOAD_MODEL_FROM_DL (MODEL_MOP_SPRING,                   DL_Spring_MOP_0x301fc98, LAYER_OPAQUE),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_ROTATING_BLOCK,           Moving_Rotating_Block_MOP),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_SANDBLOCK,                Sandblock_MOP),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_SHRINKPLAT,               Shrink_Platform_MOP),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_SWITCHBLOCK,              Switchblock_MOP),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_SWITCHBLOCK_SWITCH,       Switchblock_Switch_MOP),
    LOAD_MODEL_FROM_GEO(MODEL_MOP_EMITTER_SPARKLES,         Sparkles_Emitter_MOP),
#endif
    FREE_LEVEL_POOL(),
    CALL(/*arg*/ 0, /*func*/ lvl_init_from_save_file),
    LOOP_BEGIN(),
        EXECUTE(/*seg*/ 0x14, _menuSegmentRomStart, _menuSegmentRomEnd, level_main_menu_entry_2),
        JUMP_LINK(script_exec_level_table),
        SLEEP(/*frames*/ 1),
    LOOP_UNTIL(/*op*/ OP_LT, /*arg*/ 0),
    JUMP_IF(/*op*/ OP_EQ, /*arg*/ -1, script_L2),
    JUMP_IF(/*op*/ OP_EQ, /*arg*/ -2, goto_mario_head_regular),
    JUMP_IF(/*op*/ OP_EQ, /*arg*/ -3, goto_mario_head_dizzy),
    JUMP_IF(/*op*/ OP_EQ, /*arg*/ -8, script_L1),
    JUMP_IF(/*op*/ OP_EQ, /*arg*/ -9, script_L5),
};

static const LevelScript script_L1[] = {
    EXIT_AND_EXECUTE(/*seg*/ 0x14, _introSegmentRomStart, _introSegmentRomEnd, level_intro_splash_screen),
};

static const LevelScript script_L2[] = {
    EXIT_AND_EXECUTE(/*seg*/ 0x1A, _endingSegmentRomStart, _endingSegmentRomEnd, level_ending_entry),
};

static const LevelScript goto_mario_head_regular[] = {
    EXIT_AND_EXECUTE(/*seg*/ 0x14, _introSegmentRomStart, _introSegmentRomEnd, level_intro_mario_head_regular),
};

static const LevelScript goto_mario_head_dizzy[] = {
    EXIT_AND_EXECUTE(/*seg*/ 0x14, _introSegmentRomStart, _introSegmentRomEnd, level_intro_mario_head_dizzy),
};

static const LevelScript script_L5[] = {
    EXIT_AND_EXECUTE(/*seg*/ 0x14, _introSegmentRomStart, _introSegmentRomEnd, level_intro_entry_4),
};

// Include the level jumptable.

#define STUB_LEVEL(_0, _1, _2, _3, _4, _5, _6, _7, _8)

#define DEFINE_LEVEL(_0, levelenum, _2, folder, _4, _5, _6, _7, _8, _9, _10) JUMP_IF(OP_EQ, levelenum, script_exec_ ## folder),

static const LevelScript script_exec_level_table[] = {
    GET_OR_SET(/*op*/ OP_GET, /*var*/ VAR_CURR_LEVEL_NUM),
    #include "levels/level_defines.h"
    EXIT(),
};
#undef DEFINE_LEVEL

#define DEFINE_LEVEL(_0, _1, _2, folder, _4, _5, _6, _7, _8, _9, _10) \
static const LevelScript script_exec_ ## folder [] = { \
    EXECUTE(0x1A, _ ## folder ## SegmentRomStart, _ ## folder ## SegmentRomEnd, level_ ## folder ## _entry), \
    RETURN(), \
};

#include "levels/level_defines.h"
#undef STUB_LEVEL
#undef DEFINE_LEVEL

const LevelScript script_func_global_1[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BLUE_COIN_SWITCH,        blue_coin_switch_geo),
    LOAD_MODEL_FROM_GEO(MODEL_AMP,                     dAmpGeo),
    LOAD_MODEL_FROM_GEO(MODEL_PURPLE_SWITCH,           purple_switch_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHECKERBOARD_PLATFORM,   checkerboard_platform_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BREAKABLE_BOX,           breakable_box_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BREAKABLE_BOX_SMALL,     breakable_box_small_geo),
    LOAD_MODEL_FROM_GEO(MODEL_EXCLAMATION_BOX_OUTLINE, exclamation_box_outline_geo),
    LOAD_MODEL_FROM_GEO(MODEL_EXCLAMATION_BOX,         exclamation_box_geo),
    LOAD_MODEL_FROM_GEO(MODEL_GOOMBA,                  goomba_geo),
    LOAD_MODEL_FROM_GEO(MODEL_GOOMBA_CREM,             goomba_crem_geo),
    // LOAD_MODEL_FROM_DL (MODEL_EXCLAMATION_POINT,       exclamation_box_outline_seg8_dl_08025F08, LAYER_ALPHA),
    LOAD_MODEL_FROM_GEO(MODEL_KOOPA_SHELL,             koopa_shell_geo),
    LOAD_MODEL_FROM_GEO(MODEL_METAL_BOX,               metal_box_geo),
    LOAD_MODEL_FROM_DL (MODEL_METAL_BOX_DL,            metal_box_dl,                             LAYER_OPAQUE),
    LOAD_MODEL_FROM_GEO(MODEL_BLACK_BOBOMB,            black_bobomb_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LAYLA,                   layla_geo),
    LOAD_MODEL_FROM_DL (MODEL_DL_CANNON_LID,           cannon_lid_seg8_dl_080048E0,              LAYER_OPAQUE),
    LOAD_MODEL_FROM_GEO(MODEL_BOWLING_BALL,            bowling_ball_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CANNON_BARREL,           cannon_barrel_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CANNON_BASE,             cannon_base_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HEART,                   heart_geo),
    LOAD_MODEL_FROM_GEO(MODEL_FLYGUY,                  flyguy_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHUCKYA,                 chuckya_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TRAJECTORY_MARKER_BALL,  bowling_ball_track_geo),
#ifdef PORT_MOP_OBJS
	LOAD_MODEL_FROM_GEO(MODEL_MOP_SHELL_GREEN,         koopa_shell2_geo),
	LOAD_MODEL_FROM_GEO(MODEL_MOP_SHELL_RED,           koopa_shell3_geo),
#endif
    RETURN(),
};

const LevelScript script_func_global_2[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BULLET_BILL,             bullet_bill_geo),
    LOAD_MODEL_FROM_GEO(MODEL_YELLOW_SPHERE,           yellow_sphere_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HOOT,                    hoot_geo),
    LOAD_MODEL_FROM_GEO(MODEL_YOSHI_EGG,               yoshi_egg_geo),
    LOAD_MODEL_FROM_GEO(MODEL_THWOMP,                  thwomp_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HEAVE_HO,                heave_ho_geo),
    RETURN(),
};

const LevelScript script_func_global_3[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BLARGG,                  blargg_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BULLY,                   bully_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BULLY_BOSS,              bully_boss_geo),
    RETURN(),
};

const LevelScript script_func_global_4[] = {
    LOAD_MODEL_FROM_GEO(MODEL_WATER_BOMB,              water_bomb_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WATER_BOMB_SHADOW,       water_bomb_shadow_geo),
    LOAD_MODEL_FROM_GEO(MODEL_KING_BOBOMB,             king_bobomb_geo),
    RETURN(),
};

const LevelScript script_func_global_5[] = {
    LOAD_MODEL_FROM_GEO(MODEL_MANTA_RAY,               manta_seg5_geo_05008D14),
    LOAD_MODEL_FROM_GEO(MODEL_UNAGI,                   unagi_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SUSHI,                   sushi_geo),
    LOAD_MODEL_FROM_DL (MODEL_DL_WHIRLPOOL,            whirlpool_seg5_dl_05013CB8, LAYER_TRANSPARENT),
    LOAD_MODEL_FROM_GEO(MODEL_CLAM_SHELL,              clam_shell_geo),
    RETURN(),
};

const LevelScript script_func_global_6[] = {
    LOAD_MODEL_FROM_GEO(MODEL_POKEY_HEAD,              pokey_head_geo),
    LOAD_MODEL_FROM_GEO(MODEL_POKEY_BODY_PART,         pokey_body_part_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TWEESTER,                tweester_geo),
    LOAD_MODEL_FROM_GEO(MODEL_KLEPTO,                  klepto_geo),
    LOAD_MODEL_FROM_GEO(MODEL_EYEROK_LEFT_HAND,        eyerok_left_hand_geo),
    LOAD_MODEL_FROM_GEO(MODEL_EYEROK_RIGHT_HAND,       eyerok_right_hand_geo),
    RETURN(),
};

const LevelScript script_func_global_7[] = {
    LOAD_MODEL_FROM_DL (MODEL_DL_MONTY_MOLE_HOLE,      monty_mole_hole_seg5_dl_05000840, LAYER_TRANSPARENT_DECAL),
    LOAD_MODEL_FROM_GEO(MODEL_MONTY_MOLE,              monty_mole_geo),
    LOAD_MODEL_FROM_GEO(MODEL_UKIKI,                   ukiki_geo),
    LOAD_MODEL_FROM_GEO(MODEL_FWOOSH,                  fwoosh_geo),
    RETURN(),
};

const LevelScript script_func_global_8[] = {
    LOAD_MODEL_FROM_GEO(MODEL_SPINDRIFT,               spindrift_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MR_BLIZZARD_HIDDEN,      mr_blizzard_hidden_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MR_BLIZZARD,             mr_blizzard_geo),
    LOAD_MODEL_FROM_GEO(MODEL_PENGUIN,                 penguin_geo),
    RETURN(),
};

const LevelScript script_func_global_9[] = {
    LOAD_MODEL_FROM_DL (MODEL_CAP_SWITCH_EXCLAMATION,  cap_switch_exclamation_seg5_dl_05002E00, LAYER_ALPHA),
    LOAD_MODEL_FROM_GEO(MODEL_CAP_SWITCH,              cap_switch_geo),
    LOAD_MODEL_FROM_DL (MODEL_CAP_SWITCH_BASE,         cap_switch_base_seg5_dl_05003120,        LAYER_OPAQUE),
#ifdef PORT_MOP_OBJS
    LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE,              springboard_top_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE_CENTER,       springboard_spring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE_BASE,         springboard_bottom_geo),
#endif
    RETURN(),
};

const LevelScript script_func_global_10[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BOO,                     boo_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BETA_BOO_KEY,            small_key_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HAUNTED_CHAIR,           haunted_chair_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MAD_PIANO,               mad_piano_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOOKEND_PART,            bookend_part_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOOKEND,                 bookend_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HAUNTED_CAGE,            haunted_cage_geo),
    RETURN(),
};

const LevelScript script_func_global_11[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BIRDS,                   birds_geo),
    LOAD_MODEL_FROM_GEO(MODEL_PEACH,                   peach_geo),
    LOAD_MODEL_FROM_GEO(MODEL_YOSHI,                   yoshi_geo),
    RETURN(),
};

const LevelScript script_func_global_12[] = {
    LOAD_MODEL_FROM_GEO(MODEL_ENEMY_LAKITU,            enemy_lakitu_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SPINY_BALL,              spiny_ball_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SPINY,                   spiny_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WIGGLER_HEAD,            wiggler_head_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WIGGLER_BODY,            wiggler_body_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BUBBA,                   bubba_geo),
    RETURN(),
};

const LevelScript script_func_global_13[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER,                  bowser_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_BOMB_CHILD_OBJ,   bowser_bomb_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_BOMB,             bowser_bomb_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_SMOKE,            bowser_impact_smoke_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_FLAMES,           bowser_flames_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_WAVE,             invisible_bowser_accessory_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_NO_SHADOW,        bowser_geo_no_shadow),
    RETURN(),
};

const LevelScript script_func_global_14[] = {
    LOAD_MODEL_FROM_GEO(MODEL_BUB,                     bub_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TREASURE_CHEST_BASE,     treasure_chest_base_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TREASURE_CHEST_LID,      treasure_chest_lid_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CYAN_FISH,               cyan_fish_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WATER_RING,              water_ring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WATER_MINE,              water_mine_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SEAWEED,                 seaweed_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SKEETER,                 skeeter_geo),
    RETURN(),
};

const LevelScript script_func_global_15[] = {
    LOAD_MODEL_FROM_GEO(MODEL_PIRANHA_PLANT,           piranha_plant_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WHOMP,                   whomp_geo),
    LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITH_SHELL,        koopa_with_shell_geo),
    LOAD_MODEL_FROM_GEO(MODEL_KOOPA_WITHOUT_SHELL,     koopa_without_shell_geo),
    LOAD_MODEL_FROM_GEO(MODEL_METALLIC_BALL,           metallic_ball_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CHAIN_CHOMP,             chain_chomp_geo),
    LOAD_MODEL_FROM_GEO(MODEL_KOOPA_FLAG,              koopa_flag_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WOODEN_POST,             wooden_post_geo),
    RETURN(),
};

const LevelScript script_func_global_16[] = {
    LOAD_MODEL_FROM_GEO(MODEL_MIPS,                    mips_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOO_CASTLE,              boo_castle_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LAKITU,                  lakitu_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TOAD,                    toad_geo),
    RETURN(),
};

const LevelScript script_func_global_17[] = {
    LOAD_MODEL_FROM_GEO(MODEL_CHILL_BULLY,             chilly_chief_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BIG_CHILL_BULLY,         chilly_chief_big_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MONEYBAG,                moneybag_geo),
    RETURN(),
};

const LevelScript script_func_global_18[] = {
    LOAD_MODEL_FROM_GEO(MODEL_SWOOP,                   swoop_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SCUTTLEBUG,              scuttlebug_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MR_I_IRIS,               mr_i_iris_geo),
    LOAD_MODEL_FROM_GEO(MODEL_MR_I,                    mr_i_geo),
    LOAD_MODEL_FROM_GEO(MODEL_DORRIE,                  dorrie_geo),
    LOAD_MODEL_FROM_GEO(MODEL_SNUFIT,                  snufit_geo),
    RETURN(),
};
