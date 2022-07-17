#include "src/game/envfx_snow.h"

const GeoLayout ms_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(564),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ms_tree_000_displaylist_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ms_tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
