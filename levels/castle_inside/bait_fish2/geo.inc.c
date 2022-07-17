#include "src/game/envfx_snow.h"

// 0x16000C44
const GeoLayout bait_fish2_geo[] = {
   GEO_SCALE(0x00, 16384),
   GEO_OPEN_NODE(),
      GEO_ANIMATED_PART(LAYER_ALPHA, -16, 0, 0, NULL),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, bait_fish2_000_offset_002_skinned_mesh_layer_4),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_ALPHA, 97, 0, 0, bait_fish2_000_offset_002_mesh_layer_4),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
	  GEO_DISPLAY_LIST(LAYER_ALPHA, bait_fish2_material_revert_render_settings),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
