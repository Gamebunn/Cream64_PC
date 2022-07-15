// boo.inc.c

static void amyBoo_stop(void) {
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
    o->oGravity = 0.0f;
}

void bhv_amyBoo_init(void) {
    o->oBooInitialMoveYaw = o->oMoveAngleYaw;
}

static s32 amyBoo_should_be_stopped(void) {
    if (cur_obj_has_behavior(bhvMerryGoRoundBigBoo) || cur_obj_has_behavior(bhvMerryGoRoundBoo)) {
        if (!gMarioOnMerryGoRound) {
            return TRUE;
        } else {
            return FALSE;
        }
    } else {
        if (o->activeFlags & ACTIVE_FLAG_IN_DIFFERENT_ROOM) {
            return TRUE;
        }

        if (o->oRoom == 10 && (gTimeStopState & TIME_STOP_MARIO_OPENED_DOOR)) {
            return TRUE;
        }
    }

    return FALSE;
}

static s32 amyBoo_should_be_active(void) {
    f32 activationRadius;

    if (cur_obj_has_behavior(bhvBalconyBigBoo)) {
        activationRadius = 5000.0f;
    } else {
        activationRadius = 1500.0f;
    }

    if (cur_obj_has_behavior(bhvMerryGoRoundBigBoo) || cur_obj_has_behavior(bhvMerryGoRoundBoo)) {
        if (gMarioOnMerryGoRound == TRUE) {
            return TRUE;
        } else {
            return FALSE;
        }
    } else if (o->oRoom == -1) {
        if (o->oDistanceToMario < activationRadius) {
            return TRUE;
        }
    } else if (!boo_should_be_stopped()) {
        if (o->oDistanceToMario < activationRadius
            && (o->oRoom == gMarioCurrentRoom || gMarioCurrentRoom == 0)) {
            return TRUE;
        }
    }

    return FALSE;
}


static void amyBoo_approach_target_opacity_and_update_scale(void)
{
	//Sorry nothing
}

static void amyBoo_oscillate(s32 ignoreOpacity) {
    o->oFaceAnglePitch = sins(o->oBooOscillationTimer) * 0x400;

    if (o->oOpacity == 255 || ignoreOpacity == TRUE) {
        o->header.gfx.scale[0] = sins(o->oBooOscillationTimer) * 0.08 + o->oBooBaseScale;
        o->header.gfx.scale[1] = -sins(o->oBooOscillationTimer) * 0.08 + o->oBooBaseScale;
        o->header.gfx.scale[2] = o->header.gfx.scale[0];
        o->oGravity = sins(o->oBooOscillationTimer) * o->oBooBaseScale;
        o->oBooOscillationTimer += 0x400;
    }
}

static s32 amyBoo_vanish_or_appear(void) {
    s16 relativeAngleToMario = abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw);
    s16 relativeMarioFaceAngle = abs_angle_diff(o->oMoveAngleYaw, gMarioObject->oFaceAngleYaw);
    // magic?
    s16 relativeAngleToMarioThreshhold = 0x1568;
    s16 relativeMarioFaceAngleThreshhold = 0x6B58;
    s32 doneAppearing = FALSE;

    return 1;

    o->oVelY = 0.0f;

    if (relativeAngleToMario > relativeAngleToMarioThreshhold
        || relativeMarioFaceAngle < relativeMarioFaceAngleThreshhold) {
        if (o->oOpacity == 40) {
            o->oBooTargetOpacity = 255;
            cur_obj_play_sound_2(SOUND_OBJ_BOO_LAUGH_LONG);
        }

        if (o->oOpacity > 180) {
            doneAppearing = TRUE;
        }
    } else if (o->oOpacity == 255) {
        o->oBooTargetOpacity = 40;
    }

    return doneAppearing;
}

static void amyBoo_set_move_yaw_for_during_hit(s32 hurt) {
    cur_obj_become_intangible();

    o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    o->oBooMoveYawBeforeHit = (f32) o->oMoveAngleYaw;

    if (hurt) {
        o->oBooMoveYawDuringHit = gMarioObject->oMoveAngleYaw;
    } else if (coss((s16) o->oMoveAngleYaw - (s16) o->oAngleToMario) < 0.0f) {
        o->oBooMoveYawDuringHit = o->oMoveAngleYaw;
    } else {
        o->oBooMoveYawDuringHit = (s16)(o->oMoveAngleYaw + 0x8000);
    }
}

