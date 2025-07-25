#include "macros/btlcmd.inc"


_000:
    CompareVarToValue OPCODE_FLAG_SET, BTLVAR_BATTLE_CTX_STATUS, SYSCTL_IGNORE_TYPE_CHECKS|SYSCTL_IGNORE_IMMUNITIES, _262
    CompareVarToValue OPCODE_FLAG_SET, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_ONE_HIT_KO, _262
    CheckAbility CHECK_NOT_HAVE, BTLSCR_ATTACKER, ABILITY_NORMALIZE, _020
    UpdateVar OPCODE_SET, BTLVAR_CALC_TEMP, 0x00000000
    GoTo _033

_020:
    CompareVarToValue OPCODE_EQU, BTLVAR_MOVE_TYPE, TYPE_NORMAL, _031
    UpdateVarFromVar OPCODE_GET, BTLVAR_MOVE_TYPE, BTLVAR_CALC_TEMP
    GoTo _033

_031:
    GetCurrentMoveData MOVEATTRIBUTE_TYPE

_033:
    GetItemHoldEffect BTLSCR_MSG_TEMP, BTLVAR_SCRIPT_TEMP
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 35, _128
    CompareVarToValue OPCODE_FLAG_NOT, BTLVAR_MOVE_STATUS_FLAGS, MOVE_STATUS_SUPER_EFFECTIVE, _262
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 19, _135
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 20, _142
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 21, _149
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 22, _156
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 23, _163
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 24, _170
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 25, _177
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 26, _184
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 27, _191
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 28, _198
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 29, _205
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 30, _212
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 31, _219
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 32, _226
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 33, _233
    CompareVarToValue OPCODE_EQU, BTLVAR_SCRIPT_TEMP, 34, _240
    GoTo _262

_128:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000000, _245
    GoTo _262

_135:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x0000000A, _245
    GoTo _262

_142:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x0000000B, _245
    GoTo _262

_149:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x0000000D, _245
    GoTo _262

_156:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x0000000C, _245
    GoTo _262

_163:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x0000000F, _245
    GoTo _262

_170:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000001, _245
    GoTo _262

_177:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000003, _245
    GoTo _262

_184:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000004, _245
    GoTo _262

_191:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000002, _245
    GoTo _262

_198:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x0000000E, _245
    GoTo _262

_205:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000006, _245
    GoTo _262

_212:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000005, _245
    GoTo _262

_219:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000007, _245
    GoTo _262

_226:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000010, _245
    GoTo _262

_233:
    CompareVarToValue OPCODE_EQU, BTLVAR_CALC_TEMP, 0x00000011, _245
    GoTo _262

_240:
    CompareVarToValue OPCODE_NEQ, BTLVAR_CALC_TEMP, 0x00000008, _262

_245:
    PlayBattleAnimation BTLSCR_MSG_TEMP, BATTLE_ANIMATION_HELD_ITEM
    Wait 
    DivideVarByValue BTLVAR_HP_CALC_TEMP, 2
    // The {0} weakened {1}’s power!
    PrintMessage pl_msg_00000368_01131, TAG_ITEM_MOVE, BTLSCR_MSG_BATTLER_TEMP, BTLSCR_ATTACKER
    Wait 
    WaitButtonABTime 30
    RemoveItem BTLSCR_MSG_TEMP

_262:
    End 
