#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, snore_spa
    CreateEmitter 0, 0, 3
    CreateEmitter 0, 1, 3
    Func_ShakeBg 5, 0, 0, 8, 0
    Func_Shake 2, 0, 1, 6, BATTLE_ANIM_BATTLER_SPRITE_DEFENDER
    PlayLoopedSoundEffectL SEQ_SE_DP_W173B, 20, 2
    WaitForAllEmitters
    UnloadParticleSystem 0
    End
