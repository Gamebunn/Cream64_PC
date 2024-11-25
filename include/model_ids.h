#ifndef MODEL_IDS_H
#define MODEL_IDS_H

#define ACT_1 (1 << 0)
#define ACT_2 (1 << 1)
#define ACT_3 (1 << 2)
#define ACT_4 (1 << 3)
#define ACT_5 (1 << 4)
#define ACT_6 (1 << 5)

// If an object is set as active for the first 5 acts only, it is treated as always active.
// It's possible that there were only planned to be 5 acts per level early in development.
// Hence, they added a macro so they wouldn't have to change the acts for every object.
#define ALL_ACTS_MACRO ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5
#define ALL_ACTS       ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6

#define MODEL_NONE                        0x00

/* Global models that are loaded for every level */

#define MODEL_MARIO                       0x01        // mario_geo #1
#define MODEL_CHEESE_FOLLOW               0x02        // cheese_follow_geo #1

// --Cream Alts--

// Official Outfits

#define MODEL_MARIO_RIDERS                0x1FF        // mario_riders_geo #2
#define MODEL_MARIO_WINTER                0x1FE        // mario_winter_geo #3
#define MODEL_MARIO_SPRING                0x1FD        // mario_spring_geo #4
#define MODEL_MARIO_UNICORN               0x1FC        // mario_unicorn_geo #5
#define MODEL_MARIO_YUKATA                0x1FB        // mario_yukata_geo #6
#define MODEL_MARIO_SWIMSUIT              0x1FA        // mario_swimsuit_geo #7
#define MODEL_MARIO_HALLOWEEN             0x1F9        // mario_halloween_geo #8

// Sonic Character Inspired

#define MODEL_MARIO_VANILLA               0x1F8        // mario_vanilla_geo #9
#define MODEL_MARIO_AMY                   0x1F7        // mario_amy_geo #10
#define MODEL_MARIO_MARINE                0x1F6        // mario_marine_geo #11
#define MODEL_MARIO_BLAZE                 0x1F5        // mario_blaze_geo #12
#define MODEL_MARIO_TAILS                 0x1F4        // mario_tails_geo #13
#define MODEL_MARIO_CHARMY                0x1F3        // mario_charmy_geo #14
#define MODEL_MARIO_EGGMAN                0x1F2        // mario_eggman_geo #15
#define MODEL_MARIO_COSMO                 0x1F1        // mario_cosmo_geo #16
#define MODEL_MARIO_TIKAL                 0x1F0        // mario_tikal_geo #17

// Personal Picks

#define MODEL_MARIO_MARIO                 0x1EF        // mario_mario_geo #18
#define MODEL_MARIO_BEAN                  0x1EE        // mario_bean_geo #19
#define MODEL_MARIO_KLONOA                0x1ED        // mario_klonoa_geo #20
#define MODEL_MARIO_LUFFY                 0x1EC        // mario_luffy_geo #21
#define MODEL_MARIO_ICHIBAN               0x1EB        // mario_ichiban_geo #22
#define MODEL_MARIO_GOKU                  0x1EA        // mario_goku_geo #23
#define MODEL_MARIO_TRAVIS                0x1E9        // mario_travis_geo #24
#define MODEL_MARIO_JACK                  0x1E8        // mario_jack_geo #25
#define MODEL_MARIO_AUSTIN                0x1E7        // mario_austin_geo #26
#define MODEL_MARIO_DUDLEY                0x1E6        // mario_dudley_geo #27
#define MODEL_MARIO_ENGIE                 0x1E5        // mario_engie_geo #28
#define MODEL_MARIO_PAN                   0x1E4        // mario_pan_geo #29
#define MODEL_MARIO_ANYA                  0x1E3        // mario_anya_geo #30
#define MODEL_MARIO_ROLL                  0x1E2        // mario_roll_geo #31
#define MODEL_MARIO_MMX                   0x1E1        // mario_mmx_geo #32
#define MODEL_MARIO_LAN                   0x1E0        // mario_lan_geo #33
#define MODEL_MARIO_VIRGIL                0x1DF        // mario_virgil_geo #34
#define MODEL_MARIO_MARIA                 0x1DE        // mario_maria_geo #35
#define MODEL_MARIO_SORA                  0x1DD        // mario_sora_geo #36
#define MODEL_MARIO_YUGI                  0x1DC        // mario_yugi_geo #37
#define MODEL_MARIO_DAWN                  0x1DB        // mario_dawn_geo #38
#define MODEL_MARIO_SERENA                0x1DA        // mario_serena_geo #39
#define MODEL_MARIO_MIKU                  0x1D9        // mario_miku_geo #40
#define MODEL_MARIO_MAGE                  0x1D8        // mario_mage_geo #41
#define MODEL_MARIO_WONDER                0x1D7        // mario_wonder_geo #42
#define MODEL_MARIO_SENA                  0x1D6        // mario_sena_geo #43
#define MODEL_MARIO_TERRY                 0x1D5        // mario_terry_geo #44
#define MODEL_MARIO_VANNY                 0x1D4        // mario_vanny_geo #45
#define MODEL_MARIO_NEZUKO                0x1D3        // mario_nezuko_geo #46
#define MODEL_MARIO_LATINA                0x1D2        // mario_latina_geo #47

// Streamer Thx & Friends

#define MODEL_MARIO_CREAMOCCHIA           0x1D1        // mario_creamocchia_geo #48
#define MODEL_MARIO_CHEF                  0x1D0        // mario_chef_geo #49
#define MODEL_MARIO_VAL                   0x1CF        // mario_val_geo #50
#define MODEL_MARIO_KATE                  0x1CE        // mario_kate_geo #51
#define MODEL_MARIO_BAIT                  0x1CD        // mario_bait_geo #52
#define MODEL_MARIO_WIZ                   0x1CC        // mario_wiz_geo #53
#define MODEL_MARIO_CAROLINE              0x1CB        // mario_caroline_geo #54
#define MODEL_MARIO_MACER                 0x1CA        // mario_macer_geo #55
#define MODEL_MARIO_POCKY                 0x1C9        // mario_pocky_geo #56
#define MODEL_MARIO_SWEET                 0x1C8        // mario_sweet_geo #57
#define MODEL_MARIO_KZ                    0x1C7        // mario_kz_geo #58
#define MODEL_MARIO_DOT                   0x1C6        // mario_dot_geo #59
#define MODEL_MARIO_DANI                  0x1C5        // mario_dani_geo #60
#define MODEL_MARIO_JOHNNY                0x1C4        // mario_johnny_geo #61

// BFFs & Me!

#define MODEL_MARIO_KITTEN                0x1C3        // mario_kitten_geo #62
#define MODEL_MARIO_LAYLA                 0x1C2        // mario_layla_geo #63
#define MODEL_MARIO_KATALINA              0x1C1        // mario_katalina_geo #64

// Creamtober Alts

#define MODEL_MARIO_DETECTIVE             0x200        // mario_detective_geo
#define MODEL_MARIO_CARROT                0x201        // mario_carrot_geo
#define MODEL_MARIO_DINA                  0x202        // mario_dina_geo
#define MODEL_MARIO_MADOTSUKI             0x203        // mario_madotsuki_geo
#define MODEL_MARIO_KARIYA                0x204        // mario_kariya_geo
#define MODEL_MARIO_DAISY                 0x205        // mario_daisy_geo
#define MODEL_MARIO_MAGENTA               0x206        // mario_magenta_geo
#define MODEL_MARIO_CACEE                 0x207        // mario_cacee_geo
#define MODEL_MARIO_LUKE                  0x208        // mario_luke_geo
#define MODEL_MARIO_GOEMON                0x209        // mario_goemon_geo
#define MODEL_MARIO_RIBBON                0x20A        // mario_ribbon_geo
#define MODEL_MARIO_PRINCESS              0x20B        // mario_princess_geo
#define MODEL_MARIO_CREAM                 0x20C        // mario_cream_geo
#define MODEL_MARIO_NIGHTS                0x20D        // mario_avgn_geo
#define MODEL_MARIO_PARAPPA               0x20E        // mario_parappa_geo
#define MODEL_MARIO_KAIRI                 0x20F        // mario_kairi_geo
#define MODEL_MARIO_SILVER                0x210        // mario_silver_geo
#define MODEL_MARIO_MIMI                  0x211        // mario_mimi_geo
#define MODEL_MARIO_SAITAMA               0x212        // mario_saitama_geo
#define MODEL_MARIO_LILY                  0x213        // mario_lily_geo
#define MODEL_MARIO_DQHERO                0x214        // mario_dqhero_geo
#define MODEL_MARIO_PASTEL                0x215        // mario_pastel_geo
#define MODEL_MARIO_CHARLOTTE             0x216        // mario_charlotte_geo
#define MODEL_MARIO_SAKURA                0x217        // mario_sakura_geo
#define MODEL_MARIO_TAMMIE                0x218        // mario_tammie_geo
#define MODEL_MARIO_PEPPINO               0x219        // mario_peppino_geo
#define MODEL_MARIO_JUNIHITOE             0x21A        // mario_junihitoe_geo
#define MODEL_MARIO_POMNI                 0x21B        // mario_pomni_geo
#define MODEL_MARIO_OLIMAR                0x21C        // mario_olimar_geo
#define MODEL_MARIO_PIT                   0x21D        // mario_pit_geo
#define MODEL_MARIO_RICHTER               0x21E        // mario_richter_geo

// Remaining alt slots to reach 100 (subject to change)

#define MODEL_MARIO_SHADOW                0x21F        // mario_shadow_geo
#define MODEL_MARIO_AVGN                  0x220        // mario_avgn_geo
#define MODEL_MARIO_RUKIA                 0x221        // mario_rukia_geo
#define MODEL_MARIO_LUNAR                 0x222        // mario_lunar_geo
#define MODEL_MARIO_SYBIL                 0x223        // mario_sybil_geo
#define MODEL_MARIO_OUENDAN               0x264        // mario_ouendan_geo
#define MODEL_MARIO_DRUMMER               0x268        // mario_drummer_geo
#define MODEL_MARIO_CRESCENTFOX           0x26C        // mario_crescentfox_geo
#define MODEL_MARIO_ARLE                  0x26F        // mario_arle_geo
#define MODEL_MARIO_SFSAKURA              0x272        // mario_sfsakura_geo

