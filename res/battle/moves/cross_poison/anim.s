#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, cross_poison_spa
    CreateEmitter 0, 0, 4
    CreateEmitter 0, 1, 4
    PlaySoundEffectR SEQ_SE_DP_W015
    Func_FadeBattlerSprite BATTLE_ANIM_DEFENDER, 0, 1, BATTLE_COLOR_PURPLE, 10, 0
    CreateEmitter 0, 2, 4
    Delay 5
    PlayLoopedSoundEffectR SEQ_SE_DP_W092D, 4, 3
    Func_Shake 1, 0, 1, 2, BATTLE_ANIM_BATTLER_SPRITE_DEFENDER
    WaitForAllEmitters
    UnloadParticleSystem 0
    End
