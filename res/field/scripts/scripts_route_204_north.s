#include "macros/scrcmd.inc"
#include "res/text/bank/route_204_north.h"


    ScriptEntry _000E
    ScriptEntry _0021
    ScriptEntry _007B
    ScriptEntryEnd

_000E:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 0
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0021:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    GoToIfSet FLAG_UNK_0x00C5, _0066
    Message 1
    SetVar VAR_0x8004, ITEM_TM78
    SetVar VAR_0x8005, 1
    GoToIfCannotFitItem VAR_0x8004, VAR_0x8005, VAR_RESULT, _0071
    CallCommonScript 0x7FC
    SetFlag FLAG_UNK_0x00C5
    GoTo _0066

_0066:
    Message 2
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0071:
    CallCommonScript 0x7E1
    CloseMessage
    ReleaseAll
    End

_007B:
    ShowArrowSign 3
    End

    .balign 4, 0
