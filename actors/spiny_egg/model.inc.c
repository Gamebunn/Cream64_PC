Lights1 spiny_egg_main_lights = gdSPDefLights1(
	0x7F, 0x2E, 0x8,
	0xFE, 0x5C, 0x11, 0x28, 0x28, 0x28);

Lights1 spiny_egg_spikes_lights = gdSPDefLights1(
	0x0, 0x8, 0x7F,
	0x0, 0x11, 0xFE, 0x28, 0x28, 0x28);

Vtx spiny_egg_000_offset_mesh_layer_1_vtx_0[122] = {
	{{{28, -96, -28},0, {-16, -16},{0x26, 0x8D, 0xDA, 0xFF}}},
	{{{39, -96, 0},0, {-16, -16},{0x36, 0x8D, 0x0, 0xFF}}},
	{{{0, -104, 0},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{52, -73, -52},0, {-16, -16},{0x42, 0xA9, 0xBE, 0xFF}}},
	{{{0, -73, -73},0, {-16, -16},{0x0, 0xA9, 0xA3, 0xFF}}},
	{{{0, -96, -39},0, {-16, -16},{0x0, 0x8D, 0xCA, 0xFF}}},
	{{{-28, -96, -28},0, {-16, -16},{0xDA, 0x8D, 0xDA, 0xFF}}},
	{{{-39, -96, 0},0, {-16, -16},{0xCA, 0x8D, 0x0, 0xFF}}},
	{{{-28, -96, 28},0, {-16, -16},{0xDA, 0x8D, 0x26, 0xFF}}},
	{{{0, -96, 39},0, {-16, -16},{0x0, 0x8D, 0x36, 0xFF}}},
	{{{28, -96, 28},0, {-16, -16},{0x26, 0x8D, 0x26, 0xFF}}},
	{{{73, -73, 0},0, {-16, -16},{0x5D, 0xA9, 0x0, 0xFF}}},
	{{{68, -39, -68},0, {-16, -16},{0x54, 0xD2, 0xAC, 0xFF}}},
	{{{0, -39, -96},0, {-16, -16},{0x0, 0xD1, 0x8A, 0xFF}}},
	{{{-68, -39, -68},0, {-16, -16},{0xAC, 0xD2, 0xAC, 0xFF}}},
	{{{-52, -73, -52},0, {-16, -16},{0xBE, 0xA9, 0xBE, 0xFF}}},
	{{{-28, -96, -28},0, {-16, -16},{0xDA, 0x8D, 0xDA, 0xFF}}},
	{{{-73, -73, 0},0, {-16, -16},{0xA3, 0xA9, 0x0, 0xFF}}},
	{{{-52, -73, -52},0, {-16, -16},{0xBE, 0xA9, 0xBE, 0xFF}}},
	{{{-39, -96, 0},0, {-16, -16},{0xCA, 0x8D, 0x0, 0xFF}}},
	{{{-52, -73, 52},0, {-16, -16},{0xBE, 0xA9, 0x42, 0xFF}}},
	{{{-28, -96, 28},0, {-16, -16},{0xDA, 0x8D, 0x26, 0xFF}}},
	{{{0, -73, 73},0, {-16, -16},{0x0, 0xA9, 0x5D, 0xFF}}},
	{{{0, -96, 39},0, {-16, -16},{0x0, 0x8D, 0x36, 0xFF}}},
	{{{52, -73, 52},0, {-16, -16},{0x42, 0xA9, 0x42, 0xFF}}},
	{{{28, -96, 28},0, {-16, -16},{0x26, 0x8D, 0x26, 0xFF}}},
	{{{73, -73, 0},0, {-16, -16},{0x5D, 0xA9, 0x0, 0xFF}}},
	{{{96, -39, 0},0, {-16, -16},{0x76, 0xD1, 0x0, 0xFF}}},
	{{{68, -39, -68},0, {-16, -16},{0x54, 0xD2, 0xAC, 0xFF}}},
	{{{73, 0, -73},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{0, 0, -104},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -39, -96},0, {-16, -16},{0x0, 0xD1, 0x8A, 0xFF}}},
	{{{0, -39, -96},0, {-16, -16},{0x0, 0xD1, 0x8A, 0xFF}}},
	{{{-73, 0, -73},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{0, 0, -104},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-68, -39, -68},0, {-16, -16},{0xAC, 0xD2, 0xAC, 0xFF}}},
	{{{-104, 0, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-96, -39, 0},0, {-16, -16},{0x8A, 0xD1, 0x0, 0xFF}}},
	{{{-52, -73, -52},0, {-16, -16},{0xBE, 0xA9, 0xBE, 0xFF}}},
	{{{-73, -73, 0},0, {-16, -16},{0xA3, 0xA9, 0x0, 0xFF}}},
	{{{-68, -39, 68},0, {-16, -16},{0xAC, 0xD2, 0x54, 0xFF}}},
	{{{-52, -73, 52},0, {-16, -16},{0xBE, 0xA9, 0x42, 0xFF}}},
	{{{0, -39, 96},0, {-16, -16},{0x0, 0xD1, 0x76, 0xFF}}},
	{{{0, -73, 73},0, {-16, -16},{0x0, 0xA9, 0x5D, 0xFF}}},
	{{{68, -39, 68},0, {-16, -16},{0x54, 0xD2, 0x54, 0xFF}}},
	{{{52, -73, 52},0, {-16, -16},{0x42, 0xA9, 0x42, 0xFF}}},
	{{{96, -39, 0},0, {-16, -16},{0x76, 0xD1, 0x0, 0xFF}}},
	{{{104, 0, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{96, -39, 0},0, {-16, -16},{0x76, 0xD1, 0x0, 0xFF}}},
	{{{73, 0, -73},0, {-16, -16},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{104, 0, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{68, 39, -68},0, {-16, -16},{0x54, 0x2E, 0xAC, 0xFF}}},
	{{{0, 39, -96},0, {-16, -16},{0x0, 0x2F, 0x8A, 0xFF}}},
	{{{0, 0, -104},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-68, 39, -68},0, {-16, -16},{0xAC, 0x2E, 0xAC, 0xFF}}},
	{{{-73, 0, -73},0, {-16, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-96, 39, 0},0, {-16, -16},{0x8A, 0x2F, 0x0, 0xFF}}},
	{{{-104, 0, 0},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-68, 39, 68},0, {-16, -16},{0xAC, 0x2E, 0x54, 0xFF}}},
	{{{-73, 0, 73},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-96, -39, 0},0, {-16, -16},{0x8A, 0xD1, 0x0, 0xFF}}},
	{{{-68, -39, 68},0, {-16, -16},{0xAC, 0xD2, 0x54, 0xFF}}},
	{{{0, 0, 104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -39, 96},0, {-16, -16},{0x0, 0xD1, 0x76, 0xFF}}},
	{{{0, -39, 96},0, {-16, -16},{0x0, 0xD1, 0x76, 0xFF}}},
	{{{73, 0, 73},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{0, 0, 104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, -39, 68},0, {-16, -16},{0x54, 0xD2, 0x54, 0xFF}}},
	{{{104, 0, 0},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{96, 39, 0},0, {-16, -16},{0x76, 0x2F, 0x0, 0xFF}}},
	{{{68, 39, -68},0, {-16, -16},{0x54, 0x2E, 0xAC, 0xFF}}},
	{{{52, 73, -52},0, {-16, -16},{0x42, 0x57, 0xBE, 0xFF}}},
	{{{0, 73, -73},0, {-16, -16},{0x0, 0x57, 0xA3, 0xFF}}},
	{{{0, 39, -96},0, {-16, -16},{0x0, 0x2F, 0x8A, 0xFF}}},
	{{{-52, 73, -52},0, {-16, -16},{0xBE, 0x57, 0xBE, 0xFF}}},
	{{{-68, 39, -68},0, {-16, -16},{0xAC, 0x2E, 0xAC, 0xFF}}},
	{{{-73, 73, 0},0, {-16, -16},{0xA3, 0x57, 0x0, 0xFF}}},
	{{{-96, 39, 0},0, {-16, -16},{0x8A, 0x2F, 0x0, 0xFF}}},
	{{{-52, 73, 52},0, {-16, -16},{0xBE, 0x57, 0x42, 0xFF}}},
	{{{-68, 39, 68},0, {-16, -16},{0xAC, 0x2E, 0x54, 0xFF}}},
	{{{-68, 39, 68},0, {-16, -16},{0xAC, 0x2E, 0x54, 0xFF}}},
	{{{0, 73, 73},0, {-16, -16},{0x0, 0x57, 0x5D, 0xFF}}},
	{{{-52, 73, 52},0, {-16, -16},{0xBE, 0x57, 0x42, 0xFF}}},
	{{{0, 39, 96},0, {-16, -16},{0x0, 0x2F, 0x76, 0xFF}}},
	{{{-73, 0, 73},0, {-16, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{0, 0, 104},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{68, 39, 68},0, {-16, -16},{0x54, 0x2E, 0x54, 0xFF}}},
	{{{73, 0, 73},0, {-16, -16},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{96, 39, 0},0, {-16, -16},{0x76, 0x2F, 0x0, 0xFF}}},
	{{{73, 73, 0},0, {-16, -16},{0x5D, 0x57, 0x0, 0xFF}}},
	{{{52, 73, -52},0, {-16, -16},{0x42, 0x57, 0xBE, 0xFF}}},
	{{{28, 96, -28},0, {-16, -16},{0x26, 0x73, 0xDA, 0xFF}}},
	{{{0, 96, -39},0, {-16, -16},{0x0, 0x73, 0xCA, 0xFF}}},
	{{{0, 73, -73},0, {-16, -16},{0x0, 0x57, 0xA3, 0xFF}}},
	{{{-28, 96, -28},0, {-16, -16},{0xDA, 0x73, 0xDA, 0xFF}}},
	{{{-52, 73, -52},0, {-16, -16},{0xBE, 0x57, 0xBE, 0xFF}}},
	{{{-52, 73, -52},0, {-16, -16},{0xBE, 0x57, 0xBE, 0xFF}}},
	{{{-39, 96, 0},0, {-16, -16},{0xCA, 0x73, 0x0, 0xFF}}},
	{{{-28, 96, -28},0, {-16, -16},{0xDA, 0x73, 0xDA, 0xFF}}},
	{{{-73, 73, 0},0, {-16, -16},{0xA3, 0x57, 0x0, 0xFF}}},
	{{{-28, 96, 28},0, {-16, -16},{0xDA, 0x73, 0x26, 0xFF}}},
	{{{-52, 73, 52},0, {-16, -16},{0xBE, 0x57, 0x42, 0xFF}}},
	{{{0, 96, 39},0, {-16, -16},{0x0, 0x73, 0x36, 0xFF}}},
	{{{0, 73, 73},0, {-16, -16},{0x0, 0x57, 0x5D, 0xFF}}},
	{{{28, 96, 28},0, {-16, -16},{0x26, 0x73, 0x26, 0xFF}}},
	{{{52, 73, 52},0, {-16, -16},{0x42, 0x57, 0x42, 0xFF}}},
	{{{0, 39, 96},0, {-16, -16},{0x0, 0x2F, 0x76, 0xFF}}},
	{{{68, 39, 68},0, {-16, -16},{0x54, 0x2E, 0x54, 0xFF}}},
	{{{73, 73, 0},0, {-16, -16},{0x5D, 0x57, 0x0, 0xFF}}},
	{{{39, 96, 0},0, {-16, -16},{0x36, 0x73, 0x0, 0xFF}}},
	{{{28, 96, -28},0, {-16, -16},{0x26, 0x73, 0xDA, 0xFF}}},
	{{{0, 104, 0},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{28, 96, -28},0, {-16, -16},{0x26, 0x73, 0xDA, 0xFF}}},
	{{{0, 96, -39},0, {-16, -16},{0x0, 0x73, 0xCA, 0xFF}}},
	{{{0, 104, 0},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-28, 96, -28},0, {-16, -16},{0xDA, 0x73, 0xDA, 0xFF}}},
	{{{-39, 96, 0},0, {-16, -16},{0xCA, 0x73, 0x0, 0xFF}}},
	{{{-28, 96, 28},0, {-16, -16},{0xDA, 0x73, 0x26, 0xFF}}},
	{{{0, 96, 39},0, {-16, -16},{0x0, 0x73, 0x36, 0xFF}}},
	{{{28, 96, 28},0, {-16, -16},{0x26, 0x73, 0x26, 0xFF}}},
	{{{39, 96, 0},0, {-16, -16},{0x36, 0x73, 0x0, 0xFF}}},
	{{{52, 73, 52},0, {-16, -16},{0x42, 0x57, 0x42, 0xFF}}},
};

