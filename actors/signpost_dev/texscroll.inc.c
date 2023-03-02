void scroll_signpost_dev_001_displaylist_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 100;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(signpost_dev_001_displaylist_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_actor_geo_signpost_dev() {
	scroll_signpost_dev_001_displaylist_mesh_layer_1_vtx_0();
}
