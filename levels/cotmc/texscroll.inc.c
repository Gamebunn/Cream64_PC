void scroll_cotmc_dl_Water_Flowing_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 22;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_Water_Flowing_mesh_layer_5_vtx_0);

	deltaY = (int)(-0.800000011920929 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_cotmc_dl_Water_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 31;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_Water_mesh_layer_5_vtx_0);

	deltaX = (int)(-0.10000000149011612 * 0x20) % width;
	deltaY = (int)(-0.10000000149011612 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_cotmc_dl_Water_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 28;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_Water_mesh_layer_5_vtx_1);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_cotmc_dl_Water_mesh_layer_5_vtx_2() {
	int i = 0;
	int count = 9;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_Water_mesh_layer_5_vtx_2);

	deltaX = (int)(-1.0 * 0x20) % width;
	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_cotmc() {
	scroll_cotmc_dl_Water_Flowing_mesh_layer_5_vtx_0();
	scroll_cotmc_dl_Water_mesh_layer_5_vtx_0();
	scroll_cotmc_dl_Water_mesh_layer_5_vtx_1();
	scroll_cotmc_dl_Water_mesh_layer_5_vtx_2();
};
