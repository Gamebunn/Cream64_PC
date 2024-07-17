// cheese_follow.c.inc


void bhv_cheese_follow_init(void) {

    gCheeseObject = o;
    o->oButterflyYPhase = random_float() * 10.0f;
    o->header.gfx.animInfo.animFrame = random_float() * 7.0f;
    o->oHomeX = o->oPosX;
    o->oHomeY = o->oPosY;
    o->oHomeZ = o->oPosZ;

    o->oPosX = gMarioObject->oPosX;
    o->oPosY = gMarioObject->oPosY;
    o->oPosZ = gMarioObject->oPosZ;

    cur_obj_scale(0.75f);
}

void bhv_cheese_act_follow_mario(void) {

  //The "hide cheese" flag
    if(o->unused2)
        cur_obj_scale(0.0f);
    else
        cur_obj_scale(0.75f);

	float offset = (sinf(((double)gGlobalTimer * 0.1f)) * 20.0f);

	o->oPosY = (o->oPosY * (1.0 - 0.5f)) + ((gMarioState->pos[1] + 100.0f + offset) * 0.5f);

	o->oDistanceToMario = lateral_dist_between_objects(gMarioObject, o);

	if (o->oDistanceToMario > 200.0f)
	{
	  o->oMoveAngleYaw = o->oAngleToMario;
	  o->oForwardVel = o->oDistanceToMario/15.0f;


	}
	else
	{
		o->oForwardVel *= 0.75f;
	}

	o->oFaceAngleYaw = o->oAngleToMario;
	cur_obj_move_xz_using_fvel_and_yaw();

	/*

    */

	switch (gMarioState->currentCostume) {
  case 0: o->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_CHEESE_FOLLOW]; break;
  case 1: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_RIDERS]; break;
  case 2: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_WINTER]; break;
  case 3: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SPRING]; break;
  case 4: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_UNICORN]; break;
  case 5: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_YUKATA]; break;
  case 6: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SWIMSUIT]; break;
  case 7: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_HALLOWEEN]; break;
  case 8: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_JUNIHITOE]; break;
  case 9: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_PRINCESS]; break;
  case 10: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DETECTIVE]; break;
  case 11: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DRUMMER]; break;
  case 12: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LUNAR]; break;

  case 13: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CHOCOLA]; break;
  case 14: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_AMY]; break;
  case 15: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_BLAZE]; break;
  case 16: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MARINE]; break;
  case 17: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SHADOW]; break;
  case 18: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SILVER]; break;
  case 19: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_TAILS]; break;
  case 20: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CHARMY]; break;
  case 21: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_TIKAL]; break;
  case 22: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_COSMO]; break;
  case 23: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_EGGMAN]; break;
  case 24: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_BEAN]; break;
  case 25: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_NIGHTS]; break;

  case 26: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MARIO]; break;
  case 27: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DAISY]; break;
  case 28: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KLONOA]; break;
  case 29: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_ENGIE]; break;
  case 30: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_ICHIBAN]; break;
  case 31: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_TRAVIS]; break; 
  case 32: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_JACK]; break;
  case 33: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SFSAKURA]; break;
  case 34: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DUDLEY]; break;
  case 35: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LUKE]; break;
  case 36: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_ROLL]; break;
  case 37: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MMX]; break;
  case 38: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LAN]; break; 
  case 39: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_VIRGIL]; break;
  case 40: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_TERRY]; break;
  case 41: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MARIA]; break;
  case 42: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_RICHTER]; break; 
  case 43: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CHARLOTTE]; break; 
  case 44: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_GOEMON]; break; 
  case 45: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MIMI]; break;
  case 46: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_OUENDAN]; break;
  case 47: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_PEPPINO]; break; 
  case 48: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_AVGN]; break; 
  case 49: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SORA]; break; 
  case 50: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KAIRI]; break;
  case 51: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_PARAPPA]; break;
  case 52: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_VANNY]; break;
  case 53: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MADOTSUKI]; break;
  case 54: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_ARLE]; break;
  case 55: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DAWN]; break;
  case 56: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SERENA]; break;
  case 57: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_HERO]; break;
  case 58: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MAGE]; break;
  case 59: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SYBIL]; break;
  case 60: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MIKU]; break;
  case 61: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_WONDER]; break;
  case 62: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SENA]; break;
  case 63: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_OLIMAR]; break;
  case 64: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_PIT]; break;
  case 65: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_RIBBON]; break;
  case 66: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_RUKIA]; break;
  case 67: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KARIYA]; break;
  case 68: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LUFFY]; break;
  case 69: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CARROT]; break; 
  case 70: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_GOKU]; break;
  case 71: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_PAN]; break;  
  case 72: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_ANYA]; break;
  case 73: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_NEZUKO]; break;
  case 74: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_YUGI]; break;
  case 75: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CREAM]; break;
  case 76: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SAKURA]; break;
  case 77: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_AUSTIN]; break;
  case 78: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_POMNI]; break;

  case 79: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CREAMOCCHIA]; break;
  case 80: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LATINA]; break;
  case 81: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CHEF]; break;
  case 82: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_VAL]; break;
  case 83: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_TAMMIE]; break;
  case 84: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CACEE]; break;
  case 85: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KATE]; break;
  case 86: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KZ]; break;
  case 87: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_BAIT]; break;
  case 88: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_WIZ]; break;
  case 89: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LILY]; break;
  case 90: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE]; break;
  case 91: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_POCKY]; break;
  case 92: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_PASTEL]; break;
  case 93: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DINA]; break;
  case 94: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MACER]; break;
  case 95: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_MAGENTA]; break;
  case 96: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_SWEET]; break;
  case 97: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_CRESCENTFOX]; break;
  case 98: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DANI]; break;
  case 99: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_JOHNNY]; break;
  case 100: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_DOT]; break;
  
  case 101: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KITTEN]; break;
  case 102: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_LAYLA]; break;
  case 103: o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_CHEESE_FOLLOW_KATALINA]; break;
    }
	
}

/**if cheese_distance_to_cream > rest_distance { cheese_velocity = cheese_velocity * your_too_slow_boost_value } else if cheese_distance-to_cream < rest_distance { cheese_velocity = -cheese_velocity * woah_nelly_boost_vale } else { cheese_velocity = 0 }
cheese_position += cheese_velocity 

there that should start to work
if you want them to accelerate faster try doing something like 
multiplying cheese_velocity = cheese_velocity*acceleration_amount + ...
you'll have to ask the other guys for how to fill in the values like direction-from_cheese_to_cream or getting cheese_velocity
but stuff like the *_boost_value and acceleration_amount are the values you can play with and set as you like
gotta go, gl hf dd
**/
