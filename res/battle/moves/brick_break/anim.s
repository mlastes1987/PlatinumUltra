#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, brick_break_spa
    JumpIfBattlerSide BATTLER_ROLE_ATTACKER, L_1, L_2
    WaitForAllEmitters
    UnloadParticleSystem 0
    End

L_1:
    BtlAnimCmd_013 L_3, L_4
    End

L_3:
    CreateEmitter 0, 2, 4
    CreateEmitter 0, 4, 4
    Delay 45
    PlaySoundEffectR SEQ_SE_DP_W233
    Delay 10
    WaitForAllEmitters
    UnloadParticleSystem 0
    End

L_4:
    CreateEmitter 0, 0, 4
    CreateEmitter 0, 1, 4
    CreateEmitter 0, 2, 4
    CreateEmitter 0, 4, 4
    Delay 45
    PlaySoundEffectR SEQ_SE_DP_W233
    Delay 10
    PlaySoundEffectR SEQ_SE_DP_W280
    WaitForAllEmitters
    UnloadParticleSystem 0
    End

L_2:
    BtlAnimCmd_013 L_5, L_6
    End

L_5:
    CreateEmitter 0, 3, 4
    CreateEmitter 0, 5, 4
    Delay 45
    PlaySoundEffectR SEQ_SE_DP_W233
    Delay 10
    WaitForAllEmitters
    UnloadParticleSystem 0
    End

L_6:
    CreateEmitter 0, 0, 4
    CreateEmitter 0, 1, 4
    CreateEmitter 0, 3, 4
    CreateEmitter 0, 5, 4
    Delay 45
    PlaySoundEffectR SEQ_SE_DP_W233
    Delay 10
    PlaySoundEffectR SEQ_SE_DP_W280
    WaitForAllEmitters
    UnloadParticleSystem 0
    End
