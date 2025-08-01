#include "macros/scrcmd.inc"
#include "res/text/bank/iron_island_b2f_left_room.h"
#include "res/text/bank/special_met_location_names.h"


    ScriptEntry _0026
    ScriptEntry _0060
    ScriptEntry _0064
    ScriptEntry _00F3
    ScriptEntry _01A8
    ScriptEntry _0464
    ScriptEntry _0466
    ScriptEntry _0468
    ScriptEntry _01AA
    ScriptEntryEnd

_0026:
    InitPersistedMapFeaturesForPlatformLift
    GoToIfUnset FLAG_UNK_0x00E5, _0035
    End

_0035:
    GoToIfEq VAR_UNK_0x4092, 2, _004A
    SetVar VAR_UNK_0x4092, 0
    End

_004A:
    SetObjectEventPos 4, 19, 41
    SetObjectEventMovementType 4, MOVEMENT_TYPE_LOOK_RIGHT
    SetObjectEventDir 4, DIR_EAST
    End

_0060:
    TriggerPlatformLift
    End

_0064:
    LockAll
    SetPlayerBike FALSE
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    CallIfEq VAR_0x8005, 2, _00D1
    CallIfEq VAR_0x8005, 3, _00DD
    BufferPlayerName 0
    CallIfUnset FLAG_UNK_0x00E1, _00E9
    CallIfSet FLAG_UNK_0x00E1, _00EE
    BufferPlayerName 0
    PlaySound SEQ_GONIN
    Message 1
    WaitSound
    SetFlag FLAG_UNK_0x00E1
    SetVar VAR_UNK_0x4092, 1
    Message 2
    WaitABXPadPress
    CloseMessage
    SetVar VAR_PARTNER_TRAINER_ID, TRAINER_RILEY_IRON_ISLAND
    SetHasPartner
    ScrCmd_06D 4, 48
    ReleaseAll
    End

_00D1:
    ApplyMovement 4, _0170
    WaitMovement
    Return

_00DD:
    ApplyMovement 4, _0184
    WaitMovement
    Return

_00E9:
    Message 0
    Return

_00EE:
    Message 3
    Return

_00F3:
    LockAll
    ApplyMovement LOCALID_PLAYER, _0158
    ApplyMovement 4, _0160
    WaitMovement
    Message 4
    CloseMessage
    SetVar VAR_UNK_0x4092, 0
    ClearHasPartner
    ScrCmd_06D 4, 16
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    CallIfEq VAR_0x8005, 2, _013E
    CallIfEq VAR_0x8005, 3, _014A
    ReleaseAll
    End

_013E:
    ApplyMovement 4, _0190
    WaitMovement
    Return

_014A:
    ApplyMovement 4, _01A0
    WaitMovement
    Return

    .balign 4, 0
_0158:
    WalkOnSpotNormalWest
    EndMovement

    .balign 4, 0
_0160:
    FaceEast
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement:
    WalkNormalWest
    EndMovement

    .balign 4, 0
_0170:
    WalkOnSpotNormalEast
    EmoteExclamationMark
    WalkNormalNorth
    WalkOnSpotNormalEast
    EndMovement

    .balign 4, 0
_0184:
    WalkOnSpotNormalEast
    EmoteExclamationMark
    EndMovement

    .balign 4, 0
_0190:
    WalkNormalWest
    WalkNormalSouth
    WalkOnSpotNormalWest
    EndMovement

    .balign 4, 0
_01A0:
    WalkNormalWest
    EndMovement

_01A8:
    End

_01AA:
    LockAll
    ClearHasPartner
    ScrCmd_06D 4, 16
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    CallIfEq VAR_0x8005, 40, _0291
    CallIfEq VAR_0x8005, 41, _02A5
    Message 5
    CloseMessage
    ApplyMovement 5, _0384
    WaitMovement
    Message 6
    CloseMessage
    ApplyMovement 6, _038C
    WaitMovement
    Message 7
    CloseMessage
    ApplyMovement 4, _040C
    WaitMovement
    BufferPlayerName 0
    Message 8
    CloseMessage
    SetHasPartner
    StartTrainerBattle TRAINER_GALACTIC_GRUNT_IRON_ISLAND_1, TRAINER_GALACTIC_GRUNT_IRON_ISLAND_2
    ClearHasPartner
    CheckWonBattle VAR_RESULT
    GoToIfEq VAR_RESULT, FALSE, _037D
    ApplyMovement 5, _0394
    WaitMovement
    Message 9
    CloseMessage
    ApplyMovement 6, _039C
    WaitMovement
    Message 10
    CloseMessage
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    RemoveObject 5
    RemoveObject 6
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    CallIfEq VAR_0x8005, 40, _02D1
    CallIfEq VAR_0x8005, 41, _02E5
    Call _02F9
    ScrCmd_2B6 4, 1
    ReleaseAll
    End

