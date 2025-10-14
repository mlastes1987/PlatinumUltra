#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, spacial_rend_spa
    PlaySoundEffectL SEQ_SE_DP_W460
    CreateEmitter 0, 5, 3
    CreateEmitter 0, 3, 3
    CreateEmitter 0, 4, 3
    CreateEmitter 0, 0, 3
    Delay 50
    ResetVars
    SetVar BATTLE_ANIM_VAR_BG_SCREEN_MODE, 1
    SwitchBg 41, BATTLE_BG_SWITCH_MODE_FADE
    Delay 10
    Func_ShakeBg 0, 3, 0, 10, 0
    PlaySoundEffectR SEQ_SE_PL_W460B
    CreateEmitter 0, 1, 4
    CreateEmitter 0, 2, 4
    Func_Shake 2, 0, 1, 4, BATTLE_ANIM_BATTLER_SPRITE_DEFENDER
    Func_FadeBattlerSprite BATTLE_ANIM_DEFENDER, 0, 1, BATTLE_COLOR_WHITE, 10, 0
    WaitForAnimTasks
    WaitForAllEmitters
    UnloadParticleSystem 0
    ResetVars
    SetVar BATTLE_ANIM_VAR_BG_SCREEN_MODE, 1
    RestoreBg 41, BATTLE_BG_SWITCH_MODE_FADE
    WaitForBgSwitch
    End