static void amyBoo_move_during_hit(s32 roll, f32 fVel) {
    // Boos seem to have been supposed to oscillate up then down then back again
    // when hit. However it seems the programmers forgot to scale the cosine,
    // so the Y velocity goes from 1 to -1 and back to 1 over 32 frames.
    // This is such a small change that the Y position only changes by 5 units.
    // It's completely unnoticable in-game.
    s32 oscillationVel = o->oTimer * 0x800 + 0x800;

    o->oForwardVel = fVel;
#if QOL_FIX_BOO_MOVE_HIT_VELOCITY
    o->oVelY = coss(oscillationVel) * 5;
#else
    o->oVelY = coss(oscillationVel);
#endif
    o->oMoveAngleYaw = o->oBooMoveYawDuringHit;

    if (roll) {
        o->oFaceAngleYaw  += sBooHitRotations[o->oTimer];
        o->oFaceAngleRoll += sBooHitRotations[o->oTimer];
    }
}

static void big_amyBoo_shake_after_hit(void) {
    // Oscillate yaw
    s32 oscillationVel = o->oTimer * 0x2000 - 0x3E000;
    o->oFaceAngleYaw += coss(oscillationVel) * 0x400;
}

static void amyBoo_reset_after_hit(void) {
    o->oMoveAngleYaw = o->oBooMoveYawBeforeHit;
    o->oFlags |= OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
    o->oInteractStatus = 0;
}

// called iff boo/big boo/cage boo is in action 2, which only occurs if it was non-attack-ly interacted with/bounced on?
static s32 amyBoo_update_after_bounced_on(f32 a0) {
    amyBoo_stop();

    if (o->oTimer == 0) {
        amyBoo_set_move_yaw_for_during_hit(FALSE);
    }

    if (o->oTimer < 32) {
        amyBoo_move_during_hit(FALSE, sBooHitRotations[o->oTimer] / 5000.0f * a0);
    } else {
        cur_obj_become_tangible();
        amyBoo_reset_after_hit();
        o->oAction = 1;

        return TRUE;
    }

    return FALSE;
}


static s32 amyBoo_get_attack_status(void) {
    s32 attackStatus = BOO_NOT_ATTACKED;

    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        if ((o->oInteractStatus & INT_STATUS_WAS_ATTACKED)
            && !obj_has_attack_type(ATTACK_FROM_ABOVE)) {
            //cur_obj_become_intangible();

            //o->oInteractStatus = 0;

            //cur_obj_play_sound_2(SOUND_OBJ_BOO_LAUGH_SHORT);

            //attackStatus = BOO_ATTACKED;

            cur_obj_play_sound_2(SOUND_OBJ_BOO_BOUNCE_TOP);

            o->oInteractStatus = 0;

            attackStatus = BOO_BOUNCED_ON;

        } else {
            cur_obj_play_sound_2(SOUND_OBJ_BOO_BOUNCE_TOP);

            o->oInteractStatus = 0;

            attackStatus = BOO_BOUNCED_ON;
        }
    }

    return attackStatus;
}

// boo idle/chasing movement?
static void amyBoo_chase_mario(f32 a0, s16 turnSpeed, f32 velMultiplier) {
    f32 dy;
    s16 targetYaw;

    if (amyBoo_vanish_or_appear()) {
        o->oInteractType = INTERACT_BOUNCE_TOP;

        if (cur_obj_lateral_dist_from_mario_to_home() > 1500.0f) {
            targetYaw = cur_obj_angle_to_home();
        } else {
            targetYaw = o->oAngleToMario;
        }

        cur_obj_rotate_yaw_toward(targetYaw, turnSpeed);
        o->oVelY = 0.0f;

        if (!mario_is_in_air_action()) {
            dy = o->oPosY - gMarioObject->oPosY;
            if (a0 < dy && dy < 500.0f) {
                o->oVelY = increment_velocity_toward_range(
                               o->oPosY, gMarioObject->oPosY + 50.0f, 10.0f, 2.0f);
            }
        }

        cur_obj_set_vel_from_mario_vel(10.0f - o->oBooNegatedAggressiveness, velMultiplier);

        if (o->oForwardVel != 0.0f) {
            amyBoo_oscillate(FALSE);
        }
    } else {
        o->oInteractType = 0;
        // why is boo_stop not used here
        o->oForwardVel = 0.0f;
        o->oVelY = 0.0f;
        o->oGravity = 0.0f;
    }
}