Gfx spiny_egg_000_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(5, 0, 2, 0),
	gsSP1Triangle(6, 5, 2, 0),
	gsSP1Triangle(7, 6, 2, 0),
	gsSP1Triangle(8, 7, 2, 0),
	gsSP1Triangle(9, 8, 2, 0),
	gsSP1Triangle(10, 9, 2, 0),
	gsSP1Triangle(1, 10, 2, 0),
	gsSP1Triangle(10, 1, 11, 0),
	gsSP1Triangle(1, 3, 11, 0),
	gsSP1Triangle(11, 3, 12, 0),
	gsSP1Triangle(3, 13, 12, 0),
	gsSP1Triangle(3, 4, 13, 0),
	gsSP1Triangle(4, 14, 13, 0),
	gsSP1Triangle(4, 15, 14, 0),
	gsSP1Triangle(5, 15, 4, 0),
	gsSP1Triangle(5, 6, 15, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(1, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(1, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(9, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(spiny_egg_000_offset_mesh_layer_1_vtx_0 + 112, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSP1Triangle(7, 8, 2, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_000_offset_001_mesh_layer_1_vtx_0[4] = {
	{{{0, 94, -124},0, {-16, -16},{0x0, 0x47, 0x97, 0xFF}}},
	{{{27, 69, -61},0, {-16, -16},{0x64, 0x4D, 0xF4, 0xFF}}},
	{{{0, 32, -87},0, {-16, -16},{0xFF, 0xBF, 0x93, 0xFF}}},
	{{{-26, 70, -60},0, {-16, -16},{0x9E, 0x50, 0xF7, 0xFF}}},
};

Gfx spiny_egg_000_offset_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_000_offset_001_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_001_offset_mesh_layer_1_vtx_0[4] = {
	{{{0, 95, 25},0, {-16, -16},{0xFF, 0x2D, 0x77, 0xFF}}},
	{{{27, 95, -20},0, {-16, -16},{0x62, 0x3A, 0xC8, 0xFF}}},
	{{{0, 160, 0},0, {-16, -16},{0x0, 0x7F, 0xA, 0xFF}}},
	{{{-26, 95, -22},0, {-16, -16},{0xA2, 0x3B, 0xC2, 0xFF}}},
};

Gfx spiny_egg_001_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_001_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_002_offset_mesh_layer_1_vtx_0[4] = {
	{{{0, 32, 87},0, {-16, -16},{0xFF, 0xBF, 0x6D, 0xFF}}},
	{{{27, 69, 61},0, {-16, -16},{0x64, 0x4D, 0xC, 0xFF}}},
	{{{0, 94, 124},0, {-16, -16},{0x0, 0x47, 0x69, 0xFF}}},
	{{{-26, 70, 60},0, {-16, -16},{0x9E, 0x50, 0x9, 0xFF}}},
};

Gfx spiny_egg_002_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_002_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_003_offset_mesh_layer_1_vtx_0[4] = {
	{{{0, -94, 124},0, {-16, -16},{0x0, 0xB9, 0x69, 0xFF}}},
	{{{27, -69, 61},0, {-16, -16},{0x64, 0xB3, 0xC, 0xFF}}},
	{{{0, -32, 87},0, {-16, -16},{0xFF, 0x41, 0x6D, 0xFF}}},
	{{{-26, -70, 60},0, {-16, -16},{0x9E, 0xB0, 0x9, 0xFF}}},
};

Gfx spiny_egg_003_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_003_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_004_offset_mesh_layer_1_vtx_0[4] = {
	{{{0, -160, 0},0, {-16, -16},{0x0, 0x81, 0xA, 0xFF}}},
	{{{27, -95, -20},0, {-16, -16},{0x62, 0xC6, 0xC8, 0xFF}}},
	{{{0, -95, 25},0, {-16, -16},{0xFF, 0xD3, 0x77, 0xFF}}},
	{{{-26, -95, -22},0, {-16, -16},{0xA2, 0xC5, 0xC2, 0xFF}}},
};

Gfx spiny_egg_004_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_004_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_005_offset_mesh_layer_1_vtx_0[4] = {
	{{{0, -32, -87},0, {-16, -16},{0xFF, 0x41, 0x93, 0xFF}}},
	{{{27, -69, -61},0, {-16, -16},{0x64, 0xB3, 0xF4, 0xFF}}},
	{{{0, -94, -124},0, {-16, -16},{0x0, 0xB9, 0x97, 0xFF}}},
	{{{-26, -70, -60},0, {-16, -16},{0x9E, 0xB0, 0xF7, 0xFF}}},
};

Gfx spiny_egg_005_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_005_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_006_offset_mesh_layer_1_vtx_0[4] = {
	{{{100, 28, 0},0, {-16, -16},{0x32, 0x75, 0x0, 0xFF}}},
	{{{100, -18, 26},0, {-16, -16},{0x37, 0xC5, 0x62, 0xFF}}},
	{{{165, 0, 0},0, {-16, -16},{0x7F, 0x4, 0x0, 0xFF}}},
	{{{100, -18, -27},0, {-16, -16},{0x39, 0xC6, 0x9E, 0xFF}}},
};

Gfx spiny_egg_006_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_006_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_egg_007_offset_mesh_layer_1_vtx_0[4] = {
	{{{-165, 0, 0},0, {-16, -16},{0x81, 0x4, 0x0, 0xFF}}},
	{{{-100, 28, 0},0, {-16, -16},{0xCE, 0x75, 0x0, 0xFF}}},
	{{{-100, -18, -27},0, {-16, -16},{0xC7, 0xC6, 0x9E, 0xFF}}},
	{{{-100, -18, 26},0, {-16, -16},{0xC9, 0xC5, 0x62, 0xFF}}},
};

Gfx spiny_egg_007_offset_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_egg_007_offset_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_spiny_egg_main[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spiny_egg_main_lights),
	gsSPEndDisplayList(),
};

Gfx mat_spiny_egg_spikes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spiny_egg_spikes_lights),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_000_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_main),
	gsSPDisplayList(spiny_egg_000_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_000_offset_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_000_offset_001_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_001_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_001_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_002_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_002_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_003_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_003_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_004_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_004_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_005_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_005_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_006_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_006_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_007_offset_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_egg_spikes),
	gsSPDisplayList(spiny_egg_007_offset_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_egg_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

