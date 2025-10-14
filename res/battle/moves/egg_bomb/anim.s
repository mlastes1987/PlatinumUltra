#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, egg_bomb_spa
    LoadParticleResource 1, egg_bomb_spa
    PlayMovingSoundEffectAtkDef SEQ_SE_DP_W039, BATTLE_SOUND_PAN_LEFT, BATTLE_SOUND_PAN_RIGHT, 4, 2
    CreateEmitterEx 0, 1, 0, 3
    Func_MoveEmitterA2BParabolic 1, 0, 0, 0, 10, 64
    Delay 8
    PlaySoundEffectR SEQ_SE_DP_W120
    Delay 2
    Func_Shake 2, 0, 1, 2, BATTLE_ANIM_BATTLER_SPRITE_DEFENDER
    CreateEmitter 0, 1, 4
    CreateEmitter 0, 2, 4
    CreateEmitter 0, 3, 4
    WaitForAnimTasks
    WaitForAllEmitters
    UnloadParticleSystem 0
    UnloadParticleSystem 1
    End
