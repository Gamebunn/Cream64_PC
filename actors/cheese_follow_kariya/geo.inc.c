#include "src/game/envfx_snow.h"

const GeoLayout cheese_follow_kariya_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 0, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 14418),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 168, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
					GEO_OPEN_NODE(),
						GEO_NODE_START(),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 48, 0, NULL),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 25, 35, -62, NULL),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -26, 35, -62, NULL),
					GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, cheese_follow_kariya_Root_Billboard_Display_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -56, 46, 0, NULL),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -47, -44, 0, NULL),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 58, 46, 0, NULL),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 46, -44, 0, NULL),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, cheese_follow_kariya_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};