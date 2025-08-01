#include "macros/scrcmd.inc"
#include "res/text/bank/route_209_gate_to_hearthome_city.h"


    ScriptEntry _000A
    ScriptEntry _001D
    ScriptEntryEnd

_000A:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 0
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_001D:
    LockAll
    ApplyMovement 1, _0264
    WaitMovement
    CallCommonScript 0x7FA
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    CallIfEq VAR_0x8005, 5, _014E
    CallIfEq VAR_0x8005, 6, _015A
    CallIfEq VAR_0x8005, 7, _0166
    CallIfEq VAR_0x8005, 8, _0172
    CallIfEq VAR_0x8005, 9, _017E
    BufferRivalName 0
    BufferPlayerName 1
    Message 1
    CloseMessage
    GetPlayerStarterSpecies VAR_RESULT
    GoToIfEq VAR_RESULT, SPECIES_TURTWIG, _00B3
    GoToIfEq VAR_RESULT, SPECIES_CHIMCHAR, _00C1
    GoTo _00A5
    End

_00A5:
    StartTrainerBattle TRAINER_RIVAL_ROUTE_209_PIPLUP
    GoTo _00CF
    End

_00B3:
    StartTrainerBattle TRAINER_RIVAL_ROUTE_209_TURTWIG
    GoTo _00CF
    End

_00C1:
    StartTrainerBattle TRAINER_RIVAL_ROUTE_209_CHIMCHAR
    GoTo _00CF
    End

_00CF:
    CheckWonBattle VAR_RESULT
    GoToIfEq VAR_RESULT, FALSE, _0148
    BufferRivalName 0
    BufferPlayerName 1
    Message 2
    CloseMessage
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    CallIfEq VAR_0x8005, 5, _018A
    CallIfEq VAR_0x8005, 6, _0196
    CallIfEq VAR_0x8005, 7, _01A2
    CallIfEq VAR_0x8005, 8, _01AE
    CallIfEq VAR_0x8005, 9, _01BA
    PlayFanfare SEQ_SE_DP_KAIDAN2
    RemoveObject 1
    WaitFanfare SEQ_SE_DP_KAIDAN2
    SetVar VAR_UNK_0x407B, 2
    ReleaseAll
    End

_0148:
    BlackOutFromBattle
    ReleaseAll
    End

_014E:
    ApplyMovement 1, _01D4
    WaitMovement
    Return

_015A:
    ApplyMovement 1, _01E4
    WaitMovement
    Return

_0166:
    ApplyMovement 1, _01F4
    WaitMovement
    Return

_0172:
    ApplyMovement 1, _01FC
    WaitMovement
    Return

_017E:
    ApplyMovement 1, _020C
    WaitMovement
    Return

_018A:
    ApplyMovement 1, _021C
    WaitMovement
    Return

_0196:
    ApplyMovement 1, _022C
    WaitMovement
    Return

_01A2:
    ApplyMovement 1, _023C
    WaitMovement
    Return

_01AE:
    ApplyMovement 1, _0244
    WaitMovement
    Return

_01BA:
    ApplyMovement 1, _0254
    WaitMovement
    Return

    .balign 4, 0
Route209GateToHearthomeCity_UnusedMovement:
    WalkFastWest 4
    EmoteExclamationMark
    EndMovement

    .balign 4, 0
_01D4:
    WalkFastWest 2
    WalkFastNorth 2
    WalkOnSpotFastWest
    EndMovement

    .balign 4, 0
_01E4:
    WalkFastWest 2
    WalkFastNorth
    WalkOnSpotFastWest
    EndMovement

    .balign 4, 0
_01F4:
    WalkFastWest 2
    EndMovement

    .balign 4, 0
_01FC:
    WalkFastWest 2
    WalkFastSouth
    WalkOnSpotFastWest
    EndMovement

    .balign 4, 0
_020C:
    WalkFastWest 2
    WalkFastSouth 2
    WalkOnSpotFastWest
    EndMovement

    .balign 4, 0
_021C:
    WalkFastEast 2
    WalkFastSouth 2
    WalkFastEast 2
    EndMovement

    .balign 4, 0
_022C:
    WalkFastEast 2
    WalkFastSouth
    WalkFastEast 2
    EndMovement

    .balign 4, 0
_023C:
    WalkFastEast 4
    EndMovement

    .balign 4, 0
_0244:
    WalkFastEast 2
    WalkFastNorth
    WalkFastEast 2
    EndMovement

    .balign 4, 0
_0254:
    WalkFastEast 2
    WalkFastNorth 2
    WalkFastEast 2
    EndMovement

    .balign 4, 0
_0264:
    Delay8
    EmoteExclamationMark
    Delay8
    EndMovement
