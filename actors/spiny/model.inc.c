Lights1 spiny_outershell_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 spiny_softbody_lights = gdSPDefLights1(
	0x7F, 0x52, 0x41,
	0xFE, 0xA4, 0x83, 0x28, 0x28, 0x28);

Lights1 spiny_body_lights = gdSPDefLights1(
	0x7F, 0x2E, 0x8,
	0xFE, 0x5C, 0x11, 0x28, 0x28, 0x28);

Lights1 spiny_spikes_lights = gdSPDefLights1(
	0x0, 0x8, 0x7F,
	0x0, 0x11, 0xFE, 0x28, 0x28, 0x28);

Vtx spiny_000_offset_002_mesh_layer_1_vtx_0[39] = {
	{{{-12, -119, -85},0, {-16, -16},{0xAA, 0xAE, 0xD3, 0xFF}}},
	{{{0, -4, -145},0, {-16, -16},{0xEE, 0xF9, 0x82, 0xFF}}},
	{{{10, -116, -121},0, {-16, -16},{0x5, 0xAF, 0x9E, 0xFF}}},
	{{{-23, -40, -118},0, {-16, -16},{0x9F, 0xE6, 0xB2, 0xFF}}},
	{{{-18, 49, -118},0, {-16, -16},{0x98, 0x16, 0xBB, 0xFF}}},
	{{{22, 107, -136},0, {-16, -16},{0x3, 0x40, 0x92, 0xFF}}},
	{{{-1, 119, -95},0, {-16, -16},{0xB2, 0x53, 0xC8, 0xFF}}},
	{{{62, 160, -48},0, {-16, -16},{0x48, 0x5D, 0xD0, 0xFF}}},
	{{{29, 168, 0},0, {-16, -16},{0xEA, 0x7D, 0x0, 0xFF}}},
	{{{62, 160, 46},0, {-16, -16},{0x48, 0x5D, 0x30, 0xFF}}},
	{{{-1, 119, 95},0, {-16, -16},{0xB3, 0x54, 0x38, 0xFF}}},
	{{{22, 107, 136},0, {-16, -16},{0x3, 0x40, 0x6E, 0xFF}}},
	{{{-18, 49, 118},0, {-16, -16},{0x98, 0x16, 0x46, 0xFF}}},
	{{{0, -4, 145},0, {-16, -16},{0xEE, 0xF9, 0x7E, 0xFF}}},
	{{{-23, -40, 118},0, {-16, -16},{0x9F, 0xE6, 0x4E, 0xFF}}},
	{{{-12, -119, 85},0, {-16, -16},{0xAA, 0xAE, 0x2D, 0xFF}}},
	{{{10, -116, 121},0, {-16, -16},{0x5, 0xAF, 0x62, 0xFF}}},
	{{{0, -4, 145},0, {-16, -16},{0xEE, 0xF9, 0x7E, 0xFF}}},
	{{{-12, -119, 85},0, {-16, -16},{0xAA, 0xAE, 0x2D, 0xFF}}},
	{{{3, -146, 0},0, {-16, -16},{0xC5, 0x8F, 0x0, 0xFF}}},
	{{{29, -156, 0},0, {-16, -16},{0x2B, 0x88, 0x0, 0xFF}}},
	{{{10, -116, -121},0, {-16, -16},{0x5, 0xAF, 0x9E, 0xFF}}},
	{{{-12, -119, -85},0, {-16, -16},{0xAA, 0xAE, 0xD3, 0xFF}}},
	{{{38, -61, -110},0, {-16, -16},{0x4F, 0xDC, 0xA3, 0xFF}}},
	{{{0, -4, -145},0, {-16, -16},{0xEE, 0xF9, 0x82, 0xFF}}},
	{{{42, 77, -122},0, {-16, -16},{0x53, 0x10, 0xA2, 0xFF}}},
	{{{22, 107, -136},0, {-16, -16},{0x3, 0x40, 0x92, 0xFF}}},
	{{{62, 160, -48},0, {-16, -16},{0x48, 0x5D, 0xD0, 0xFF}}},
	{{{72, 142, 0},0, {-16, -16},{0x6B, 0x44, 0x0, 0xFF}}},
	{{{62, 160, 46},0, {-16, -16},{0x48, 0x5D, 0x30, 0xFF}}},
	{{{42, 77, 122},0, {-16, -16},{0x53, 0x10, 0x5E, 0xFF}}},
	{{{22, 107, 136},0, {-16, -16},{0x3, 0x40, 0x6E, 0xFF}}},
	{{{0, -4, 145},0, {-16, -16},{0xEE, 0xF9, 0x7E, 0xFF}}},
	{{{38, -61, 110},0, {-16, -16},{0x4F, 0xDC, 0x5D, 0xFF}}},
	{{{42, 77, 122},0, {-16, -16},{0x53, 0x10, 0x5E, 0xFF}}},
	{{{10, -116, 121},0, {-16, -16},{0x5, 0xAF, 0x62, 0xFF}}},
	{{{29, -156, 0},0, {-16, -16},{0x2B, 0x88, 0x0, 0xFF}}},
	{{{47, -129, 0},0, {-16, -16},{0x56, 0xA2, 0x0, 0xFF}}},
	{{{38, -61, -110},0, {-16, -16},{0x4F, 0xDC, 0xA3, 0xFF}}},
};