// -- Cheese Alts --

// Official Outfits

#define MODEL_CHEESE_FOLLOW_RIDERS        0x1C0       // cheese_follow_riders_geo #2
#define MODEL_CHEESE_FOLLOW_WINTER        0x1BF       // cheese_follow_winter_geo #3
#define MODEL_CHEESE_FOLLOW_SPRING        0x1BE       // cheese_follow_spring_geo #4
#define MODEL_CHEESE_FOLLOW_UNICORN       0x1BD       // cheese_follow_unicorn_geo #5
#define MODEL_CHEESE_FOLLOW_YUKATA        0x1BC       // cheese_follow_yukata_geo #6
#define MODEL_CHEESE_FOLLOW_SWIMSUIT      0x1BB       // cheese_follow_swimsuit_geo #7
#define MODEL_CHEESE_FOLLOW_HALLOWEEN     0x1BA       // cheese_follow_halloween_geo #8

// Sonic Character Inspired 

#define MODEL_CHEESE_FOLLOW_CHOCOLA       0x1B9       // cheese_follow_chocola_geo #9
#define MODEL_CHEESE_FOLLOW_AMY           0x1B8       // cheese_follow_amy_geo #10
#define MODEL_CHEESE_FOLLOW_MARINE        0x1B7       // cheese_follow_marine_geo #11
#define MODEL_CHEESE_FOLLOW_BLAZE         0x1B6       // cheese_follow_blaze_geo #12
#define MODEL_CHEESE_FOLLOW_TAILS         0x1B5       // cheese_follow_tails_geo #13
#define MODEL_CHEESE_FOLLOW_CHARMY        0x1B4       // cheese_follow_charmy_geo #14
#define MODEL_CHEESE_FOLLOW_EGGMAN        0x1B3       // cheese_follow_eggman_geo #15
#define MODEL_CHEESE_FOLLOW_COSMO         0x1B2       // cheese_follow_cosmo_geo #16
#define MODEL_CHEESE_FOLLOW_TIKAL         0x1B1       // cheese_follow_tikal_geo #17

// Personal Picks

#define MODEL_CHEESE_FOLLOW_MARIO         0x1B0       // cheese_follow_mario_geo #18
#define MODEL_CHEESE_FOLLOW_BEAN          0x1AF       // cheese_follow_bean_geo #19
#define MODEL_CHEESE_FOLLOW_KLONOA        0x1AE       // cheese_follow_klonoa_geo #20
#define MODEL_CHEESE_FOLLOW_LUFFY         0x1AD       // cheese_follow_luffy_geo #21
#define MODEL_CHEESE_FOLLOW_ICHIBAN       0x1AC       // cheese_follow_ichiban_geo #22
#define MODEL_CHEESE_FOLLOW_GOKU          0x1AB       // cheese_follow_goku_geo #23
#define MODEL_CHEESE_FOLLOW_TRAVIS        0x1AA       // cheese_follow_travis_geo #24
#define MODEL_CHEESE_FOLLOW_JACK          0x1A9       // cheese_follow_jack_geo #25
#define MODEL_CHEESE_FOLLOW_AUSTIN        0x1A8       // cheese_follow_austin_geo #26
#define MODEL_CHEESE_FOLLOW_DUDLEY        0x1A7       // cheese_follow_dudley_geo #27
#define MODEL_CHEESE_FOLLOW_ENGIE         0x1A6       // cheese_follow_engie_geo #28
#define MODEL_CHEESE_FOLLOW_PAN           0x1A5       // cheese_follow_pan_geo #29
#define MODEL_CHEESE_FOLLOW_ANYA          0x1A4       // cheese_follow_anya_geo #30
#define MODEL_CHEESE_FOLLOW_ROLL          0x1A3       // cheese_follow_marina_geo #31
#define MODEL_CHEESE_FOLLOW_MMX           0x1A2       // cheese_follow_mmx_geo #32
#define MODEL_CHEESE_FOLLOW_LAN           0x1A1       // cheese_follow_lan_geo #33
#define MODEL_CHEESE_FOLLOW_VIRGIL        0x1A0       // cheese_follow_virgil_geo #34
#define MODEL_CHEESE_FOLLOW_MARIA         0x19F       // cheese_follow_maria_geo #35
#define MODEL_CHEESE_FOLLOW_SORA          0x19E       // cheese_follow_sora_geo #36
#define MODEL_CHEESE_FOLLOW_YUGI          0x19D       // cheese_follow_yugi_geo #37
#define MODEL_CHEESE_FOLLOW_DAWN          0x19C       // cheese_follow_dawn_geo #38
#define MODEL_CHEESE_FOLLOW_SERENA        0x19B       // cheese_follow_serena_geo #39
#define MODEL_CHEESE_FOLLOW_MIKU          0x19A       // cheese_follow_miku_geo #40
#define MODEL_CHEESE_FOLLOW_MAGE          0x199       // cheese_follow_mage_geo #41
#define MODEL_CHEESE_FOLLOW_WONDER        0x198       // cheese_follow_wonder_geo #42
#define MODEL_CHEESE_FOLLOW_SENA          0x197       // cheese_follow_sena_geo #43
#define MODEL_CHEESE_FOLLOW_TERRY         0x196       // cheese_follow_terry_geo #44
#define MODEL_CHEESE_FOLLOW_VANNY         0x195       // cheese_follow_vanny_geo #45
#define MODEL_CHEESE_FOLLOW_NEZUKO        0x194       // cheese_follow_nezuko_geo #46
#define MODEL_CHEESE_FOLLOW_LATINA        0x193       // cheese_follow_latina_geo #47

// Streamer Thx & Friends 

#define MODEL_CHEESE_FOLLOW_CREAMOCCHIA   0x192       // cheese_follow_creamocchia_geo #48
#define MODEL_CHEESE_FOLLOW_CHEF          0x191       // cheese_follow_chef_geo #49
#define MODEL_CHEESE_FOLLOW_VAL           0x190       // cheese_follow_val_geo #50
#define MODEL_CHEESE_FOLLOW_KATE          0x18F       // cheese_follow_kate_geo #51
#define MODEL_CHEESE_FOLLOW_BAIT          0x18E       // cheese_follow_bait_geo #52
#define MODEL_CHEESE_FOLLOW_WIZ           0x18D       // cheese_follow_wiz_geo #53
#define MODEL_CHEESE_FOLLOW_MACER         0x18C       // cheese_follow_macer_geo #55
#define MODEL_CHEESE_FOLLOW_POCKY         0x18B       // cheese_follow_pocky_geo #56
#define MODEL_CHEESE_FOLLOW_SWEET         0x18A       // cheese_follow_sweet_geo #57
#define MODEL_CHEESE_FOLLOW_KZ            0x189       // cheese_follow_kz_geo #58
#define MODEL_CHEESE_FOLLOW_DOT           0x188       // cheese_follow_dot_geo #59
#define MODEL_CHEESE_FOLLOW_DANI          0x187       // cheese_follow_dani_geo #60
#define MODEL_CHEESE_FOLLOW_JOHNNY        0x186       // cheese_follow_johnny_geo #61

// BFFs & Me!

#define MODEL_CHEESE_FOLLOW_KITTEN        0x185       // cheese_follow_kitten_geo #62
#define MODEL_CHEESE_FOLLOW_LAYLA         0x184       // cheese_follow_layla_geo #63
#define MODEL_CHEESE_FOLLOW_KATALINA      0x183       // cheese_follow_katalina_geo #64

// Creamtober + Nights

#define MODEL_CHEESE_FOLLOW_DETECTIVE     0x224        // cheese_follow_detective_geo
#define MODEL_CHEESE_FOLLOW_CARROT        0x225        // cheese_follow_carrot_geo
#define MODEL_CHEESE_FOLLOW_DINA          0x226        // cheese_follow_dina_geo
#define MODEL_CHEESE_FOLLOW_MADOTSUKI     0x227        // cheese_follow_madotsuki_geo
#define MODEL_CHEESE_FOLLOW_KARIYA        0x228        // cheese_follow_kariya_geo
#define MODEL_CHEESE_FOLLOW_DAISY         0x229        // cheese_follow_daisy_geo
#define MODEL_CHEESE_FOLLOW_MAGENTA       0x22A        // cheese_follow_magenta_geo
#define MODEL_CHEESE_FOLLOW_CACEE         0x22B        // cheese_follow_cacee_geo
#define MODEL_CHEESE_FOLLOW_LUKE          0x22C        // cheese_follow_luke_geo
#define MODEL_CHEESE_FOLLOW_GOEMON        0x22D        // cheese_follow_goemon_geo
#define MODEL_CHEESE_FOLLOW_RIBBON        0x22E        // cheese_follow_ribbon_geo
#define MODEL_CHEESE_FOLLOW_PRINCESS      0x22F        // cheese_follow_princess_geo
#define MODEL_CHEESE_FOLLOW_CREAM         0x230        // cheese_followcream_geo
#define MODEL_CHEESE_FOLLOW_NIGHTS        0x231        // cheese_follow_nights_geo
#define MODEL_CHEESE_FOLLOW_PARAPPA       0x232        // cheese_follow_parappa_geo
#define MODEL_CHEESE_FOLLOW_KAIRI         0x233        // cheese_follow_kairi_geo
#define MODEL_CHEESE_FOLLOW_SILVER        0x234        // cheese_follow_silver_geo
#define MODEL_CHEESE_FOLLOW_MIMI          0x235        // cheese_follow_mimi_geo
#define MODEL_CHEESE_FOLLOW_SAITAMA       0x236        // cheese_follow_saitama_geo
#define MODEL_CHEESE_FOLLOW_LILY          0x237        // cheese_follow_lily_geo
#define MODEL_CHEESE_FOLLOW_DQHERO        0x238        // cheese_follow_dqhero_geo
#define MODEL_CHEESE_FOLLOW_PASTEL        0x239        // cheese_follow_pastel_geo
#define MODEL_CHEESE_FOLLOW_CHARLOTTE     0x23A        // cheese_follow_charlotte_geo
#define MODEL_CHEESE_FOLLOW_SAKURA        0x23B        // cheese_follow_sakura_geo
#define MODEL_CHEESE_FOLLOW_TAMMIE        0x23C        // cheese_follow_tammie_geo
#define MODEL_CHEESE_FOLLOW_PEPPINO       0x23D        // cheese_follow_peppino_geo
#define MODEL_CHEESE_FOLLOW_JUNIHITOE     0x23E        // cheese_follow_junihitoe_geo
#define MODEL_CHEESE_FOLLOW_POMNI         0x23F        // cheese_follow_pomni_geo
#define MODEL_CHEESE_FOLLOW_OLIMAR        0x240        // cheese_follow_olimar_geo
#define MODEL_CHEESE_FOLLOW_PIT           0x241        // cheese_follow_pit_geo
#define MODEL_CHEESE_FOLLOW_RICHTER       0x242        // cheese_follow_richter_geo

