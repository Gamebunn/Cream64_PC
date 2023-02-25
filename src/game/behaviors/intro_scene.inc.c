// intro_scene.inc.c

void spawn_child_obj_relative(struct Object *parent, s16 xOffset, s16 yOffset, s16 zOffset,
                              s16 pitchOffset, s16 yawOffset, s16 rollOffset,
                              s16 forwardVel, ModelID32 model, const BehaviorScript *behavior) {
    struct Object *obj = spawn_object(parent, model, behavior);

    obj->header.gfx.animInfo.animFrame = random_float() * 6.0f;
    obj->oEndBirdUnk104 = sCutsceneVars[9].point[0];

    sCutsceneVars[9].point[0] += 1.0f;

    obj->oPosX += xOffset;
    obj->oPosY += yOffset;

    if (gCutsceneTimer > 700) {
        obj->oPosY += -150.0f;
    }

    obj->oPosZ += zOffset;
    obj->oMoveAnglePitch += pitchOffset;
    obj->oMoveAngleYaw += yawOffset;
    obj->oMoveAngleRoll += rollOffset;
    obj->oForwardVel = forwardVel;
}

void bhv_intro_scene_loop(void) {
    UNUSED struct Object *obj;
    UNUSED struct Object *obj2;

    if (gCutsceneObjSpawn != 0) {
        o->oPosX = gCamera->pos[0];
        o->oPosY = gCamera->pos[1];
        o->oPosZ = gCamera->pos[2];

        o->oMoveAnglePitch = 0;
        o->oMoveAngleYaw = 0;

        switch (gCutsceneObjSpawn) {
            case 6:
                obj = spawn_object(o, MODEL_LAKITU, bhvBeginningLakitu);
                break;

            case 5:
                obj2 = spawn_object(o, MODEL_PEACH, bhvBeginningPeach);
                break;

            case 7:
                spawn_child_obj_relative(
                    o, 0, 205, 500, 0x1000, 0x6000, -0x1E00, 25, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, 0, 205, 800, 0x1800, 0x6000, -0x1400, 35, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, -100, 300, 500, 0x800, 0x6000, 0, 25, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, 100, -200, 800, 0, 0x4000, 0x1400, 45, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, -80, 300, 350, 0x1800, 0x5000, 0xA00, 35, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, -300, 300, 500, 0x800, 0x6000, 0x2800, 25, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, -400, -200, 800, 0, 0x4000, -0x1400, 45, MODEL_BIRDS, bhvEndBirds1);
                break;

            case 9:
                spawn_child_obj_relative(
                    o, 50, 205, 500, 0x1000, 0x6000, 0, 35, MODEL_BIRDS, bhvEndBirds1);
                spawn_child_obj_relative(
                    o, 0, 285, 800, 0x1800, 0x6000, 0, 35, MODEL_BIRDS, bhvEndBirds1);
                break;

            case 8:
                spawn_child_obj_relative(
                    o, -100, -100, -700, 0, 0, -0xF00, 25, MODEL_BIRDS, bhvEndBirds2);
                spawn_child_obj_relative(
                    o, -250, 255, -200, 0, 0, -0x1400, 25, MODEL_BIRDS, bhvEndBirds2);
                spawn_child_obj_relative(
                    o, -100, 155, -600, 0, 0, -0x500, 35, MODEL_BIRDS, bhvEndBirds2);
                spawn_child_obj_relative(
                    o, 250, 200, -1200, 0, 0, -0x700, 25, MODEL_BIRDS, bhvEndBirds2);
                spawn_child_obj_relative(
                    o, -250, 255, -700, 0, 0, 0, 25, MODEL_BIRDS, bhvEndBirds2);
                break;
        }

        gCutsceneObjSpawn = 0;
    }

    switch (gMarioState->currentCostume) {
    case 0: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 1: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 2: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 3: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 4: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 5: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 6: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 7: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 8: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH_VANILLA]; break;
    case 9: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 10: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 11: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 12: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 13: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 14: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 15: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 16: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 17: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 18: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 19: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 20: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 21: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 22: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 23: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 24: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 25: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 26: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 27: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 28: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 29: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 30: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 31: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 32: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 33: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 34: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 35: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 36: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 37: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 38: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 39: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 40: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 41: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 42: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 43: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 44: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 45: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 46: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 47: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH_CREAMOCCHIA]; break;
    case 48: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 49: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 50: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 51: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 52: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 53: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 54: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 55: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 56: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 57: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 58: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 59: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 60: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH]; break;
    case 61: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH_JACK]; break;
    case 62: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH_MARK]; break;
    case 63: obj2->header.gfx.sharedChild = gLoadedGraphNodes [MODEL_PEACH_MARK]; break;
    }
    
}
