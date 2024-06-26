static const s16 gremlin_anim_sm64_anim_values[] = {
	0x0000, 0x0030, 0x0005, 0x0000, 0x3FFF, 0x0000, 0x0000, 0x0000, 0x4F2C, 
	0x4D96, 0x4AA5, 0x490F, 0x49F9, 0x4C01, 0x4E16, 0x4F29, 0x0000, 0xFFFF, 
	0x0000, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0xF697, 0xF7A6, 0xF99C, 0xFAAB, 
	0xFA0F, 0xF8B4, 0xF750, 0xF699, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 
	0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 
	0x0000, 0xFFFF, 0xF697, 0xF7A6, 0xF99C, 0xFAAB, 0xFA0F, 0xF8B4, 0xF750, 
	0xF699, 0xA059, 0xA059, 0xA059, 0xA059, 0xA059, 0xA059, 0xA05A, 0xC000, 
	0xE057, 0xE057, 0xE057, 0xE056, 0xE056, 0xE056, 0xE055, 0xFFFF, 0xFFFF, 
	0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x1FFF, 0x151E, 0x00EA, 0xF608, 
	0xFC4E, 0x0A3F, 0x188E, 0x1FEC, 0x5FB0, 0x5FB0, 0x5FA2, 0x5FA3, 0x5FB0, 
	0x5FA3, 0x5FB0, 0x5FA2, 0x3FFF, 0xE060, 0xE060, 0xE053, 0xE053, 0xE060, 
	0xE053, 0xE060, 0xE052, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 
	0x1FFF, 0x1611, 0x03A1, 0xF9B3, 0xFF6C, 0x0C26, 0x1935, 0x1FEE, 
};

static const u16 gremlin_anim_sm64_anim_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007, 0x0008, 0x0008, 
	0x0008, 0x0010, 0x0008, 0x0018, 0x0008, 0x0020, 0x0008, 0x0028, 0x0008, 
	0x0030, 0x0008, 0x0038, 0x0007, 0x0040, 0x0001, 0x0047, 0x0007, 0x0048, 
	0x0008, 0x004F, 0x0008, 0x0057, 0x0008, 0x005F, 0x0008, 0x0067, 0x0001, 
	0x006F, 0x0008, 0x0070, 0x0008, 0x0078, 0x0007, 0x0080, 0x0008, 0x0087, 
	
};

static const struct Animation gremlin_anim_sm64_anim = {
	0,
	0,
	0,
	1,
	7,
	ANIMINDEX_NUMPARTS(gremlin_anim_sm64_anim_indices),
	gremlin_anim_sm64_anim_values,
	gremlin_anim_sm64_anim_indices,
	0,
};

