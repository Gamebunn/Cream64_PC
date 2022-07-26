Gfx *geo_switch_amy_face(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
    s32 timer;

    if (run == TRUE) {
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
        switchCase->selectedCase = 0;

        // timer logic for blinking. uses cases 0-2.
        timer = gGlobalTimer % 50;
        if (timer < 43)
            switchCase->selectedCase = 0;
        else if (timer < 45)
            switchCase->selectedCase = 2;
        else if (timer < 47)
            switchCase->selectedCase = 3;
        else
            switchCase->selectedCase = 2;

        if(gCurrLevelNum == LEVEL_SSL)
            switchCase->selectedCase = 6;

        if(gCurrLevelNum == LEVEL_TTC)
        {
            if(gCurrActNum == 1)
                switchCase->selectedCase = 8;
        }

        if(gCurrLevelNum == LEVEL_BBH)
        {
            if(gCurrActNum == 2 || gCurrActNum == 3 || gCurrActNum == 5 || gCurrActNum == 6)
                switchCase->selectedCase = 4;
            if(gCurrActNum == 4)
                switchCase->selectedCase = 5;
        }

        if(gCurrLevelNum == LEVEL_WDW)
            switchCase->selectedCase = 7;
    }
    return NULL;
}

Gfx *geo_switch_marine_face(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
    s32 timer;

    if (run == TRUE) {
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
        switchCase->selectedCase = 0;

        // timer logic for blinking. uses cases 0-2.
        timer = gGlobalTimer % 50;
        if (timer < 43)
            switchCase->selectedCase = 0;
        else if (timer < 45)
            switchCase->selectedCase = 1;
        else if (timer < 47)
            switchCase->selectedCase = 2;
        else
            switchCase->selectedCase = 1;

        if(gCurrLevelNum == LEVEL_HMC)
            switchCase->selectedCase = 3;

        if(gCurrLevelNum == LEVEL_RR)
            switchCase->selectedCase = 4;
    }
    return NULL;
}

Gfx *geo_switch_blaze_face(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
    s32 timer;

    if (run == TRUE) {
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
        switchCase->selectedCase = 0;

        // timer logic for blinking. uses cases 0-2.
        timer = gGlobalTimer % 50;
        if (timer < 43)
            switchCase->selectedCase = 0;
        else if (timer < 45)
            switchCase->selectedCase = 1;
        else if (timer < 47)
            switchCase->selectedCase = 2;
        else
            switchCase->selectedCase = 1;

        if(gCurrLevelNum == LEVEL_DDD)
            switchCase->selectedCase = 3;

        if(gCurrLevelNum == LEVEL_RR)
        {
            if(gCurrActNum == 1 || gCurrActNum == 2 || gCurrActNum == 3)
                switchCase->selectedCase = 1;
            if(gCurrActNum == 4 || gCurrActNum == 5 || gCurrActNum == 6)
                switchCase->selectedCase = 4;
        }
    }
    return NULL;
}

Gfx *geo_switch_tails_face(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
    s32 timer;

    if (run == TRUE) {
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
        switchCase->selectedCase = 0;

        // timer logic for blinking. uses cases 0-2.
        timer = gGlobalTimer % 50;
        if (timer < 43)
            switchCase->selectedCase = 0;
        else if (timer < 45)
            switchCase->selectedCase = 1;
        else if (timer < 47)
            switchCase->selectedCase = 2;
        else
            switchCase->selectedCase = 1;

        if(gCurrLevelNum == LEVEL_WMOTR)
            switchCase->selectedCase = 3;
    }
    return NULL;
}

Gfx *geo_switch_npc_face(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
    s32 timer;

    if (run == TRUE) {
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
        switchCase->selectedCase = 0;

        // timer logic for blinking. uses cases 0-2.
        timer = gGlobalTimer % 50;
        if (timer < 43)
            switchCase->selectedCase = 0;
        else if (timer < 45)
            switchCase->selectedCase = 1;
        else if (timer < 47)
            switchCase->selectedCase = 2;
        else
            switchCase->selectedCase = 1;
    }
    return NULL;
}

