#include "macros/btlanimcmd.inc"

L_0:
    LoadParticleResource 0, chatter_spa
    CreateEmitter 0, 1, 3
    CreateEmitter 0, 0, 3
    PlayPokemonCry 0, -117, 127
    BeginLoop 2
    Func_MoveBattlerX2 8, 8, BATTLE_ANIM_BATTLER_SPRITE_ATTACKER
    Delay 8
    Func_MoveBattlerX2 16, -16, BATTLE_ANIM_BATTLER_SPRITE_ATTACKER
    Delay 16
    Func_MoveBattlerX2 8, 8, BATTLE_ANIM_BATTLER_SPRITE_ATTACKER
    Delay 8
    EndLoop
    WaitForPokemonCries 0
    WaitForAnimTasks
    WaitForAllEmitters
    UnloadParticleSystem 0
    End