// Remaining alt slots to reach 100 (subject to change)

#define MODEL_CHEESE_FOLLOW_SHADOW        0x243        // cheese_follow_shadow_geo
#define MODEL_CHEESE_FOLLOW_OUENDAN       0x244        // cheese_follow_ouendan_geo
#define MODEL_CHEESE_FOLLOW_RUKIA         0x245        // cheese_follow_rukia_geo
#define MODEL_CHEESE_FOLLOW_LUNAR         0x246        // cheese_follow_lunar_geo
#define MODEL_CHEESE_FOLLOW_SYBIL         0x247        // cheese_follow_sybil_geo
#define MODEL_CHEESE_FOLLOW_AVGN          0x265        // cheese_follow_avgn_geo
#define MODEL_CHEESE_FOLLOW_DRUMMER       0x269        // cheese_follow_drummer_geo
#define MODEL_CHEESE_FOLLOW_CRESCENTFOX   0x26D        // cheese_follow_crescentfox_geo
#define MODEL_CHEESE_FOLLOW_ARLE          0x270        // cheese_follow_arle_geo
#define MODEL_CHEESE_FOLLOW_SFSAKURA      0x273        // cheese_follow_sfsakura_geo
#define MODEL_CHEESE_FOLLOW_HERO          0x275        // cheese_follow_hero_geo

// --Cream Flying Models--

#define MODEL_MARIO_FLY                   0x182        // mario_fly_geo #1

#define MODEL_MARIO_RIDERS_FLY            0x181        // mario_riders_fly_geo #2
#define MODEL_MARIO_WINTER_FLY            0x180        // mario_winter_fly_geo #3
#define MODEL_MARIO_SPRING_FLY            0x17F        // mario_spring_fly_geo #4
#define MODEL_MARIO_UNICORN_FLY           0x17E        // mario_unicorn_fly_geo #5
#define MODEL_MARIO_YUKATA_FLY            0x17D        // mario_yukata_fly_geo #6
#define MODEL_MARIO_SWIMSUIT_FLY          0x17C        // mario_swimsuit_fly_geo #7
#define MODEL_MARIO_HALLOWEEN_FLY         0x17B        // mario_halloween_fly_geo #8

#define MODEL_MARIO_VANILLA_FLY           0x17A        // mario_vanilla_fly_geo #9
#define MODEL_MARIO_AMY_FLY               0x179        // mario_amy_fly_geo #10
#define MODEL_MARIO_MARINE_FLY            0x178        // mario_marine_fly_geo #11
#define MODEL_MARIO_BLAZE_FLY             0x177        // mario_blaze_fly_geo #12
#define MODEL_MARIO_EGGMAN_FLY            0x176        // mario_eggman_fly_geo #15
#define MODEL_MARIO_COSMO_FLY             0x175        // mario_cosmo_fly_geo #16
#define MODEL_MARIO_TIKAL_FLY             0x174        // mario_tikal_fly_geo #17

#define MODEL_MARIO_BEAN_FLY              0x173        // mario_bean_fly_geo #18
#define MODEL_MARIO_ICHIBAN_FLY           0x172        // mario_ichiban_fly_geo #22
#define MODEL_MARIO_GOKU_FLY              0x171        // mario_goku_fly_geo #23
#define MODEL_MARIO_TRAVIS_FLY            0x170        // mario_travis_fly_geo #24
#define MODEL_MARIO_JACK_FLY              0x16F        // mario_jack_fly_geo #25
#define MODEL_MARIO_AUSTIN_FLY            0x16E        // mario_austin_fly_geo #26
#define MODEL_MARIO_DUDLEY_FLY            0x16D        // mario_dudley_fly_geo #27
#define MODEL_MARIO_PAN_FLY               0x16B        // mario_pan_fly_geo #29
#define MODEL_MARIO_ANYA_FLY              0x16A        // mario_anya_fly_geo #30
#define MODEL_MARIO_ROLL_FLY              0x169        // mario_lan_fly_geo #31
#define MODEL_MARIO_LAN_FLY               0x168        // mario_lan_fly_geo #33
#define MODEL_MARIO_VIRGIL_FLY            0x167        // mario_virgil_fly_geo #34
#define MODEL_MARIO_MARIA_FLY             0x166        // mario_maria_fly_geo #35
#define MODEL_MARIO_SORA_FLY              0x165        // mario_sora_fly_geo #36
#define MODEL_MARIO_YUGI_FLY              0x164        // mario_yugi_fly_geo #37
#define MODEL_MARIO_MIKU_FLY              0x163        // mario_miku_fly_geo #40
#define MODEL_MARIO_MAGE_FLY              0x162        // mario_mage_fly_geo #41
#define MODEL_MARIO_WONDER_FLY            0x161        // mario_wonder_fly_geo #42
#define MODEL_MARIO_SENA_FLY              0x160        // mario_sena_fly_geo #43
#define MODEL_MARIO_ROGER_FLY             0x15F        // mario_rider_fly_geo #44
#define MODEL_MARIO_VANNY_FLY             0x15E        // mario_vanny_fly_geo #45
#define MODEL_MARIO_NEZUKO_FLY            0x15D        // mario_nezuko_fly_geo #46
#define MODEL_MARIO_LATINA_FLY            0x15C        // mario_latina_fly_geo #47

#define MODEL_MARIO_CHEF_FLY              0x15B        // mario_chef_fly_geo #49
#define MODEL_MARIO_KATE_FLY              0x15A        // mario_kate_fly_geo #51
#define MODEL_MARIO_WIZ_FLY               0x159        // mario_wiz_fly_geo #53
#define MODEL_MARIO_CAROLINE_FLY          0x158        // mario_caroline_fly_geo #54
#define MODEL_MARIO_MACER_FLY             0x157        // mario_macer_fly_geo #55
#define MODEL_MARIO_POCKY_FLY             0x156        // mario_pocky_fly_geo #56
#define MODEL_MARIO_SWEET_FLY             0x155        // mario_sweet_fly_geo #57
#define MODEL_MARIO_KZ_FLY                0x154        // mario_kz_fly_geo #58
#define MODEL_MARIO_DANI_FLY              0x153        // mario_dani_fly_geo #60
#define MODEL_MARIO_JOHNNY_FLY            0x152        // mario_johnny_fly_geo #61

// Creamtober Alts

#define MODEL_MARIO_DETECTIVE_FLY         0x248        // mario_detective_fly_geo
#define MODEL_MARIO_CARROT_FLY            0x249        // mario_carrot_fly_geo
#define MODEL_MARIO_MADOTSUKI_FLY         0x24A        // mario_madotsuki_fly_geo
#define MODEL_MARIO_KARIYA_FLY            0x24B        // mario_kariya_fly_geo
#define MODEL_MARIO_DAISY_FLY             0x24C        // mario_daisy_fly_geo
#define MODEL_MARIO_MAGENTA_FLY           0x24D        // mario_magenta_fly_geo
#define MODEL_MARIO_GOEMON_FLY            0x24E        // mario_goemon_fly_geo
#define MODEL_MARIO_RIBBON_FLY            0x24F        // mario_ribbon_fly_geo
#define MODEL_MARIO_PRINCESS_FLY          0x250        // mario_princess_fly_geo
#define MODEL_MARIO_CREAM_FLY             0x251        // mario_cream_fly_geo
#define MODEL_MARIO_NIGHTS_FLY            0x252        // mario_nights_fly_geo
#define MODEL_MARIO_KAIRI_FLY             0x253        // mario_kairi_fly_geo
#define MODEL_MARIO_MIMI_FLY              0x254        // mario_mimi_fly_geo
#define MODEL_MARIO_SAITAMA_FLY           0x255        // mario_saitama_fly_geo
#define MODEL_MARIO_LILY_FLY              0x256        // mario_lily_fly_geo
#define MODEL_MARIO_DQHERO_FLY            0x257        // mario_dqhero_fly_geo
#define MODEL_MARIO_PASTEL_FLY            0x258        // mario_pastel_fly_geo
#define MODEL_MARIO_CHARLOTTE_FLY         0x259        // mario_charlotte_fly_geo
#define MODEL_MARIO_SAKURA_FLY            0x25A        // mario_sakura_fly_geo
#define MODEL_MARIO_TAMMIE_FLY            0x25B        // mario_tammie_fly_geo
#define MODEL_MARIO_PEPPINO_FLY           0x25C        // mario_peppino_fly_geo
#define MODEL_MARIO_JUNIHITOE_FLY         0x25D        // mario_junihitoe_fly_geo
#define MODEL_MARIO_PIT_FLY               0x25E        // mario_pit_fly_geo
#define MODEL_MARIO_RICHTER_FLY           0x25F        // mario_richter_fly_geo

// Remaining alt slots to reach 100 (subject to change)

