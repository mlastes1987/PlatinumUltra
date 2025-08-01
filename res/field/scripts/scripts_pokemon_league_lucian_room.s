#include "macros/scrcmd.inc"
#include "res/text/bank/pokemon_league_lucian_room.h"


    ScriptEntry _000A
    ScriptEntry _00B7
    ScriptEntryEnd

_000A:
    PlayFanfare SEQ_SE_CONFIRM
    LockAll
    FacePlayer
    GoToIfSet FLAG_UNK_0x00B3, _00AC
    PlayTrainerEncounterBGM TRAINER_ELITE_FOUR_LUCIAN
    Message 0
    CloseMessage
    CallIfUnset FLAG_ARRESTED_CHARON_STARK_MOUNTAIN, _007A
    CallIfSet FLAG_ARRESTED_CHARON_STARK_MOUNTAIN, _0082
    CheckWonBattle VAR_RESULT
    GoToIfEq VAR_RESULT, FALSE, _00A6
    SetFlag FLAG_UNK_0x00B3
    PlayFanfare SEQ_SE_DP_KI_GASYAN
    RemoveObject 1
    CallIfUnset FLAG_ARRESTED_CHARON_STARK_MOUNTAIN, _008A
    CallIfSet FLAG_ARRESTED_CHARON_STARK_MOUNTAIN, _0098
    Message 1
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_007A:
    StartTrainerBattle TRAINER_ELITE_FOUR_LUCIAN
    Return

_0082:
    StartTrainerBattle TRAINER_ELITE_FOUR_LUCIAN_REMATCH
    Return

_008A:
    CreateJournalEvent LOCATION_EVENT_BEAT_ELITE_FOUR_MEMBER, TRAINER_ELITE_FOUR_LUCIAN, 0, 0, 0
    Return

_0098:
    CreateJournalEvent LOCATION_EVENT_BEAT_ELITE_FOUR_MEMBER, TRAINER_ELITE_FOUR_LUCIAN_REMATCH, 0, 0, 0
    Return

_00A6:
    BlackOutFromBattle
    ReleaseAll
    End

_00AC:
    Message 2
    WaitABXPadPress
    CloseMessage
    ReleaseAll
    End

_00B7:
    LockAll
    ApplyMovement LOCALID_PLAYER, _00DC
    WaitMovement
    PlayFanfare SEQ_SE_DP_KI_GASYAN
    ClearFlag FLAG_UNK_0x0285
    AddObject 2
    SetVar VAR_MAP_LOCAL_1, 1
    ReleaseAll
    End

    .balign 4, 0
_00DC:
    WalkNormalNorth 2
    EndMovement
