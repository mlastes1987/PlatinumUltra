#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, fire_punch_spa
    Func_FadeBg FADE_BG_TYPE_BASE, 1, 0, 12, BATTLE_COLOR_DARK_RED2
    CreateEmitter 0, 1, 4
    CreateEmitter 0, 0, 4
    CreateEmitter 0, 2, 4
    Func_Shake 1, 0, 1, 2, BATTLE_ANIM_BATTLER_SPRITE_DEFENDER
    PlaySoundEffectR SEQ_SE_DP_BASI
    PlayDelayedSoundEffectR SEQ_SE_DP_W053B, 5
    Func_FadeBattlerSprite BATTLE_ANIM_DEFENDER, 0, 2, BATTLE_COLOR_DARK_RED2, 14, 0
    WaitForAllEmitters
    UnloadParticleSystem 0
    Func_FadeBg FADE_BG_TYPE_BASE, 1, 12, 0, BATTLE_COLOR_DARK_RED2
    WaitForAnimTasks
    End