#define MODEL_MARIO_AVGN_FLY              0x260        // mario_avgn_fly_geo
#define MODEL_MARIO_RUKIA_FLY             0x261        // mario_rukia_fly_geo
#define MODEL_MARIO_LUNAR_FLY             0x262        // mario_lunar_fly_geo
#define MODEL_MARIO_SYBIL_FLY             0x263        // mario_sybil_fly_geo
#define MODEL_MARIO_OUENDAN_FLY           0x266        // mario_ouendan_fly_geo
#define MODEL_MARIO_LUKE_FLY              0x267        // mario_luke_fly_geo
#define MODEL_MARIO_DRUMMER_FLY           0x26A        // mario_drummer_fly_geo
#define MODEL_MARIO_SILVER_FLY            0x26B        // mario_silver_fly_geo
#define MODEL_MARIO_CRESCENTFOX_FLY       0x26E        // mario_crescentfox_fly_geo
#define MODEL_MARIO_ARLE_FLY              0x271        // mario_arle_fly_geo
#define MODEL_MARIO_SFSAKURA_FLY          0x274        // mario_sfsakura_fly_geo

// Additional NPCs

#define MODEL_FLOOMBA                     0xFF         // floomba_geo

#define MODEL_LAYLA                       0xFE         // layla_geo
#define MODEL_AMY                         0xFD         // amy_geo
#define MODEL_WISP1                       0xFC         // wisp1_geo
//#define MODEL_WISP2                       0xEA         // wisp2_geo
#define MODEL_BLAZE                       0xFB         // blaze_geo
#define MODEL_MARINE                      0xFA         // marine_geo
#define MODEL_TAILS_C1                    0xF9         // tails_c1_geo
#define MODEL_WARPRING                    0xF8         // warpring_geo
#define MODEL_GOOMBA_CREM                 0xF7        // goomba_crem_geo


// Fish Models

#define MODEL_FISH_BAIT                   0xF6        // bait_fish_geo
#define MODEL_FISH_BAIT2                  0xF5        // bait_fish2_geo
#define MODEL_FISH_BAIT3                  0xF4        // bait_fish3_geo

/* Various static level geometry, the geo layout differs but terrain object presets treat them the same.*/

#define MODEL_LEVEL_GEOMETRY_03                0x03
#define MODEL_LEVEL_GEOMETRY_04                0x04
#define MODEL_LEVEL_GEOMETRY_05                0x05
#define MODEL_LEVEL_GEOMETRY_06                0x06
#define MODEL_LEVEL_GEOMETRY_07                0x07
#define MODEL_LEVEL_GEOMETRY_08                0x08
#define MODEL_LEVEL_GEOMETRY_09                0x09
#define MODEL_LEVEL_GEOMETRY_0A                0x0A
#define MODEL_LEVEL_GEOMETRY_0B                0x0B
#define MODEL_LEVEL_GEOMETRY_0C                0x0C
#define MODEL_LEVEL_GEOMETRY_0D                0x0D
#define MODEL_LEVEL_GEOMETRY_0E                0x0E
#define MODEL_LEVEL_GEOMETRY_0F                0x0F
#define MODEL_LEVEL_GEOMETRY_10                0x10
#define MODEL_LEVEL_GEOMETRY_11                0x11
#define MODEL_LEVEL_GEOMETRY_12                0x12
#define MODEL_LEVEL_GEOMETRY_13                0x13
#define MODEL_LEVEL_GEOMETRY_14                0x14
#define MODEL_LEVEL_GEOMETRY_15                0x15
#define MODEL_LEVEL_GEOMETRY_16                0x16

#define MODEL_BOB_BUBBLY_TREE                  0x17        // bubbly_tree_geo
#define MODEL_WDW_BUBBLY_TREE                  0x17        // bubbly_tree_geo
#define MODEL_CASTLE_GROUNDS_BUBBLY_TREE       0x17        // bubbly_tree_geo
#define MODEL_WF_BUBBLY_TREE                   0x17        // bubbly_tree_geo
#define MODEL_THI_BUBBLY_TREE                  0x17        // bubbly_tree_geo
#define MODEL_COURTYARD_SPIKY_TREE             0x18        // spiky_tree_geo
#define MODEL_CCM_SNOW_TREE                    0x19        // snow_tree_geo
#define MODEL_SL_SNOW_TREE                     0x19        // snow_tree_geo
#define MODEL_UNKNOWN_TREE_1A                  0x1A        // referenced in special presets, undefined
#define MODEL_SSL_PALM_TREE                    0x1B        // palm_tree_geo
#define MODEL_CASTLE_CASTLE_DOOR_UNUSED        0x1C        // castle_door_geo - unused, original id
#define MODEL_CASTLE_WOODEN_DOOR_UNUSED        0x1D        // wooden_door_geo - unused, original id
#define MODEL_BBH_HAUNTED_DOOR                 0x1D        // haunted_door_geo
#define MODEL_HMC_WOODEN_DOOR                  0x1D        // wooden_door_geo
#define MODEL_UNKNOWN_DOOR_1E                  0x1E        // referenced in special presets, undefined
#define MODEL_HMC_METAL_DOOR                   0x1F        // metal_door_geo
#define MODEL_HMC_HAZY_MAZE_DOOR               0x20        // hazy_maze_door_geo
#define MODEL_UNKNOWN_DOOR_21                  0x21        // referenced in special presets, undefined
#define MODEL_CASTLE_DOOR_0_STARS              0x22        // castle_door_0_star_geo
#define MODEL_CASTLE_DOOR_1_STAR               0x23        // castle_door_1_star_geo
#define MODEL_CASTLE_DOOR_3_STARS              0x24        // castle_door_3_stars_geo
#define MODEL_CASTLE_KEY_DOOR                  0x25        // key_door_geo
#define MODEL_CASTLE_CASTLE_DOOR               0x26        // castle_door_geo - used duplicate
#define MODEL_CASTLE_GROUNDS_CASTLE_DOOR       0x26        // castle_door_geo - used duplicate
#define MODEL_CASTLE_WOODEN_DOOR               0x27        // wooden_door_geo
#define MODEL_COURTYARD_WOODEN_DOOR            0x27        // wooden_door_geo
#define MODEL_CCM_CABIN_DOOR                   0x27        // cabin_door_geo
#define MODEL_UNKNOWN_DOOR_28                  0x28        // referenced in special presets, undefined
#define MODEL_CASTLE_METAL_DOOR                0x29        // metal_door_geo
#define MODEL_CASTLE_GROUNDS_METAL_DOOR        0x29        // metal_door_geo
#define MODEL_UNKNOWN_DOOR_2A                  0x2A        // referenced in special presets, undefined
#define MODEL_UNKNOWN_DOOR_2B                  0x2B        // referenced in special presets, undefined
// Model 0x2C-0x2F were WF model so they were moved to 0x3B-0x3E

// Level model IDs

// bbh
#define MODEL_BBH_STAIRCASE_STEP               0x35        // geo_bbh_0005B0
#define MODEL_BBH_TILTING_FLOOR_PLATFORM       0x36        // geo_bbh_0005C8
#define MODEL_BBH_TUMBLING_PLATFORM            0x37        // geo_bbh_0005E0
#define MODEL_BBH_TUMBLING_PLATFORM_PART       0x38        // geo_bbh_0005F8
#define MODEL_BBH_MOVING_BOOKSHELF             0x39        // geo_bbh_000610
#define MODEL_BBH_MESH_ELEVATOR                0x3A        // geo_bbh_000628
#define MODEL_BBH_MERRY_GO_ROUND               0x3B        // geo_bbh_000640
#define MODEL_BBH_WOODEN_TOMB                  0x3C        // geo_bbh_000658

// ccm
#define MODEL_CCM_ROPEWAY_LIFT                 0x36        // ccm_geo_0003D0
#define MODEL_CCM_SNOWMAN_HEAD                 0x37        // ccm_geo_00040C

// castle
#define MODEL_CASTLE_BOWSER_TRAP               0x35        // castle_geo_000F18
#define MODEL_CASTLE_WATER_LEVEL_PILLAR        0x36        // castle_geo_001940
#define MODEL_CASTLE_CLOCK_MINUTE_HAND         0x37        // castle_geo_001530
#define MODEL_CASTLE_CLOCK_HOUR_HAND           0x38        // castle_geo_001548
#define MODEL_CASTLE_CLOCK_PENDULUM            0x39        // castle_geo_001518
#define MODEL_SIGNPOST_ARTIST                  0x3A        // signpost_artist_geo

// hmc
#define MODEL_HMC_METAL_PLATFORM               0x36        // hmc_geo_0005A0
#define MODEL_HMC_METAL_ARROW_PLATFORM         0x37        // hmc_geo_0005B8
#define MODEL_HMC_ELEVATOR_PLATFORM            0x38        // hmc_geo_0005D0
#define MODEL_HMC_ROLLING_ROCK                 0x39        // hmc_geo_000548
#define MODEL_HMC_ROCK_PIECE                   0x3A        // hmc_geo_000570 - unused
#define MODEL_HMC_ROCK_SMALL_PIECE             0x3B        // hmc_geo_000588 - unused
#define MODEL_HMC_RED_GRILLS                   0x3C        // hmc_geo_000530

// ssl
#define MODEL_SSL_PYRAMID_TOP                  0x3A        // ssl_geo_000618
#define MODEL_SSL_GRINDEL                      0x36        // ssl_geo_000734
#define MODEL_SSL_SPINDEL                      0x37        // ssl_geo_000764
#define MODEL_SSL_MOVING_PYRAMID_WALL          0x38        // ssl_geo_000794
#define MODEL_SSL_PYRAMID_ELEVATOR             0x39        // ssl_geo_0007AC

// bob
#define MODEL_BOB_CHAIN_CHOMP_GATE             0x36        // bob_geo_000440
#define MODEL_BOB_SEESAW_PLATFORM              0x37        // bob_geo_000458
#define MODEL_BOB_BARS_GRILLS                  0x38        // bob_geo_000470
#define MODEL_KITTEN                           0x39        // kitten_geo

