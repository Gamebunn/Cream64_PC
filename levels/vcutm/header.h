#ifndef VCUTM_HEADER_H
#define VCUTM_HEADER_H

#include "types.h"

// geo
extern const GeoLayout vcutm_geo_0001F0[];
extern const GeoLayout vcutm_geo_000208[];

// leveldata
extern const Gfx vcutm_seg7_dl_07007E88[];
extern const Gfx vcutm_seg7_dl_070080D0[];
extern const Gfx vcutm_seg7_dl_07008E10[];
extern const Gfx vcutm_seg7_dl_070093E8[];
extern const Gfx vcutm_seg7_dl_070096E0[];
extern const Collision vcutm_seg7_collision[];
extern const MacroObject vcutm_seg7_macro_objs[];
extern const Collision vcutm_seg7_collision_0700AC44[];

// script
extern const LevelScript level_vcutm_entry[];


#include "levels/vcutm/header.inc.h"

#include "levels/vcutm/carousel/geo_header.h"

#include "levels/vcutm/carousel/collision_header.h"

#include "levels/vcutm/jack/geo_header.h"

#include "levels/vcutm/jack/anim_header.h"

#include "levels/vcutm/kitten_layla/geo_header.h"

#include "levels/vcutm/kitten_layla/anim_header.h"

#include "levels/vcutm/sweet/geo_header.h"

#include "levels/vcutm/sweet/anim_header.h"

#include "levels/vcutm/hocus/geo_header.h"

#include "levels/vcutm/hocus/anim_header.h"

#endif