Gfx spiny_000_offset_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(5, 1, 4, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 3, 6, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 9, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSP1Triangle(15, 1, 14, 0),
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_0 + 32, 7, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 1, 4, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_002_mesh_layer_1_vtx_1[16] = {
	{{{-44, -66, -39},0, {-16, -16},{0x84, 0xEB, 0xEC, 0xFF}}},
	{{{-18, 49, -118},0, {-16, -16},{0x98, 0x16, 0xBB, 0xFF}}},
	{{{-23, -40, -118},0, {-16, -16},{0x9F, 0xE6, 0xB2, 0xFF}}},
	{{{-46, 72, -40},0, {-16, -16},{0x86, 0x16, 0xE5, 0xFF}}},
	{{{-46, 73, 40},0, {-16, -16},{0x86, 0x17, 0x1A, 0xFF}}},
	{{{-44, -65, 41},0, {-16, -16},{0x84, 0xEC, 0x15, 0xFF}}},
	{{{-31, -119, 0},0, {-16, -16},{0x96, 0xB9, 0x0, 0xFF}}},
	{{{-12, -119, -85},0, {-16, -16},{0xAA, 0xAE, 0xD3, 0xFF}}},
	{{{3, -146, 0},0, {-16, -16},{0xC5, 0x8F, 0x0, 0xFF}}},
	{{{-12, -119, 85},0, {-16, -16},{0xAA, 0xAE, 0x2D, 0xFF}}},
	{{{-23, -40, 118},0, {-16, -16},{0x9F, 0xE6, 0x4E, 0xFF}}},
	{{{-18, 49, 118},0, {-16, -16},{0x98, 0x16, 0x46, 0xFF}}},
	{{{-1, 119, 95},0, {-16, -16},{0xB3, 0x54, 0x38, 0xFF}}},
	{{{-28, 143, 0},0, {-16, -16},{0xA4, 0x58, 0x0, 0xFF}}},
	{{{29, 168, 0},0, {-16, -16},{0xEA, 0x7D, 0x0, 0xFF}}},
	{{{-1, 119, -95},0, {-16, -16},{0xB2, 0x53, 0xC8, 0xFF}}},
};

Gfx spiny_000_offset_002_mesh_layer_1_tri_1[] = {
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(7, 6, 0, 0),
	gsSP1Triangle(7, 0, 2, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(6, 9, 5, 0),
	gsSP1Triangle(5, 9, 10, 0),
	gsSP1Triangle(11, 5, 10, 0),
	gsSP1Triangle(4, 5, 11, 0),
	gsSP1Triangle(11, 12, 4, 0),
	gsSP1Triangle(13, 4, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSP1Triangle(15, 3, 13, 0),
	gsSP1Triangle(15, 1, 3, 0),
	gsSP1Triangle(4, 13, 3, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_002_mesh_layer_1_vtx_2[10] = {
	{{{140, 73, -51},0, {-16, -16},{0x68, 0x2F, 0xC8, 0xFF}}},
	{{{38, -61, -110},0, {-16, -16},{0x4F, 0xDC, 0xA3, 0xFF}}},
	{{{42, 77, -122},0, {-16, -16},{0x53, 0x10, 0xA2, 0xFF}}},
	{{{142, -67, -51},0, {-16, -16},{0x62, 0xC8, 0xC6, 0xFF}}},
	{{{142, -67, 51},0, {-16, -16},{0x62, 0xC8, 0x3A, 0xFF}}},
	{{{140, 73, 51},0, {-16, -16},{0x68, 0x2F, 0x38, 0xFF}}},
	{{{72, 142, 0},0, {-16, -16},{0x6B, 0x44, 0x0, 0xFF}}},
	{{{42, 77, 122},0, {-16, -16},{0x53, 0x10, 0x5E, 0xFF}}},
	{{{38, -61, 110},0, {-16, -16},{0x4F, 0xDC, 0x5D, 0xFF}}},
	{{{47, -129, 0},0, {-16, -16},{0x56, 0xA2, 0x0, 0xFF}}},
};

Gfx spiny_000_offset_002_mesh_layer_1_tri_2[] = {
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_2 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(5, 8, 4, 0),
	gsSP1Triangle(9, 4, 8, 0),
	gsSP1Triangle(3, 4, 9, 0),
	gsSP1Triangle(3, 9, 1, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_002_mesh_layer_1_vtx_3[20] = {
	{{{135, -2, -132},0, {-16, -16},{0x49, 0x0, 0x98, 0xFF}}},
	{{{92, 33, -72},0, {-16, -16},{0x1B, 0x73, 0xD1, 0xFF}}},
	{{{119, -20, -55},0, {-16, -16},{0x71, 0xC7, 0xA, 0xFF}}},
	{{{67, -20, -89},0, {-16, -16},{0xCE, 0xC9, 0x99, 0xFF}}},
	{{{119, -20, 55},0, {-16, -16},{0x72, 0xC8, 0xF6, 0xFF}}},
	{{{135, -2, 135},0, {-16, -16},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{67, -20, 89},0, {-16, -16},{0xCB, 0xC8, 0x65, 0xFF}}},
	{{{92, 33, 72},0, {-16, -16},{0x1B, 0x74, 0x2D, 0xFF}}},
	{{{139, -22, 29},0, {-16, -16},{0x3A, 0xC3, 0x5F, 0xFF}}},
	{{{139, -23, -29},0, {-16, -16},{0x3B, 0xC1, 0xA2, 0xFF}}},
	{{{216, 6, 0},0, {-16, -16},{0x7E, 0x10, 0x0, 0xFF}}},
	{{{139, 30, 0},0, {-16, -16},{0x26, 0x79, 0x0, 0xFF}}},
	{{{120, 85, 29},0, {-16, -16},{0x49, 0xF3, 0x67, 0xFF}}},
	{{{120, 84, -29},0, {-16, -16},{0x4A, 0xF2, 0x99, 0xFF}}},
	{{{172, 146, 0},0, {-16, -16},{0x65, 0x4D, 0x0, 0xFF}}},
	{{{85, 125, 0},0, {-16, -16},{0xE2, 0x7B, 0xFF, 0xFF}}},
	{{{112, -74, -29},0, {-16, -16},{0x50, 0xFD, 0x9D, 0xFF}}},
	{{{112, -75, 29},0, {-16, -16},{0x50, 0xFD, 0x63, 0xFF}}},
	{{{145, -148, 0},0, {-16, -16},{0x4B, 0x99, 0x0, 0xFF}}},
	{{{74, -106, 0},0, {-16, -16},{0xBF, 0x93, 0xFF, 0xFF}}},
};

Gfx spiny_000_offset_002_mesh_layer_1_tri_3[] = {
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_3 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 5, 4, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(spiny_000_offset_002_mesh_layer_1_vtx_3 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_005_mesh_layer_1_vtx_0[13] = {
	{{{57, -31, -27},0, {-16, -16},{0x3C, 0x9F, 0xC8, 0xFF}}},
	{{{0, -15, -14},0, {-16, -16},{0xD5, 0xA1, 0xB7, 0xFF}}},
	{{{0, -1, -19},0, {-16, -16},{0xD5, 0x2, 0x88, 0xFF}}},
	{{{0, -17, 6},0, {-16, -16},{0xDC, 0x90, 0x30, 0xFF}}},
	{{{57, -31, 13},0, {-16, -16},{0x42, 0xA0, 0x34, 0xFF}}},
	{{{57, 27, -27},0, {-16, -16},{0x3D, 0x62, 0xCA, 0xFF}}},
	{{{57, -1, -50},0, {-16, -16},{0x2E, 0x1, 0x8A, 0xFF}}},
	{{{29, -1, -31},0, {-16, -16},{0xC8, 0x1, 0x8E, 0xFF}}},
	{{{0, 11, -14},0, {-16, -16},{0xD5, 0x60, 0xB9, 0xFF}}},
	{{{0, 13, 6},0, {-16, -16},{0xDC, 0x72, 0x2C, 0xFF}}},
	{{{57, 27, 13},0, {-16, -16},{0x42, 0x60, 0x32, 0xFF}}},
	{{{0, -1, 19},0, {-16, -16},{0xDD, 0x3, 0x7A, 0xFF}}},
	{{{57, -1, 31},0, {-16, -16},{0x43, 0x1, 0x6C, 0xFF}}},
};

Gfx spiny_000_offset_005_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_000_offset_005_mesh_layer_1_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(7, 6, 0, 0),
	gsSP1Triangle(2, 7, 0, 0),
	gsSP1Triangle(5, 7, 2, 0),
	gsSP1Triangle(2, 8, 5, 0),
	gsSP1Triangle(5, 8, 9, 0),
	gsSP1Triangle(9, 10, 5, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(4, 12, 11, 0),
	gsSP1Triangle(11, 3, 4, 0),
	gsSP1Triangle(10, 12, 4, 0),
	gsSP1Triangle(5, 10, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_008_mesh_layer_1_vtx_0[13] = {
	{{{-2, 0, 25},0, {-16, -16},{0xDE, 0xFC, 0x7A, 0xFF}}},
	{{{-2, -15, 12},0, {-16, -16},{0xDE, 0x8F, 0x2F, 0xFF}}},
	{{{59, -29, 19},0, {-16, -16},{0x44, 0xA1, 0x33, 0xFF}}},
	{{{59, -29, -23},0, {-16, -16},{0x3E, 0xA0, 0xC9, 0xFF}}},
	{{{-2, -13, -9},0, {-16, -16},{0xD6, 0xA0, 0xB8, 0xFF}}},
	{{{-2, 0, -14},0, {-16, -16},{0xD5, 0xFD, 0x88, 0xFF}}},
	{{{29, 1, -28},0, {-16, -16},{0xC6, 0x0, 0x8F, 0xFF}}},
	{{{58, 32, -23},0, {-16, -16},{0x3B, 0x62, 0xC8, 0xFF}}},
	{{{-2, 15, -9},0, {-16, -16},{0xD4, 0x5E, 0xB6, 0xFF}}},
	{{{-2, 17, 12},0, {-16, -16},{0xDC, 0x6F, 0x33, 0xFF}}},
	{{{58, 32, 19},0, {-16, -16},{0x41, 0x60, 0x34, 0xFF}}},
	{{{58, 1, 38},0, {-16, -16},{0x41, 0x0, 0x6D, 0xFF}}},
	{{{58, 1, -47},0, {-16, -16},{0x2E, 0x0, 0x8A, 0xFF}}},
};

Gfx spiny_000_offset_008_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_000_offset_008_mesh_layer_1_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(10, 9, 0, 0),
	gsSP1Triangle(0, 11, 10, 0),
	gsSP1Triangle(2, 11, 0, 0),
	gsSP1Triangle(10, 11, 2, 0),
	gsSP1Triangle(7, 10, 2, 0),
	gsSP1Triangle(2, 3, 7, 0),
	gsSP1Triangle(3, 12, 7, 0),
	gsSP1Triangle(6, 12, 3, 0),
	gsSP1Triangle(7, 12, 6, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_011_mesh_layer_1_vtx_0[13] = {
	{{{29, -1, 31},0, {-16, -16},{0xC8, 0x1, 0x72, 0xFF}}},
	{{{57, -1, 50},0, {-16, -16},{0xB9, 0x1, 0x69, 0xFF}}},
	{{{57, 27, 27},0, {-16, -16},{0x1F, 0x6C, 0x3C, 0xFF}}},
	{{{57, -31, 27},0, {-16, -16},{0x20, 0x96, 0x3E, 0xFF}}},
	{{{0, -1, 19},0, {-16, -16},{0xD5, 0x2, 0x78, 0xFF}}},
	{{{0, 11, 14},0, {-16, -16},{0xD5, 0x60, 0x47, 0xFF}}},
	{{{0, 13, -6},0, {-16, -16},{0xDC, 0x72, 0xD4, 0xFF}}},
	{{{57, 27, -13},0, {-16, -16},{0x42, 0x60, 0xCE, 0xFF}}},
	{{{57, -31, -13},0, {-16, -16},{0x42, 0xA0, 0xCC, 0xFF}}},
	{{{0, -17, -6},0, {-16, -16},{0xDC, 0x90, 0xD0, 0xFF}}},
	{{{0, -15, 14},0, {-16, -16},{0xD5, 0xA1, 0x49, 0xFF}}},
	{{{0, -1, -19},0, {-16, -16},{0xDD, 0x3, 0x86, 0xFF}}},
	{{{57, -1, -31},0, {-16, -16},{0x43, 0x1, 0x94, 0xFF}}},
};

Gfx spiny_000_offset_011_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_000_offset_011_mesh_layer_1_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(4, 0, 2, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(6, 5, 2, 0),
	gsSP1Triangle(2, 7, 6, 0),
	gsSP1Triangle(8, 7, 2, 0),
	gsSP1Triangle(2, 3, 8, 0),
	gsSP1Triangle(9, 8, 3, 0),
	gsSP1Triangle(3, 10, 9, 0),
	gsSP1Triangle(4, 10, 3, 0),
	gsSP1Triangle(8, 9, 11, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(7, 12, 11, 0),
	gsSP1Triangle(11, 6, 7, 0),
	gsSP1Triangle(8, 12, 7, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_011_mesh_layer_1_vtx_1[3] = {
	{{{57, 27, 27},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{57, -1, 50},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{57, -31, 27},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx spiny_000_offset_011_mesh_layer_1_tri_1[] = {
	gsSPVertex(spiny_000_offset_011_mesh_layer_1_vtx_1 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx spiny_000_offset_014_mesh_layer_1_vtx_0[13] = {
	{{{-2, 0, 14},0, {-16, -16},{0xD5, 0xFD, 0x78, 0xFF}}},
	{{{-2, -13, 9},0, {-16, -16},{0xD6, 0xA0, 0x48, 0xFF}}},
	{{{59, -29, 23},0, {-16, -16},{0x3E, 0xA0, 0x37, 0xFF}}},
	{{{-2, -15, -12},0, {-16, -16},{0xDE, 0x8F, 0xD1, 0xFF}}},
	{{{59, -29, -19},0, {-16, -16},{0x44, 0xA1, 0xCD, 0xFF}}},
	{{{-2, 0, -25},0, {-16, -16},{0xDE, 0xFC, 0x86, 0xFF}}},
	{{{58, 1, -38},0, {-16, -16},{0x41, 0x0, 0x93, 0xFF}}},
	{{{58, 32, -19},0, {-16, -16},{0x41, 0x60, 0xCC, 0xFF}}},
	{{{-2, 17, -12},0, {-16, -16},{0xDC, 0x6F, 0xCD, 0xFF}}},
	{{{58, 32, 23},0, {-16, -16},{0x3B, 0x62, 0x38, 0xFF}}},
	{{{-2, 15, 9},0, {-16, -16},{0xD4, 0x5E, 0x4A, 0xFF}}},
	{{{29, 1, 28},0, {-16, -16},{0xC6, 0x0, 0x71, 0xFF}}},
	{{{58, 1, 47},0, {-16, -16},{0x2E, 0x0, 0x76, 0xFF}}},
};

Gfx spiny_000_offset_014_mesh_layer_1_tri_0[] = {
	gsSPVertex(spiny_000_offset_014_mesh_layer_1_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 0, 0),
	gsSP1Triangle(0, 11, 9, 0),
	gsSP1Triangle(2, 11, 0, 0),
	gsSP1Triangle(2, 12, 11, 0),
	gsSP1Triangle(9, 12, 2, 0),
	gsSP1Triangle(9, 2, 4, 0),
	gsSP1Triangle(4, 7, 9, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSPEndDisplayList(),
};


Gfx mat_spiny_outershell[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spiny_outershell_lights),
	gsSPEndDisplayList(),
};

Gfx mat_spiny_softbody[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spiny_softbody_lights),
	gsSPEndDisplayList(),
};

Gfx mat_spiny_body[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spiny_body_lights),
	gsSPEndDisplayList(),
};

Gfx mat_spiny_spikes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spiny_spikes_lights),
	gsSPEndDisplayList(),
};

Gfx spiny_000_offset_002_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_outershell),
	gsSPDisplayList(spiny_000_offset_002_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_spiny_softbody),
	gsSPDisplayList(spiny_000_offset_002_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_spiny_body),
	gsSPDisplayList(spiny_000_offset_002_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_spiny_spikes),
	gsSPDisplayList(spiny_000_offset_002_mesh_layer_1_tri_3),
	gsSPEndDisplayList(),
};

Gfx spiny_000_offset_005_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_softbody),
	gsSPDisplayList(spiny_000_offset_005_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_000_offset_008_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_softbody),
	gsSPDisplayList(spiny_000_offset_008_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_000_offset_011_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_softbody),
	gsSPDisplayList(spiny_000_offset_011_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_spiny_body),
	gsSPDisplayList(spiny_000_offset_011_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx spiny_000_offset_014_mesh_layer_1[] = {
	gsSPDisplayList(mat_spiny_softbody),
	gsSPDisplayList(spiny_000_offset_014_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spiny_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