// sl
#define MODEL_SL_SNOW_TRIANGLE                 0x36        // sl_geo_000390
#define MODEL_SL_CRACKED_ICE                   0x37        // sl_geo_000360 - unused
#define MODEL_SL_CRACKED_ICE_CHUNK             0x38        // sl_geo_000378 - unused

// wdw
#define MODEL_WDW_SQUARE_FLOATING_PLATFORM        0x36        // wdw_geo_000580
#define MODEL_WDW_ARROW_LIFT                      0x37        // wdw_geo_000598
#define MODEL_WDW_WATER_LEVEL_DIAMOND             0x38        // wdw_geo_0005C0
#define MODEL_WDW_HIDDEN_PLATFORM                 0x39        // wdw_geo_0005E8
#define MODEL_WDW_EXPRESS_ELEVATOR                0x3A        // wdw_geo_000610
#define MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM   0x3B        // wdw_geo_000628
#define MODEL_WDW_ROTATING_PLATFORM               0x3C        // wdw_geo_000640

// jrb
#define MODEL_JRB_SHIP_LEFT_HALF_PART             0x35        // jrb_geo_000978
#define MODEL_JRB_SHIP_BACK_LEFT_PART             0x36        // jrb_geo_0009B0
#define MODEL_JRB_SHIP_RIGHT_HALF_PART            0x37        // jrb_geo_0009E8
#define MODEL_JRB_SHIP_BACK_RIGHT_PART            0x38        // jrb_geo_000A00
#define MODEL_JRB_SUNKEN_SHIP                     0x39        // jrb_geo_000990
#define MODEL_JRB_SUNKEN_SHIP_BACK                0x3A        // jrb_geo_0009C8
#define MODEL_JRB_ROCK                            0x3B        // jrb_geo_000930
#define MODEL_JRB_SLIDING_BOX                     0x3C        // jrb_geo_000960
#define MODEL_JRB_FALLING_PILLAR                  0x3D        // jrb_geo_000900
#define MODEL_JRB_FALLING_PILLAR_BASE             0x3E        // jrb_geo_000918
#define MODEL_JRB_FLOATING_PLATFORM               0x3F        // jrb_geo_000948

// thi
#define MODEL_THI_HUGE_ISLAND_TOP                 0x36        // thi_geo_0005B0
#define MODEL_THI_TINY_ISLAND_TOP                 0x37        // thi_geo_0005C8
#define MODEL_TAILSRACE                           0x38        // tailsrace_geo
#define MODEL_TAILSFLAG                           0x39        // tailsflag_geo

// ttc
#define MODEL_TTC_ROTATING_CUBE                   0x36        // ttc_geo_000240
#define MODEL_TTC_ROTATING_PRISM                  0x37        // ttc_geo_000258
#define MODEL_TTC_PENDULUM                        0x38        // ttc_geo_000270
#define MODEL_TTC_LARGE_TREADMILL                 0x39        // ttc_geo_000288
#define MODEL_TTC_SMALL_TREADMILL                 0x3A        // ttc_geo_0002A8
#define MODEL_TTC_PUSH_BLOCK                      0x3B        // ttc_geo_0002C8
#define MODEL_TTC_ROTATING_HEXAGON                0x3C        // ttc_geo_0002E0
#define MODEL_TTC_ROTATING_TRIANGLE               0x3D        // ttc_geo_0002F8
#define MODEL_TTC_PIT_BLOCK                       0x3E        // ttc_geo_000310 - has 2 vertical stripes
#define MODEL_TTC_PIT_BLOCK_UNUSED                0x3F        // ttc_geo_000328 - has 3 vertical stripes, unused
#define MODEL_TTC_ELEVATOR_PLATFORM               0x40        // ttc_geo_000340
#define MODEL_TTC_CLOCK_HAND                      0x41        // ttc_geo_000358
#define MODEL_TTC_SPINNER                         0x42        // ttc_geo_000370
#define MODEL_TTC_SMALL_GEAR                      0x43        // ttc_geo_000388
#define MODEL_TTC_LARGE_GEAR                      0x44        // ttc_geo_0003A0

// rr
#define MODEL_RR_SLIDING_PLATFORM                 0x36        // rr_geo_0008C0
#define MODEL_RR_FLYING_CARPET                    0x37        // rr_geo_000848
#define MODEL_RR_OCTAGONAL_PLATFORM               0x38        // rr_geo_0008A8
#define MODEL_RR_ROTATING_BRIDGE_PLATFORM         0x39        // rr_geo_000878
#define MODEL_RR_TRIANGLE_PLATFORM                0x3A        // rr_geo_0008D8 - unused
#define MODEL_RR_CRUISER_WING                     0x3B        // rr_geo_000890
#define MODEL_RR_SEESAW_PLATFORM                  0x3C        // rr_geo_000908
#define MODEL_RR_L_SHAPED_PLATFORM                0x3D        // rr_geo_000940 - unused
#define MODEL_RR_SWINGING_PLATFORM                0x3E        // rr_geo_000860
#define MODEL_RR_DONUT_PLATFORM                   0x3F        // rr_geo_000920
#define MODEL_RR_ELEVATOR_PLATFORM                0x40        // rr_geo_0008F0
#define MODEL_RR_TRICKY_TRIANGLES                 0x41        // rr_geo_000958
#define MODEL_RR_TRICKY_TRIANGLES_FRAME1          0x42        // rr_geo_000970
#define MODEL_RR_TRICKY_TRIANGLES_FRAME2          0x43        // rr_geo_000988
#define MODEL_RR_TRICKY_TRIANGLES_FRAME3          0x44        // rr_geo_0009A0
#define MODEL_RR_TRICKY_TRIANGLES_FRAME4          0x45        // rr_geo_0009B8

// castle inside
#define MODEL_BAIT                                0x36        // bait_geo
#define MODEL_LURK                                0x37        // lurk_geo
#define MODEL_BUMP                                0x38        // bump_geo
#define MODEL_SAGE                                0x39        // sage_geo
#define MODEL_GOOMBA_MARINE                       0x3A        // goomba_marine_geo
#define MODEL_TOAD_NORMAL                         0x3B        // toad_normal_geo
#define MODEL_SIGNPOST_DEV                        0x3C        // signpost_dev_geo

// bitdw
#define MODEL_BITDW_SQUARE_PLATFORM               0x36        // geo_bitdw_000558
#define MODEL_BITDW_SEESAW_PLATFORM               0x37        // geo_bitdw_000540
#define MODEL_BITDW_SLIDING_PLATFORM              0x38        // geo_bitdw_000528
#define MODEL_BITDW_FERRIS_WHEEL_AXLE             0x39        // geo_bitdw_000570
#define MODEL_BITDW_BLUE_PLATFORM                 0x3A        // geo_bitdw_000588
#define MODEL_BITDW_STAIRCASE_FRAME4              0x3B        // geo_bitdw_0005A0
#define MODEL_BITDW_STAIRCASE_FRAME3              0x3C        // geo_bitdw_0005B8
#define MODEL_BITDW_STAIRCASE_FRAME2              0x3D        // geo_bitdw_0005D0
#define MODEL_BITDW_STAIRCASE_FRAME1              0x3E        // geo_bitdw_0005E8
#define MODEL_BITDW_STAIRCASE                     0x3F        // geo_bitdw_000600

// vcutm
#define MODEL_VCUTM_SEESAW_PLATFORM               0x36        // vcutm_geo_0001F0
#define MODEL_CAROUSEL                            0X37        // carousel_geo
#define MODEL_JACK                                0X38        // jack_geo
#define MODEL_KITTEN_LAYLA                        0X39        // kitten_layla_geo
#define MODEL_SWEET                               0x3A        // sweet_geo
#define MODEL_HOCUS                               0x3B        // hocus_geo

// bitfs
#define MODEL_BITFS_PLATFORM_ON_TRACK             0x36        // bitfs_geo_000758
#define MODEL_BITFS_TILTING_SQUARE_PLATFORM       0x37        // bitfs_geo_0006C0
#define MODEL_BITFS_SINKING_PLATFORMS             0x38        // bitfs_geo_000770
#define MODEL_BITFS_BLUE_POLE                     0x39        // bitfs_geo_0006A8
#define MODEL_BITFS_SINKING_CAGE_PLATFORM         0x3A        // bitfs_geo_000690
#define MODEL_BITFS_ELEVATOR                      0x3B        // bitfs_geo_000678
#define MODEL_BITFS_STRETCHING_PLATFORMS          0x3C        // bitfs_geo_000708
#define MODEL_BITFS_SEESAW_PLATFORM               0x3D        // bitfs_geo_000788
#define MODEL_BITFS_MOVING_SQUARE_PLATFORM        0x3E        // bitfs_geo_000728
#define MODEL_BITFS_SLIDING_PLATFORM              0x3F        // bitfs_geo_000740
#define MODEL_BITFS_TUMBLING_PLATFORM_PART        0x40        // bitfs_geo_0006D8
#define MODEL_BITFS_TUMBLING_PLATFORM             0x41        // bitfs_geo_0006F0

// sa

#define MODEL_GARDEVOIR                           0x36        // gardevoir_geo
#define MODEL_POCKY                               0x37        // pocky_geo
#define MODEL_TREE_MS                             0x38        // ms_tree_geo
#define MODEL_SORBET                              0x39        // sorbet_geo
#define MODEL_GREMLIN                             0x3A        // gremlin_geo
#define MODEL_KZ_NEKOARC                          0x3B        // kz_nekoarc_geo
#define MODEL_SIMPLE                              0x3C        // simple_geo
#define MODEL_TREE_MS_NM                          0x3D        // ms_tree_nm_geo
#define MODEL_GREMLIN_NM                          0x3E        // gremlin_nm_geo
#define MODEL_SCUTTLEBUG_NM                       0x3F        // scuttlebug_nm_geo

