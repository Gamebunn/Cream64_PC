#include <stdio.h>


void bhv_ddr_music_loop(void)
{
    
    if (o->oDistanceToMario < 320.0f) 
    {
        play_secondary_music(SEQ_DDRTRACK1, 0, 255, 1000);
        o->oPiranhaPlantSleepMusicState = PIRANHA_PLANT_SLEEP_MUSIC_PLAYING;
    }  
    else if (o->oPiranhaPlantSleepMusicState == PIRANHA_PLANT_SLEEP_MUSIC_PLAYING) 
    {
        o->oPiranhaPlantSleepMusicState++;
        func_80321080(50);
    }

}

void bhv_ddr_music_init(void)
{

}

void bhv_ddr_music2_loop(void)
{
    
    if (o->oDistanceToMario < 320.0f) 
    {
        play_secondary_music(SEQ_DDRTRACK2, 0, 255, 1000);
        o->oPiranhaPlantSleepMusicState = PIRANHA_PLANT_SLEEP_MUSIC_PLAYING;
    }  
    else if (o->oPiranhaPlantSleepMusicState == PIRANHA_PLANT_SLEEP_MUSIC_PLAYING) 
    {
        o->oPiranhaPlantSleepMusicState++;
        func_80321080(50);
    }

}

void bhv_ddr_music2_init(void)
{

}

void bhv_bm_music1_loop(void)
{
    
    if (o->oDistanceToMario < 300.0f) 
    {
        play_secondary_music(SEQ_BMTRACK1, 0, 255, 1000);
        o->oPiranhaPlantSleepMusicState = PIRANHA_PLANT_SLEEP_MUSIC_PLAYING;
    }  
    else if (o->oPiranhaPlantSleepMusicState == PIRANHA_PLANT_SLEEP_MUSIC_PLAYING) 
    {
        o->oPiranhaPlantSleepMusicState++;
        func_80321080(50);
    }

}

void bhv_bm_music1_init(void)
{

}

void bhv_bm_music2_loop(void)
{
    
    if (o->oDistanceToMario < 300.0f) 
    {
        play_secondary_music(SEQ_BMTRACK3, 0, 255, 1000);
        o->oPiranhaPlantSleepMusicState = PIRANHA_PLANT_SLEEP_MUSIC_PLAYING;
    }  
    else if (o->oPiranhaPlantSleepMusicState == PIRANHA_PLANT_SLEEP_MUSIC_PLAYING) 
    {
        o->oPiranhaPlantSleepMusicState++;
        func_80321080(50);
    }

}

void bhv_bm_music2_init(void)
{

}

void bhv_bm_music3_loop(void)
{
    
    if (o->oDistanceToMario < 300.0f) 
    {
        play_secondary_music(SEQ_BMTRACK2, 0, 255, 1000);
        o->oPiranhaPlantSleepMusicState = PIRANHA_PLANT_SLEEP_MUSIC_PLAYING;
    }  
    else if (o->oPiranhaPlantSleepMusicState == PIRANHA_PLANT_SLEEP_MUSIC_PLAYING) 
    {
        o->oPiranhaPlantSleepMusicState++;
        func_80321080(50);
    }

}

void bhv_bm_music3_init(void)
{

}