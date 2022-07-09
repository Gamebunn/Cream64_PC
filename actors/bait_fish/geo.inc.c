#include "src/game/envfx_snow.h"

const GeoLayout bait_fish_geo[] = {
   GEO_SCALE(0x00, 16384),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_OPAQUE, -23, 0, 0, NULL),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_ALPHA, bait_fish_000_offset_002_skinned_mesh_layer_4),
            GEO_ANIMATED_PART(LAYER_ALPHA, 137, 0, 0, bait_fish_000_offset_002_mesh_layer_4),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, bait_fish_material_revert_render_settings),
   GEO_CLOSE_NODE(),
   GEO_END(),
};