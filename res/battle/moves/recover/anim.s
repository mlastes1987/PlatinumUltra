#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, recover_spa
    CreateEmitter 0, 0, 3
    CreateEmitter 0, 1, 3
    PlaySoundEffectL SEQ_SE_DP_W025
    Delay 10
    Func_FadeBattlerSprite BATTLE_ANIM_ATTACKER, 0, 2, BATTLE_COLOR_LIGHT_YELLOW1, 10, 0
    PlayDelayedSoundEffectL SEQ_SE_DP_W071B, 31
    WaitForAllEmitters
    UnloadParticleSystem 0
    End
