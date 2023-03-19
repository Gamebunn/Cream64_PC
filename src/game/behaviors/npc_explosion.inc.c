#include <stdio.h>

extern s16 gDialogTextPos;

void bhv_hocus_explode_loop(void)
{
    if(o->oSubAction == 95)
    {
        struct Object *explosion;
        explosion = spawn_object(gCurrentObject, MODEL_EXPLOSION, bhvExplosion);
        explosion->oGraphYOffset += 100.0f;
        bobomb_spawn_coin();
        gCurrentObject->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oSubAction++;
    }

    if(o->oSubAction > 1 && o->oSubAction < 95)
    {
        o->oSubAction++;
    }

    if(o->oSubAction == 3)
    {
        cur_obj_init_animation_and_anim_frame(HOCUS_MAGIC, 0);
        play_sound(SOUND_GENERAL_PRESTO, gGlobalSoundSource);
    }

    if (o->oSubAction == 0)
    {
        if (cur_obj_can_mario_activate_textbox_2(1000.0f, 200.0f) && gMarioState->input & (INPUT_B_PRESSED | INPUT_A_PRESSED))
        {
            cur_obj_play_sound_2(SOUND_MENU_READ_A_SIGN);
            o->oSubAction++;
        }
    }
    else if (o->oSubAction == 1)
    {
        //printf("gDialogTextPos: %i \n",gDialogTextPos);
        //create_sound_spawner(SOUND_GENERAL2_BOBOMB_EXPLOSION);

        if(cur_obj_update_dialog_with_cutscene(3, 1, CUTSCENE_DIALOG, WP_003))
            o->oSubAction++;
    }


}

void bhv_hocus_explode_init(void)
{

}

void bhv_tails_explode_loop(void) 

{
    /*if(o->oSubAction == 55)
    {
        struct Object *explosion;
        explosion = spawn_object(gCurrentObject, MODEL_EXPLOSION, bhvExplosion);
        explosion->oGraphYOffset += 100.0f;
        bobomb_spawn_coin();
        gCurrentObject->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oSubAction++;
    }*/

    if(o->oSubAction > 1 && o->oSubAction < 55)
    {
        o->oSubAction++;
    }

    if(o->oSubAction == 3)
    {
        cur_obj_init_animation_and_anim_frame(TAILS_HAPPY, 0);
            
    }

    if (o->oSubAction == 0)
    {
        if (cur_obj_can_mario_activate_textbox_2(200.0f, 200.0f) && gMarioState->input & (INPUT_B_PRESSED | INPUT_A_PRESSED))
        {
            cur_obj_play_sound_2(SOUND_MENU_READ_A_SIGN);
            o->oSubAction++;
        }
    }
    else if (o->oSubAction == 1)
    {
        //printf("gDialogTextPos: %i \n",gDialogTextPos);
        //create_sound_spawner(SOUND_GENERAL2_BOBOMB_EXPLOSION);

        if(cur_obj_update_dialog_with_cutscene(3, 1, CUTSCENE_DIALOG, NTM_001))
            o->oSubAction++;
    }


}

void bhv_tails_explode_init(void)
{

}

void bhv_amy_explode_loop(void) 

{
    
    if(o->oSubAction == 3)
    {
        //struct Object *explosion;
        spawn_mist_particles();
        cur_obj_play_sound_2(SOUND_OBJ2_SCUTTLEBUG_ALERT);
        bobomb_spawn_coin();
        gCurrentObject->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oSubAction++;
    }

    if(o->oSubAction > 1 && o->oSubAction < 3)
    {
        o->oSubAction++;
    }

    if (o->oSubAction == 0)
    {
        if (cur_obj_can_mario_activate_textbox_2(200.0f, 200.0f) && gMarioState->input & (INPUT_B_PRESSED | INPUT_A_PRESSED))
        {
            cur_obj_play_sound_2(SOUND_MENU_READ_A_SIGN);
            o->oSubAction++;
        }
    }
    else if (o->oSubAction == 1)
    {
        //printf("gDialogTextPos: %i \n",gDialogTextPos);
        //create_sound_spawner(SOUND_GENERAL2_BOBOMB_EXPLOSION);

        if(cur_obj_update_dialog_with_cutscene(3, 1, CUTSCENE_DIALOG, AMY_03))
            o->oSubAction++;
    }


}

void bhv_amy_explode_init(void)
{

}