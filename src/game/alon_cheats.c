#include "texscroll.h"
#include <ultra64.h>
#include <stdbool.h>
#include <stdio.h>

#include "sm64.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "audio/external.h"
#include "level_update.h"
#include "game_init.h"
#include "level_update.h"
#include "main.h"
#include "engine/math_util.h"
#include "engine/graph_node.h"
#include "area.h"
#include "save_file.h"
#include "sound_init.h"
#include "mario.h"
#include "camera.h"
#include "object_list_processor.h"
#include "ingame_menu.h"
#include "obj_behaviors.h"
#include "save_file.h"
#include "debug_course.h"
#ifdef VERSION_EU
#include "memory.h"
#include "eu_translation.h"
#include "segment_symbols.h"
#endif
#include "level_table.h"
#include "course_table.h"
#include "../../include/libc/stdlib.h"

#include "pc/pc_main.h"
#include "pc/cliopts.h"
#include "pc/configfile.h"
#include "pc/controller/controller_keyboard.h"

#include "behavior_data.h"

static u8 cheat_progress;
static u8 cheat_timeout;

////////////////////////////////////////////////////////////////////
/// Press ABBAZA to get 99 rings if you have less than 99 currently
/// = Credit: AlonWoof
//////////////////////////////////////////////////////////////////////

u8 alon_cheat_badbuttonCheck()
{
	u8 ret = FALSE;

	//Don't touch ANYTHING

	if(gPlayer1Controller->buttonPressed & A_BUTTON)
		ret = TRUE;

	if(gPlayer1Controller->buttonPressed & B_BUTTON)
		ret = TRUE;
	
	if(gPlayer1Controller->buttonPressed & Z_TRIG)
		ret = TRUE;

	if(gPlayer1Controller->buttonPressed & L_TRIG)
		ret = TRUE;

	if(gPlayer1Controller->buttonPressed & R_TRIG)
		ret = TRUE;		
	
	return ret;
}

void alon_cheat_99_rings()
{

	switch(cheat_progress)
	{
		case 0:
			if(gPlayer1Controller->buttonPressed & A_BUTTON)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;

		case 1:
			if(gPlayer1Controller->buttonPressed & B_BUTTON)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;

		case 2:
			if(gPlayer1Controller->buttonPressed & B_BUTTON)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;

		case 3:
			if(gPlayer1Controller->buttonPressed & A_BUTTON)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;	

		case 4:
			if(gPlayer1Controller->buttonPressed & Z_TRIG)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;

		case 5:
			if(gPlayer1Controller->buttonPressed & A_BUTTON)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;

			case 6:
			if(gPlayer1Controller->buttonPressed & Z_TRIG)
			{
				cheat_progress++;
				cheat_timeout = 30;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}
			break;

		case 7:
			if(gPlayer1Controller->buttonPressed & A_BUTTON)
			{
				if(gMarioState->numCoins < 99)
				{
					gMarioState->numCoins = 99;
					gHudDisplay.coins = 99;
					
				}
				play_sound(SOUND_MENU_CHEATCODE, gMarioState->marioObj->header.gfx.cameraToObject);

				cheat_progress = 0;
			}
			else if(alon_cheat_badbuttonCheck())
			{
				cheat_progress = 0;
			}

			break;	

		default:
			cheat_progress = 0;
	}

	if(cheat_timeout > 0)
	{
		cheat_timeout--;
	}
	else
	{
		cheat_progress = 0;
	}

}

void alon_cheats_update()
{
	alon_cheat_99_rings();

}