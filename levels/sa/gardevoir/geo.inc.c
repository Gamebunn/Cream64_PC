#include "src/game/envfx_snow.h"

const GeoLayout gardevoir_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 204, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 19661),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 587, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 106, 0, gardevoir_Chest_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, gardevoir_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