// bits
#define MODEL_BITS_SLIDING_PLATFORM               0x36        // bits_geo_0005E0
#define MODEL_BITS_TWIN_SLIDING_PLATFORMS         0x37        // bits_geo_0005F8
#define MODEL_BITS_OCTAGONAL_PLATFORM             0x39        // bits_geo_000610
#define MODEL_BITS_BLUE_PLATFORM                  0x3C        // bits_geo_000628
#define MODEL_BITS_FERRIS_WHEEL_AXLE              0x3D        // bits_geo_000640
#define MODEL_BITS_ARROW_PLATFORM                 0x3E        // bits_geo_000658
#define MODEL_BITS_SEESAW_PLATFORM                0x3F        // bits_geo_000670
#define MODEL_BITS_TILTING_W_PLATFORM             0x40        // bits_geo_000688
#define MODEL_BITS_STAIRCASE                      0x41        // bits_geo_0006A0
#define MODEL_BITS_STAIRCASE_FRAME1               0x42        // bits_geo_0006B8
#define MODEL_BITS_STAIRCASE_FRAME2               0x43        // bits_geo_0006D0
#define MODEL_BITS_STAIRCASE_FRAME3               0x44        // bits_geo_0006E8
#define MODEL_BITS_STAIRCASE_FRAME4               0x45        // bits_geo_000700
#define MODEL_BITS_WARP_PIPE                      0x49        // warp_pipe_geo

// lll
#define MODEL_LLL_DRAWBRIDGE_PART                 0x38        // lll_geo_000B20
#define MODEL_LLL_ROTATING_BLOCK_FIRE_BARS        0x3A        // lll_geo_000B38
#define MODEL_LLL_ROTATING_HEXAGONAL_RING         0x3E        // lll_geo_000BB0
#define MODEL_LLL_SINKING_RECTANGULAR_PLATFORM    0x3F        // lll_geo_000BC8
#define MODEL_LLL_SINKING_SQUARE_PLATFORMS        0x40        // lll_geo_000BE0
#define MODEL_LLL_TILTING_SQUARE_PLATFORM         0x41        // lll_geo_000BF8
#define MODEL_LLL_BOWSER_PIECE_1                  0x43        // lll_geo_000C10
#define MODEL_LLL_BOWSER_PIECE_2                  0x44        // lll_geo_000C30
#define MODEL_LLL_BOWSER_PIECE_3                  0x45        // lll_geo_000C50
#define MODEL_LLL_BOWSER_PIECE_4                  0x46        // lll_geo_000C70
#define MODEL_LLL_BOWSER_PIECE_5                  0x47        // lll_geo_000C90
#define MODEL_LLL_BOWSER_PIECE_6                  0x48        // lll_geo_000CB0
#define MODEL_LLL_BOWSER_PIECE_7                  0x49        // lll_geo_000CD0
#define MODEL_LLL_BOWSER_PIECE_8                  0x4A        // lll_geo_000CF0
#define MODEL_LLL_BOWSER_PIECE_9                  0x4B        // lll_geo_000D10
#define MODEL_LLL_BOWSER_PIECE_10                 0x4C        // lll_geo_000D30
#define MODEL_LLL_BOWSER_PIECE_11                 0x4D        // lll_geo_000D50
#define MODEL_LLL_BOWSER_PIECE_12                 0x4E        // lll_geo_000D70
#define MODEL_LLL_BOWSER_PIECE_13                 0x4F        // lll_geo_000D90
#define MODEL_LLL_BOWSER_PIECE_14                 0x50        // lll_geo_000DB0
#define MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM  0x36        // lll_geo_000B08
#define MODEL_LLL_SINKING_ROCK_BLOCK              0x37        // lll_geo_000DD0
#define MODEL_LLL_ROLLING_LOG                     0x39        // lll_geo_000DE8
#define MODEL_LLL_WOOD_BRIDGE                     0x35        // lll_geo_000B50
#define MODEL_LLL_LARGE_WOOD_BRIDGE               0x3B        // lll_geo_000B68
#define MODEL_LLL_FALLING_PLATFORM                0x3C        // lll_geo_000B80
#define MODEL_LLL_LARGE_FALLING_PLATFORM          0x3D        // lll_geo_000B98
#define MODEL_LLL_VOLCANO_FALLING_TRAP            0x53        // lll_geo_000EA8

// ddd
#define MODEL_DDD_BOWSER_SUB_DOOR                 0x36        // ddd_geo_000478
#define MODEL_DDD_BOWSER_SUB                      0x37        // ddd_geo_0004A0
#define MODEL_DDD_POLE                            0x38        // ddd_geo_000450

// wf
#define MODEL_WF_BREAKABLE_WALL_RIGHT             0x36        // wf_geo_000B78
#define MODEL_WF_BREAKABLE_WALL_LEFT              0x37        // wf_geo_000B90
#define MODEL_WF_KICKABLE_BOARD                   0x38        // wf_geo_000BA8
#define MODEL_WF_TOWER_DOOR                       0x39        // wf_geo_000BE0
#define MODEL_WF_KICKABLE_BOARD_FELLED            0x3A        // wf_geo_000BC8
#define MODEL_WF_TOWER_TRAPEZOID_PLATORM          0x3B        // wf_geo_000AF8 - unused
#define MODEL_WF_TOWER_SQUARE_PLATORM             0x3C        // wf_geo_000B10
#define MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED      0x3D        // wf_geo_000B38 - unused & duplicated
#define MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR    0x3E        // wf_geo_000B60 - elevator platorm

// ending

// castle grounds
#define MODEL_CASTLE_GROUNDS_VCUTM_GRILL          0x36        // castle_grounds_geo_00070C
#define MODEL_CASTLE_GROUNDS_FLAG                 0x37        // castle_grounds_geo_000660
#define MODEL_CASTLE_GROUNDS_CANNON_GRILL         0x38        // castle_grounds_geo_000724
#define MODEL_SIGNPOST_VANILLA                    0x39        // signpost_vanilla_geo

// pss

// cotmc
#define MODEL_SKEETER_MM                          0x36        // skeeter_mm_geo
#define MODEL_ESPIO                               0x37        // espio_geo

// totwc
#define MODEL_BULLYK                              0x36        // bullyk_geo
#define MODEL_CHARMY                              0x37        // charmy_geo

// bowser 1

// wmotr

#define MODEL_GOLFTREE                            0x36        // golftree_geo
#define MODEL_JOHNNY                              0x37        // johnny_geo
#define MODEL_STARFLAG                            0x38        // starflag_geo
#define MODEL_VECTOR                              0x39        // vector_geo

// bowser 2
#define MODEL_BOWSER_2_TILTING_ARENA              0x36        // bowser_2_geo_000170

// bowser 3
#define MODEL_BOWSER_3_FALLING_PLATFORM_1         0x36        // bowser_3_geo_000290
#define MODEL_BOWSER_3_FALLING_PLATFORM_2         0x37        // bowser_3_geo_0002A8
#define MODEL_BOWSER_3_FALLING_PLATFORM_3         0x38        // bowser_3_geo_0002C0
#define MODEL_BOWSER_3_FALLING_PLATFORM_4         0x39        // bowser_3_geo_0002D8
#define MODEL_BOWSER_3_FALLING_PLATFORM_5         0x3A        // bowser_3_geo_0002F0
#define MODEL_BOWSER_3_FALLING_PLATFORM_6         0x3B        // bowser_3_geo_000308
#define MODEL_BOWSER_3_FALLING_PLATFORM_7         0x3C        // bowser_3_geo_000320
#define MODEL_BOWSER_3_FALLING_PLATFORM_8         0x3D        // bowser_3_geo_000338
#define MODEL_BOWSER_3_FALLING_PLATFORM_9         0x3E        // bowser_3_geo_000350
#define MODEL_BOWSER_3_FALLING_PLATFORM_10        0x3F        // bowser_3_geo_000368

// ttm
#define MODEL_TTM_ROLLING_LOG                     0x35        // ttm_geo_000730
#define MODEL_TTM_STAR_CAGE                       0x36        // ttm_geo_000710
#define MODEL_TTM_BLUE_SMILEY                     0x37        // ttm_geo_000D14
#define MODEL_TTM_YELLOW_SMILEY                   0x38        // ttm_geo_000D4C
#define MODEL_TTM_STAR_SMILEY                     0x39        // ttm_geo_000D84
#define MODEL_TTM_MOON_SMILEY                     0x3A        // ttm_geo_000DBC
#define MODEL_TTM_SLIDE_EXIT_PODIUM               0x3B        // ttm_geo_000DF4

// actor model IDs

// first set of actor bins (0x54-0x63)
// group 1
#define MODEL_BULLET_BILL                 0x54        // bullet_bill_geo
#define MODEL_YELLOW_SPHERE               0x55        // yellow_sphere_geo
#define MODEL_HOOT                        0x56        // hoot_geo
#define MODEL_YOSHI_EGG                   0x57        // yoshi_egg_geo
#define MODEL_THWOMP                      0x58        // thwomp_geo
#define MODEL_HEAVE_HO                    0x59        // heave_ho_geo

// group 2
#define MODEL_BLARGG                      0x54        // blargg_geo
#define MODEL_BULLY                       0x56        // bully_geo
#define MODEL_BULLY_BOSS                  0x57        // bully_boss_geo

// group 3
#define MODEL_WATER_BOMB                  0x54        // water_bomb_geo
#define MODEL_WATER_BOMB_SHADOW           0x55        // water_bomb_shadow_geo
#define MODEL_KING_BOBOMB                 0x56        // king_bobomb_geo

// group 4
#define MODEL_MANTA_RAY                   0x54        // manta_seg5_geo_05008D14
#define MODEL_UNAGI                       0x55        // unagi_geo
#define MODEL_SUSHI                       0x56        // sushi_geo
#define MODEL_DL_WHIRLPOOL                0x57        // whirlpool_seg5_dl_05013CB8
#define MODEL_CLAM_SHELL                  0x58        // clam_shell_geo
#define MODEL_SUSHI_MARINE                0x59        // sushi_marine_geo