_0291:
    ApplyMovement 4, _03D4
    ApplyMovement LOCALID_PLAYER, _0434
    WaitMovement
    Return

_02A5:
    ApplyMovement 4, _03E4
    ApplyMovement LOCALID_PLAYER, _044C
    WaitMovement
    Return

IronIslandB2FLeftRoom_Unused:
    ApplyMovement 4, IronIslandB2FLeftRoom_UnusedMovement6
    WaitMovement
    Return

IronIslandB2FLeftRoom_Unused2:
    ApplyMovement 4, IronIslandB2FLeftRoom_UnusedMovement7
    WaitMovement
    Return

_02D1:
    ApplyMovement 4, _0414
    ApplyMovement LOCALID_PLAYER, _0424
    WaitMovement
    Return

_02E5:
    ApplyMovement 4, _041C
    ApplyMovement LOCALID_PLAYER, _042C
    WaitMovement
    Return

_02F9:
    Message 11
    ShowYesNoMenu VAR_RESULT
    GoToIfEq VAR_RESULT, MENU_YES, _031C
    GoToIfEq VAR_RESULT, MENU_NO, _0366
    End

_031C:
    GetPartyCount VAR_RESULT
    GoToIfEq VAR_RESULT, 6, _0353
    PlaySound SEQ_FANFA4
    WaitSound
    Message 12
    GiveEgg SPECIES_RIOLU, SPECIAL_METLOC_NAME_RILEY
    SetFlag FLAG_UNK_0x01E5
    ClearFlag FLAG_UNK_0x00E2
    Call _0371
    Message 15
    WaitABXPadPress
    CloseMessage
    Return

_0353:
    SetFlag FLAG_UNK_0x00E2
    SetVar VAR_UNK_0x4092, 2
    Message 13
    WaitABXPadPress
    CloseMessage
    Return

_0366:
    Message 14
    GoTo _02F9
    End

_0371:
    SetFlag FLAG_UNK_0x00E5
    SetVar VAR_UNK_0x4092, 2
    Return

_037D:
    BlackOutFromBattle
    ReleaseAll
    End

    .balign 4, 0
_0384:
    WalkOnSpotNormalEast
    EndMovement

    .balign 4, 0
_038C:
    WalkOnSpotNormalEast
    EndMovement

    .balign 4, 0
_0394:
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_039C:
    WalkOnSpotNormalNorth
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement2:
    WalkNormalWest
    WalkOnSpotNormalEast
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement3:
    WalkNormalNorth
    WalkOnSpotNormalWest
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement4:
    WalkOnSpotNormalNorth
    Delay8 2
    WalkOnSpotNormalWest
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement5:
    WalkNormalNorth
    EndMovement

    .balign 4, 0
_03D4:
    WalkOnSpotNormalWest
    WalkNormalSouth
    WalkNormalWest 2
    EndMovement

    .balign 4, 0
_03E4:
    WalkOnSpotNormalWest
    WalkNormalNorth
    WalkNormalWest 2
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement6:
    WalkNormalSouth
    WalkNormalWest
    EndMovement

IronIslandB2FLeftRoom_UnusedMovement7:
    WalkNormalNorth
    WalkNormalWest
    EndMovement

    .balign 4, 0
_040C:
    WalkOnSpotNormalWest
    EndMovement

    .balign 4, 0
_0414:
    WalkOnSpotNormalNorth
    EndMovement

    .balign 4, 0
_041C:
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_0424:
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_042C:
    WalkOnSpotNormalNorth
    EndMovement

    .balign 4, 0
_0434:
    Delay8 2
    WalkOnSpotNormalSouth
    Delay8
    Delay2
    WalkNormalWest
    EndMovement

    .balign 4, 0
_044C:
    Delay8 2
    WalkOnSpotNormalNorth
    Delay8
    Delay2
    WalkNormalWest
    EndMovement

_0464:
    End

_0466:
    End

_0468:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    GoToIfSet FLAG_UNK_0x00E2, _0504
    GoToIfEq VAR_UNK_0x4092, 2, _0513
    GoToIfGe VAR_UNK_0x40E3, 4, _04EB
    GoToIfEq VAR_UNK_0x40E3, 3, _04E0
    GoToIfEq VAR_UNK_0x40E3, 2, _04D5
    GoToIfEq VAR_UNK_0x40E3, 1, _04CA
    BufferPlayerName 0
    Message 18
    GoTo _04F6
    End

_04CA:
    Message 19
    GoTo _04F6
    End

_04D5:
    Message 20
    GoTo _04F6
    End

_04E0:
    Message 21
    GoTo _04F6
    End

_04EB:
    Message 22
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_04F6:
    AddVar VAR_UNK_0x40E3, 1
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_0504:
    Call _02F9
    ScrCmd_2B6 4, 1
    ReleaseAll
    End

_0513:
    Message 15
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

    .balign 4, 0
