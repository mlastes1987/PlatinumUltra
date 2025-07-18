#include "macros/scrcmd.inc"
#include "res/text/bank/distortion_world_b7f.h"


    ScriptEntry _001A
    ScriptEntry _001E
    ScriptEntry _0044
    ScriptEntry _006F
    ScriptEntry _0096
    ScriptEntry _01DA
    ScriptEntryEnd

_001A:
    InitPersistedMapFeaturesForDistortionWorld
    End

_001E:
    FadeScreen 6, 1, 0, 0
    WaitFadeScreen
    Warp MAP_HEADER_DISTORTION_WORLD_GIRATINA_ROOM, 0, 15, 25, 0
    FadeScreen 6, 1, 1, 0
    WaitFadeScreen
    End

_0044:
    LockAll
    ApplyMovement 128, _028C
    ApplyMovement LOCALID_PLAYER, _0204
    WaitMovement
    Message 0
    CloseMessage
    ApplyMovement 128, _029C
    WaitMovement
    SetVar VAR_DISTORTION_WORLD_PROGRESS, 8
    End

_006F:
    LockAll
    Message 1
    CloseMessage
    ApplyMovement 129, _0308
    ApplyMovement 128, _02AC
    WaitMovement
    Message 2
    Message 4
    WaitABPadPress
    CloseMessage
    ReleaseAll
    End

_0096:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    Message 5
    CloseMessage
    StartTrainerBattle TRAINER_GALACTIC_BOSS_CYRUS_DISTORTION_WORLD
    CheckWonBattle VAR_RESULT
    GoToIfEq VAR_RESULT, FALSE, _01CE
    SetVar VAR_DISTORTION_WORLD_PROGRESS, 10
    Message 6
    CloseMessage
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    GoToIfEq VAR_0x8004, 86, _00E6
    ApplyMovement LOCALID_PLAYER, _0210
    GoTo _00EE

_00E6:
    ApplyMovement LOCALID_PLAYER, _0248
_00EE:
    ApplyMovement 129, _0314
    ApplyMovement 128, _02DC
    WaitMovement
    ScrCmd_312 129
    ApplyMovement 128, _02BC
    WaitMovement
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    GoToIfEq VAR_0x8005, 74, _012F
    ApplyMovement LOCALID_PLAYER, _0254
    GoTo _013F

_012F:
    ApplyMovement 128, _02E8
    ApplyMovement LOCALID_PLAYER, _0264
_013F:
    Message 7
    WaitMovement
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    GoToIfEq VAR_0x8005, 74, _016D
    ApplyMovement 128, _02F8
    ApplyMovement LOCALID_PLAYER, _0274
    GoTo _017D

_016D:
    ApplyMovement 128, _0300
    ApplyMovement LOCALID_PLAYER, _0280
_017D:
    BufferPlayerName 0
    Message 8
    PlaySound SEQ_ASA
    WaitSound
    HealParty
    WaitMovement
    Message 9
    CloseMessage
    ApplyMovement 128, _02C8
    GetPlayerMapPos VAR_0x8004, VAR_0x8005
    GoToIfEq VAR_0x8005, 74, _01BB
    ApplyMovement LOCALID_PLAYER, _0220
    GoTo _01C3

_01BB:
    ApplyMovement LOCALID_PLAYER, _0234
_01C3:
    WaitMovement
    Message 10
    WaitABXPadPress
    CloseMessage
    End

_01CE:
    SetVar VAR_DISTORTION_WORLD_PROGRESS, 9
    BlackOutFromBattle
    ReleaseAll
    End

_01DA:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    GoToIfGe VAR_DISTORTION_WORLD_PROGRESS, 10, _01F8
    Message 3
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_01F8:
    Message 11
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

    .balign 4, 0
_0204:
    Delay16 2
    WalkOnSpotNormalNorth
    EndMovement

    .balign 4, 0
_0210:
    WalkNormalEast
    WalkOnSpotNormalWest
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_0220:
    WalkNormalWest
    WalkNormalNorth 7
    WalkNormalEast 4
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_0234:
    WalkNormalWest
    WalkNormalNorth 6
    WalkNormalEast 4
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_0248:
    Delay8
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_0254:
    Delay32 2
    Delay16
    WalkOnSpotNormalNorth
    EndMovement

    .balign 4, 0
_0264:
    Delay32 2
    Delay16
    WalkOnSpotNormalWest
    EndMovement

    .balign 4, 0
_0274:
    Delay4
    WalkOnSpotNormalNorth
    EndMovement

    .balign 4, 0
_0280:
    Delay4
    WalkOnSpotNormalWest
    EndMovement

    .balign 4, 0
_028C:
    Delay16 2
    WalkOnSpotNormalNorth
    Delay16 2
    EndMovement

    .balign 4, 0
_029C:
    WalkNormalEast
    MoveAction_117
    WalkNormalNorth 7
    EndMovement

    .balign 4, 0
_02AC:
    Delay8 3
    WalkNormalWest
    WalkOnSpotNormalEast
    EndMovement

    .balign 4, 0
_02BC:
    WalkNormalEast
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_02C8:
    WalkNormalNorth 6
    WalkNormalEast 4
    WalkNormalSouth
    WalkOnSpotNormalNorth
    EndMovement

    .balign 4, 0
_02DC:
    Delay16
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_02E8:
    Delay32 2
    Delay8
    WalkOnSpotNormalEast
    EndMovement

    .balign 4, 0
_02F8:
    WalkOnSpotNormalSouth
    EndMovement

    .balign 4, 0
_0300:
    WalkOnSpotNormalEast
    EndMovement

    .balign 4, 0
_0308:
    WalkNormalSouth 4
    WalkOnSpotNormalWest
    EndMovement

    .balign 4, 0
_0314:
    WalkNormalSouth 7
    MoveAction_118
    Delay16
    EndMovement