// group 5
#define MODEL_POKEY_HEAD                  0x54        // pokey_head_geo
#define MODEL_POKEY_BODY_PART             0x55        // pokey_body_part_geo
#define MODEL_TWEESTER                    0x56        // tweester_geo
#define MODEL_KLEPTO                      0x57        // klepto_geo
#define MODEL_EYEROK_LEFT_HAND            0x58        // eyerok_left_hand_geo
#define MODEL_EYEROK_RIGHT_HAND           0x59        // eyerok_right_hand_geo

// group 6
#define MODEL_DL_MONTY_MOLE_HOLE          0x54        // monty_mole_hole_seg5_dl_05000840
#define MODEL_MONTY_MOLE                  0x55        // monty_mole_geo
#define MODEL_UKIKI                       0x56        // ukiki_geo
#define MODEL_FWOOSH                      0x57        // fwoosh_geo

// group 7
#define MODEL_SPINDRIFT                   0x54        // spindrift_geo
#define MODEL_MR_BLIZZARD_HIDDEN          0x55        // mr_blizzard_hidden_geo
#define MODEL_MR_BLIZZARD                 0x56        // mr_blizzard_geo
#define MODEL_PENGUIN                     0x57        // penguin_geo
#define MODEL_PENGUIN_CHAO                0x58        // penguin_chao_geo

// group 8
#define MODEL_CAP_SWITCH_EXCLAMATION      0x54        // cap_switch_exclamation_seg5_dl_05002E00
#define MODEL_CAP_SWITCH                  0x55        // cap_switch_geo
#define MODEL_CAP_SWITCH_BASE             0x56        // cap_switch_base_seg5_dl_05003120

// group 9
#define MODEL_BOO                         0x54        // boo_geo
#define MODEL_BETA_BOO_KEY                0x55        // small_key_geo
#define MODEL_HAUNTED_CHAIR               0x56        // haunted_chair_geo
#define MODEL_MAD_PIANO                   0x57        // mad_piano_geo
#define MODEL_BOOKEND_PART                0x58        // bookend_part_geo
#define MODEL_BOOKEND                     0x59        // bookend_geo
#define MODEL_HAUNTED_CAGE                0x5A        // haunted_cage_geo
#define MODEL_KINGBOO                     0x5B        // kingboo_geo

// group 10
#define MODEL_BIRDS                       0x54        // birds_geo
#define MODEL_YOSHI                       0x55        // yoshi_geo
#define MODEL_MARK                        0x56        // mark_geo

// Vanilla Alts

#define MODEL_PEACH_MARK                  0x57        // peach_mark_geo
#define MODEL_PEACH_JACK                  0x58        // peach_jack_geo
#define MODEL_PEACH_CREAMOCCHIA           0x59        // peach_creamocchia_geo
#define MODEL_PEACH_VANILLA               0x5A        // peach_vanilla_geo

// ED Models

#define MODEL_CHEESE_ED                   0x5B        // cheese_ed_geo
#define MODEL_CHOCOLA_ED                  0x5C        // chocola_ed_geo
#define MODEL_GEMERL_ED                   0x5D        // gemerl_ed_geo
#define MODEL_BLAZE_ED                    0x5E        // blaze_ed_geo
#define MODEL_MARK_ED                     0x5F        // mark_ed_geo
#define MODEL_KATALINA_ED                 0x60        // katalina_ed_geo
#define MODEL_AMY_ED                      0x61        // amy_ed_geo
#define MODEL_TAILS_ED                    0x62        // tails_ed_geo

// group 11
#define MODEL_ENEMY_LAKITU                0x54        // enemy_lakitu_geo
#define MODEL_SPINY_BALL                  0x55        // spiny_ball_geo
#define MODEL_SPINY                       0x56        // spiny_geo
#define MODEL_WIGGLER_HEAD                0x57        // wiggler_head_geo
#define MODEL_WIGGLER_BODY                0x58        // wiggler_body_geo
#define MODEL_BUBBA                       0x59        // bubba_geo

// referenced in macro presets. Unknown usage.
#define MODEL_UNKNOWN_54                  0x54
#define MODEL_UNKNOWN_58                  0x58

// second set of actor bins, (0x64-0x73)
// group 12
#define MODEL_BOWSER                      0x64        // bowser_geo
#define MODEL_BOWSER_BOMB_CHILD_OBJ       0x65        // bowser_bomb_geo - Spawns as a chill object in bowser's behavior command, causing an explosion if it touches a bomb
#define MODEL_BOWSER_SMOKE                0x66        // bowser_impact_smoke_geo
#define MODEL_BOWSER_FLAMES               0x67        // bowser_flames_geo
#define MODEL_BOWSER_WAVE                 0x68        // invisible_bowser_accessory_geo
#define MODEL_BOWSER_NO_SHADOW            0x69        // bowser_geo_no_shadow

// group 13
#define MODEL_BUB                         0x64        // cheep_cheep_geo
#define MODEL_TREASURE_CHEST_BASE         0x65        // treasure_chest_base_geo
#define MODEL_TREASURE_CHEST_LID          0x66        // treasure_chest_lid_geo
#define MODEL_CYAN_FISH                   0x67        // cyan_fish_geo
#define MODEL_WATER_RING                  0x68        // water_ring_geo
#define MODEL_SKEETER                     0x69        // skeeter_geo
#define MODEL_TAMMIE                      0x6A        // tammie_geo

// group 14
#define MODEL_PIRANHA_PLANT               0x64        // piranha_plant_geo
#define MODEL_WHOMP                       0x67        // whomp_geo
#define MODEL_KOOPA_WITH_SHELL            0x68        // koopa_with_shell_geo
#define MODEL_METALLIC_BALL               0x65        // metallic_ball_geo
#define MODEL_CHAIN_CHOMP                 0x66        // chain_chomp
#define MODEL_KOOPA_FLAG                  0x6A        // koopa_flag_geo
#define MODEL_WOODEN_POST                 0x6B        // wooden_post_geo
#define MODEL_GEMERL                      0x6C        // gemerl_geo

// group 15
#define MODEL_MIPS                        0x64        // mips_geo
#define MODEL_BOO_CASTLE                  0x65        // boo_castle_geo
#define MODEL_LAKITU                      0x66        // lakitu_geo

#define MODEL_CHOCOLA                     0x67        // chocola_geo
#define MODEL_SILVER                      0x68        // silver_geo
#define MODEL_KATALINA                    0x69        // katalina_geo

#define MODEL_TOAD_ANGY                   0x6A        // toad_angy_geo
#define MODEL_SAGE_EGG                    0x6B        // sage_egg_geo

// group 16
#define MODEL_CHILL_BULLY                 0x64        // chilly_chief_geo
#define MODEL_BIG_CHILL_BULLY             0x65        // chilly_chief_big_geo
#define MODEL_MONEYBAG                    0x66        // moneybag_geo
#define MODEL_CHILLYCRAWL                 0x67        // chillycrawl_geo

// group 17
#define MODEL_SWOOP                       0x64        // swoop_geo
#define MODEL_SCUTTLEBUG                  0x65        // scuttlebug_geo
#define MODEL_MR_I_IRIS                   0x66        // mr_i_iris_geo
#define MODEL_MR_I                        0x67        // mr_i_geo
#define MODEL_DORRIE                      0x68        // dorrie_geo

