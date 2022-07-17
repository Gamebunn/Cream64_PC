#ifndef SEQ_IDS_H
#define SEQ_IDS_H

// Sometimes a sequence id is represented as one of the below ids (the base id),
// optionally OR'd with SEQ_VARIATION.
#define SEQ_BASE_ID 0x7f
#define SEQ_VARIATION 0x80

#define SEQ_MENU_GAME_OVER (SEQ_MENU_TITLE_SCREEN | SEQ_VARIATION)

enum SeqId {
    SEQ_SOUND_PLAYER,                 // 0x00
    SEQ_EVENT_CUTSCENE_COLLECT_STAR,  // 0x01
    SEQ_MENU_TITLE_SCREEN,            // 0x02; GOING UNUSED
    SEQ_LEVEL_GRASS,                  // 0x03 NEW_BOB
    SEQ_LEVEL_INSIDE_CASTLE,          // 0x04; NEW MIDI
    SEQ_LEVEL_WATER,                  // 0x05 NEW_JRB
    SEQ_LEVEL_HOT,                    // 0x06 NEW_LLL
    SEQ_LEVEL_BOSS_KOOPA,             // 0x07 EGGMAN1
    SEQ_LEVEL_SNOW,                   // 0x08 NEW_CCM
    SEQ_LEVEL_SLIDE,                  // 0x09 NEW_TTC
    SEQ_LEVEL_SPOOKY,                 // 0x0A NEW_BBH
    SEQ_EVENT_PIRANHA_PLANT,          // 0x0B
    SEQ_LEVEL_UNDERGROUND,            // 0x0C NEW_HMC
    SEQ_MENU_STAR_SELECT,             // 0x0D; NEW MIDI
    SEQ_EVENT_POWERUP,                // 0x0E; NEW MIDI
    SEQ_EVENT_METAL_CAP,              // 0x0F; NEW MIDI
    SEQ_EVENT_KOOPA_MESSAGE,          // 0x10; NEW MIDI
    SEQ_LEVEL_KOOPA_ROAD,             // 0x11 EGGSTAGE1
    SEQ_EVENT_HIGH_SCORE,             // 0x12; NEW_HIGHSCORE
    SEQ_EVENT_MERRY_GO_ROUND,         // 0x13 NEW_BBH2
    SEQ_EVENT_RACE,                   // 0x14
    SEQ_EVENT_CUTSCENE_STAR_SPAWN,    // 0x15; NEW MIDI
    SEQ_EVENT_BOSS,                   // 0x16; NEW BOSS
    SEQ_EVENT_CUTSCENE_COLLECT_KEY,   // 0x17
    SEQ_EVENT_ENDLESS_STAIRS,         // 0x18; NEW MIDI
    SEQ_LEVEL_BOSS_KOOPA_FINAL,       // 0x19 EGGMAN3
    SEQ_EVENT_CUTSCENE_CREDITS,       // 0x1A
    SEQ_EVENT_SOLVE_PUZZLE,           // 0x1B
    SEQ_EVENT_TOAD_MESSAGE,           // 0x1C
    SEQ_EVENT_PEACH_MESSAGE,          // 0x1D 
    SEQ_EVENT_CUTSCENE_INTRO,         // 0x1E
    SEQ_EVENT_CUTSCENE_VICTORY,       // 0x1F
    SEQ_EVENT_CUTSCENE_ENDING,        // 0x20; NEW MIDI
    SEQ_MENU_FILE_SELECT,             // 0x21; NEW MIDI
    SEQ_EVENT_CUTSCENE_LAKITU,        // 0x22 (not in JP)
    SEQ_LEVEL_NEW_WF,                 // 0x23 
    SEQ_LEVEL_NEW_LLL2,               // 0x24 LLL2
    SEQ_LEVEL_NEW_SSL,                // 0x25 NEW_SSL
    SEQ_LEVEL_NEW_SSL2,               // 0x26 SSL2
    SEQ_LEVEL_NEW_DDD,                // 0x27 SSL2
    SEQ_LEVEL_NEW_SL,                 // 0x28 SL
    SEQ_LEVEL_NEW_SL2,                // 0x29 SL2
    SEQ_LEVEL_NEW_WDW,                // 0x2A WDW
    SEQ_LEVEL_NEW_TTM,                // 0x2B TTM
    SEQ_LEVEL_NEW_TTM2,               // 0x2C TTM2
    SEQ_LEVEL_NEW_THI,                // 0x2D THI
    SEQ_LEVEL_NEW_RR,                 // 0x2E RR
    SEQ_LEVEL_EGGSTAGE2,              // 0x2F EGGSTAGE2
    SEQ_LEVEL_EGGMAN2,                // 0x30 EGGMAN2
    SEQ_LEVEL_EGGSTAGE3,              // 0x31 EGGSTAGE3
    SEQ_LEVEL_EGGMAN3FINALE,          // 0x32 EGGMAN3 FINALE
    SEQ_EVENT_BOSS_WISEMAN,           // 0x33 WISEMAN
    SEQ_MISSION_STREET,               // 0x34 MISSION STREET
    SEQ_KARAOKE_BAR,                  // 0x35 KARAOKE BAR
    SEQ_WHITE_PARK,                   // 0x36 WHITE PARK
    SEQ_NTMFUGIYAMA,                  // 0x37 FUGIYAMA GOLF CLUB
    SEQ_NTM_STARGET,                  // 0x38 FUGIYAMA GOLF CLUB - STAR GET
    SEQ_RACING,                       // 0x39 VS GEMERL/TAILS
    SEQ_SHELLSLIDE,                   // 0x3A VS SHELL SLIDING
    SEQ_PSS_LEAFFOREST,               // 0x3B VS PSS - LEAF FOREST BETA
    SEQ_THEEND,                       // 0x3C VS THE END
    SEQ_EVENT_VANISH,                 // 0x3D VANISH CAP
    SEQ_EVENT_PEACH_MESSAGE_ORI,      // 0x3E ORIGINAL PEACH MESSAGE
    SEQ_COUNT
};

#endif // SEQ_IDS_H
