void scroll_cheese_follow_bait_Root_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 361;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(cheese_follow_bait_Root_mesh_layer_1_vtx_1);

	deltaX = (int)(0.30000001192092896 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_actor_geo_cheese_follow_bait() {
	scroll_cheese_follow_bait_Root_mesh_layer_1_vtx_1();
}
