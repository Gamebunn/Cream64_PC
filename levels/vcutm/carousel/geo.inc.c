#include "src/game/envfx_snow.h"

const GeoLayout carousel_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, carousel_Root_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, carousel_Root_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, carousel_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, carousel_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