static void amyBoo_act_0(void) {
    o->activeFlags |= ACTIVE_FLAG_MOVE_THROUGH_GRATE;

    if (o->oBhvParams2ndByte == BOO_BP_MERRY_GO_ROUND) {
        o->oRoom = 10;
    }

    cur_obj_set_pos_to_home();
    o->oMoveAngleYaw = o->oBooInitialMoveYaw;
    amyBoo_stop();

    o->oBooParentBigBoo = cur_obj_nearest_object_with_behavior(bhvGhostHuntBigBoo);
    o->oBooBaseScale = 1.0f;
    o->oBooTargetOpacity = 255;

    if (amyBoo_should_be_active()) {
        // Condition is met if the object is bhvBalconyBigBoo or bhvMerryGoRoundBoo
        if (o->oBhvParams2ndByte == BOO_BP_MERRY_GO_ROUND) {
            o->oBooParentBigBoo = NULL;
            o->oAction = 5;
        } else {
            o->oAction = 1;
        }
    }
}

static void amyBoo_act_5(void) {
    if (o->oTimer < 30) {
        o->oVelY = 0.0f;
        o->oForwardVel = 13.0f;
        amyBoo_oscillate(FALSE);
        o->oWallHitboxRadius = 0.0f;
    } else {
        o->oAction = 1;
        o->oWallHitboxRadius = 30.0f;
    }
}

static void amyBoo_act_1(void) {
    s32 attackStatus;

    if (o->oTimer == 0) {
        o->oBooNegatedAggressiveness = -random_float() * 5.0f;
        o->oBooTurningSpeed = (s32)(random_float() * 128.0f);
    }

    amyBoo_chase_mario(-100.0f, o->oBooTurningSpeed + 0x180, 0.5f);

    attackStatus = amyBoo_get_attack_status();

    if (amyBoo_should_be_stopped()) {
        o->oAction = 0;
    }

    if (attackStatus == BOO_BOUNCED_ON) {
        o->oAction = 2;
    }

    if (attackStatus == BOO_ATTACKED) {
        o->oAction = 3;
    }

    if (attackStatus == BOO_ATTACKED) {
        create_sound_spawner(SOUND_OBJ_DYING_ENEMY1);
    }
}

static void amyBoo_act_2(void) {
    if (amyBoo_update_after_bounced_on(20.0f)) {
        o->oAction = 1;
    }
}

static void amyBoo_act_3(void)
{

}

// Called when a Go on a Ghost Hunt boo dies
static void amyBoo_act_4(void) {
    s32 dialogID;

    // If there are no remaining "minion" boos, show the dialog of the Big Boo
    if (cur_obj_nearest_object_with_behavior(bhvGhostHuntBoo) == NULL) {
        dialogID = DIALOG_108;
    } else {
        dialogID = DIALOG_107;
    }

    if (cur_obj_update_dialog(MARIO_DIALOG_LOOK_UP, DIALOG_FLAG_TEXT_DEFAULT, dialogID, 0)) {
        create_sound_spawner(SOUND_OBJ_DYING_ENEMY1);
        obj_mark_for_deletion(o);

        if (dialogID == DIALOG_108) { // If the Big Boo should spawn, play the jingle
            play_puzzle_jingle();
        }
    }
}

static void (*sAmyBooActions[])(void) = {
    amyBoo_act_0,
    amyBoo_act_1,
    amyBoo_act_2,
    amyBoo_act_3,
    amyBoo_act_4,
    amyBoo_act_5,
};

void bhv_amyBoo_loop(void) {
    //PARTIAL_UPDATE

	printf("LE GFX IS %x", o->header.gfx);

    cur_obj_update_floor_and_walls();
    cur_obj_call_action_function(sAmyBooActions);
    cur_obj_move_standard(78);
    amyBoo_approach_target_opacity_and_update_scale();


    o->oInteractStatus = 0;
}