// other models
#define MODEL_YELLOW_COIN                 0x74        // yellow_coin_geo
#define MODEL_YELLOW_COIN_NO_SHADOW       0x75        // yellow_coin_no_shadow_geo
#define MODEL_BLUE_COIN                   0x76        // blue_coin_geo
#define MODEL_BLUE_COIN_NO_SHADOW         0x77        // blue_coin_no_shadow_geo
#define MODEL_HEART                       0x78        // heart_geo
#define MODEL_TRANSPARENT_STAR            0x79        // transparent_star_geo
#define MODEL_STAR                        0x7A        // star_geo
// 0x7B used to be MODEL_TTM_SLIDE_EXIT_PODIUM, but i moved it to ttm 0x3B
#define MODEL_WOODEN_SIGNPOST             0x7C        // wooden_signpost_geo
#define MODEL_UNKNOWN_7D                  0x7D        // referenced in macro presets. Unknown usage
// find me
#define MODEL_CANNON_BARREL               0x7F        // cannon_barrel_geo
#define MODEL_CANNON_BASE                 0x80        // cannon_base_geo
#define MODEL_BREAKABLE_BOX               0x81        // breakable_box_geo
#define MODEL_BREAKABLE_BOX_SMALL         0x82        // breakable_box_small_geo
#define MODEL_EXCLAMATION_BOX_OUTLINE     0x83        // exclamation_box_outline_geo
#define MODEL_EXCLAMATION_POINT           0x84        // exclamation_point_seg8_dl_08025F08
#define MODEL_MARIOS_WINGED_METAL_CAP     0x85        // marios_winged_metal_cap_geo
#define MODEL_MARIOS_METAL_CAP            0x86        // marios_metal_cap_geo
#define MODEL_MARIOS_WING_CAP             0x87        // marios_wing_cap_geo
#define MODEL_MARIOS_CAP                  0x88        // marios_cap_geo
#define MODEL_EXCLAMATION_BOX             0x89        // exclamation_box_geo
#define MODEL_DIRT_ANIMATION              0x8A        // dirt_animation_geo
#define MODEL_CARTOON_STAR                0x8B        // cartoon_star_geo
#define MODEL_BLUE_COIN_SWITCH            0x8C        // blue_coin_switch_geo
// find me
#define MODEL_MIST                        0x8E        // mist_geo
#define MODEL_SPARKLES_ANIMATION          0x8F        // sparkles_animation_geo
#define MODEL_RED_FLAME                   0x90        // red_flame_geo
#define MODEL_BLUE_FLAME                  0x91        // blue_flame_geo
// find me
// find me
#define MODEL_BURN_SMOKE                  0x94        // burn_smoke_geo
#define MODEL_SPARKLES                    0x95        // sparkles_geo
#define MODEL_SMOKE                       0x96        // smoke_geo
// find me
// find me
// find me
// find me
// find me
#define MODEL_BURN_SMOKE_UNUSED           0x9C        // burn_smoke_geo - unused & duplicated
// find me
#define MODEL_WHITE_PARTICLE_DL           0x9E        // white_particle_dl
#define MODEL_SAND_DUST                   0x9F        // sand_seg3_dl_0302BCD0
#define MODEL_WHITE_PARTICLE              0xA0        // white_particle_dl
#define MODEL_PEBBLE                      0xA1        // pebble_seg3_dl_0301CB00
#define MODEL_LEAVES                      0xA2        // leaves_geo
#define MODEL_WAVE_TRAIL                  0xA3        // wave_trail_geo
#define MODEL_WHITE_PARTICLE_SMALL        0xA4        // white_particle_small_dl
#define MODEL_SMALL_WATER_SPLASH          0xA5        // small_water_splash_geo
#define MODEL_IDLE_WATER_WAVE             0xA6        // idle_water_wave_geo
#define MODEL_WATER_SPLASH                0xA7        // water_splash_geo
#define MODEL_BUBBLE                      0xA8        // bubble_geo
// find me
#define MODEL_PURPLE_MARBLE               0xAA        // purple_marble_geo
// find me
#define MODEL_UNKNOWN_AC                  0xAC        // according to an special preset, it was the original id of the castle floor trap
#define MODEL_WF_SLIDING_PLATFORM         0xAD        // wf_geo_000A98
#define MODEL_WF_SMALL_BOMP               0xAE        // wf_geo_000A00
#define MODEL_WF_ROTATING_WOODEN_PLATFORM 0xAF        // wf_geo_000A58
#define MODEL_WF_TUMBLING_BRIDGE_PART     0xB0        // wf_geo_000AB0
#define MODEL_WF_LARGE_BOMP               0xB1        // wf_geo_000A40
#define MODEL_WF_TUMBLING_BRIDGE          0xB2        // wf_geo_000AC8
#define MODEL_BOWSER_BOMB                 0xB3        // bowser_bomb_geo
#define MODEL_WATER_MINE                  0xB3        // water_mine_geo
#define MODEL_BOWLING_BALL                0xB4        // bowling_ball_geo
#define MODEL_TRAMPOLINE                  0xB5        // springboard_top_geo (unused)
#define MODEL_TRAMPOLINE_CENTER           0xB6        // springboard_spring_geo (unused)
#define MODEL_TRAMPOLINE_BASE             0xB7        // springboard_bottom_geo (unused)
#define MODEL_UNKNOWN_B8                  0xB8        // referenced in special presets as a static object. Unknown usage
#define MODEL_FISH                        0xB9        // fish_geo - fish without shadow, used
#define MODEL_FISH_SHADOW                 0xBA        // fish_shadow_geo - fish with shadow, unused
#define MODEL_BUTTERFLY                   0xBB        // butterfly_geo
#define MODEL_BLACK_BOBOMB                0xBC        // black_bobomb_geo
// find me
#define MODEL_KOOPA_SHELL                 0xBE        // koopa_shell_geo
#define MODEL_KOOPA_WITHOUT_SHELL         0xBF        // koopa_without_shell_geo
#define MODEL_GOOMBA                      0xC0        // goomba_geo
#define MODEL_SEAWEED                     0xC1        // seaweed_geo
#define MODEL_AMP                         0xC2        // dAmpGeo
#define MODEL_BOBOMB_BUDDY                0xC3        // bobomb_buddy_geo
// find me
// find me
// find me
#define MODEL_SSL_TOX_BOX                 0xC7        // ssl_geo_000630
#define MODEL_BOWSER_KEY_CUTSCENE         0xC8        // bowser_key_cutscene_geo
#define MODEL_DL_CANNON_LID               0xC9        // cannon_closed_seg8_dl_080048E0
#define MODEL_CHECKERBOARD_PLATFORM       0xCA        // checkerboard_platform_geo
#define MODEL_RED_FLAME_SHADOW            0xCB        // red_flame_shadow_geo
#define MODEL_BOWSER_KEY                  0xCC        // bowser_key_geo
#define MODEL_EXPLOSION                   0xCD        // explosion_geo
#define MODEL_SNUFIT                      0xCE        // snufit_geo
#define MODEL_PURPLE_SWITCH               0xCF        // purple_switch_geo
#define MODEL_CASTLE_STAR_DOOR_30_STARS   0xD0        // castle_geo_000F00
#define MODEL_CASTLE_STAR_DOOR_50_STARS   0xD1        // castle_geo_000F00
#define MODEL_CCM_SNOWMAN_BASE            0xD2        // ccm_geo_0003F0
// find me
#define MODEL_1UP                         0xD4        // mushroom_1up_geo
#define MODEL_CASTLE_STAR_DOOR_8_STARS    0xD5        // castle_geo_000F00
#define MODEL_CASTLE_STAR_DOOR_70_STARS   0xD6        // castle_geo_000F00
#define MODEL_RED_COIN                    0xD7        // red_coin_geo
#define MODEL_RED_COIN_NO_SHADOW          0xD8        // red_coin_no_shadow_geo
#define MODEL_METAL_BOX                   0xD9        // metal_box_geo
#define MODEL_METAL_BOX_DL                0xDA        // metal_box_dl
#define MODEL_NUMBER                      0xDB        // number_geo
#define MODEL_FLYGUY                      0xDC        // shyguy_geo
#define MODEL_TOAD                        0xDD        // toad_geo
#define MODEL_PEACH                       0xDE        // peach_geo
#define MODEL_CHUCKYA                     0xDF        // chuckya_geo
#define MODEL_WHITE_PUFF                  0xE0        // white_puff_geo
#define MODEL_TRAJECTORY_MARKER_BALL      0xE1        // bowling_ball_track_geo - duplicate used in SSL Pyramid small sized and as a track ball

#ifdef PORT_MOP_OBJS
#define MODEL_MOP_NOTEBLOCK                 0x7B
#define MODEL_MOP_CHECKPOINT_FLAG           0x2E
#define MODEL_MOP_FLIPBLOCK                 0xF0
#define MODEL_MOP_FLIPSWAP_PLATFORM         0x2F
#define MODEL_MOP_FLIPSWAP_PLATFORM_BORDER  0x30
#define MODEL_MOP_FLIPSWITCH_PANEL          0x2A
#define MODEL_MOP_SWITCHBOARD               0x2B
#define MODEL_MOP_SWITCHBOARD_GEARS         0x2C
#define MODEL_MOP_SHRINKPLAT_BORDER         0x97
#define MODEL_MOP_SPRING                    0x92
#define MODEL_MOP_ROTATING_BLOCK            0x2D
#define MODEL_MOP_SANDBLOCK                 0x99
#define MODEL_MOP_SHELL_GREEN               0x9B
#define MODEL_MOP_SHELL_RED                 0x9D
#define MODEL_MOP_SHRINKPLAT                0x98
#define MODEL_MOP_SWITCHBLOCK               0xF1
#define MODEL_MOP_SWITCHBLOCK_SWITCH        0xF2
#define MODEL_MOP_EMITTER_SPARKLES          0xF3
#endif

// Menu Models (overwrites Level Geometry IDs)
#define MODEL_MAIN_MENU_MARIO_SAVE_BUTTON         MODEL_LEVEL_GEOMETRY_03   // main_menu_geo_0001D0
#define MODEL_MAIN_MENU_RED_ERASE_BUTTON          MODEL_LEVEL_GEOMETRY_04   // main_menu_geo_000290
#define MODEL_MAIN_MENU_BLUE_COPY_BUTTON          MODEL_LEVEL_GEOMETRY_05   // main_menu_geo_0002B8
#define MODEL_MAIN_MENU_YELLOW_FILE_BUTTON        MODEL_LEVEL_GEOMETRY_06   // main_menu_geo_0002E0
#define MODEL_MAIN_MENU_GREEN_SCORE_BUTTON        MODEL_LEVEL_GEOMETRY_07   // main_menu_geo_000308
#define MODEL_MAIN_MENU_MARIO_SAVE_BUTTON_FADE    MODEL_LEVEL_GEOMETRY_08   // main_menu_geo_000200
#define MODEL_MAIN_MENU_MARIO_NEW_BUTTON          MODEL_LEVEL_GEOMETRY_09   // main_menu_geo_000230
#define MODEL_MAIN_MENU_MARIO_NEW_BUTTON_FADE     MODEL_LEVEL_GEOMETRY_0A   // main_menu_geo_000260
#define MODEL_MAIN_MENU_PURPLE_SOUND_BUTTON       MODEL_LEVEL_GEOMETRY_0B   // main_menu_geo_000330
#define MODEL_MAIN_MENU_GENERIC_BUTTON            MODEL_LEVEL_GEOMETRY_0C   // main_menu_geo_000358

// level model aliases to level geometry IDs. Possibly a relic from an older level
// format that used to rely on level geometry objects. (seen in WF, LLL, etc)
#define MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM     MODEL_LEVEL_GEOMETRY_09   // lll_geo_000A78
#define MODEL_WF_GIANT_POLE                       MODEL_LEVEL_GEOMETRY_0D   // wf_geo_000AE0
#define MODEL_WF_ROTATING_PLATFORM                MODEL_LEVEL_GEOMETRY_10   // wf_geo_0009B8
#define MODEL_BITDW_WARP_PIPE                     MODEL_LEVEL_GEOMETRY_12   // warp_pipe_geo
#define MODEL_THI_WARP_PIPE                       MODEL_LEVEL_GEOMETRY_16   // warp_pipe_geo
#define MODEL_VCUTM_WARP_PIPE                     MODEL_LEVEL_GEOMETRY_16   // warp_pipe_geo
#define MODEL_CASTLE_GROUNDS_WARP_PIPE            MODEL_LEVEL_GEOMETRY_16   // warp_pipe_geo

#endif // MODEL_IDS_H
