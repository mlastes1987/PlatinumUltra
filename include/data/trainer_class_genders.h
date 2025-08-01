#include "generated/genders.h"
#include "generated/trainer_classes.h"

// clang-format off
static const u8 sTrainerClassGender[] = {
    [TRAINER_CLASS_PLAYER_MALE]             = GENDER_MALE,
    [TRAINER_CLASS_PLAYER_FEMALE]           = GENDER_FEMALE,
    [TRAINER_CLASS_YOUNGSTER]               = GENDER_MALE,
    [TRAINER_CLASS_LASS]                    = GENDER_FEMALE,
    [TRAINER_CLASS_CAMPER]                  = GENDER_MALE,
    [TRAINER_CLASS_PICNICKER]               = GENDER_FEMALE,
    [TRAINER_CLASS_BUG_CATCHER]             = GENDER_MALE,
    [TRAINER_CLASS_AROMA_LADY]              = GENDER_FEMALE,
    [TRAINER_CLASS_TWINS]                   = GENDER_FEMALE,
    [TRAINER_CLASS_HIKER]                   = GENDER_MALE,
    [TRAINER_CLASS_BATTLE_GIRL]             = GENDER_FEMALE,
    [TRAINER_CLASS_FISHERMAN]               = GENDER_MALE,
    [TRAINER_CLASS_CYCLIST_MALE]            = GENDER_MALE,
    [TRAINER_CLASS_CYCLIST_FEMALE]          = GENDER_FEMALE,
    [TRAINER_CLASS_BLACK_BELT]              = GENDER_MALE,
    [TRAINER_CLASS_ARTIST]                  = GENDER_MALE,
    [TRAINER_CLASS_BREEDER_MALE]            = GENDER_MALE,
    [TRAINER_CLASS_BREEDER_FEMALE]          = GENDER_FEMALE,
    [TRAINER_CLASS_COWGIRL]                 = GENDER_FEMALE,
    [TRAINER_CLASS_JOGGER]                  = GENDER_MALE,
    [TRAINER_CLASS_POKEFAN_MALE]            = GENDER_MALE,
    [TRAINER_CLASS_POKEFAN_FEMALE]          = GENDER_FEMALE,
    [TRAINER_CLASS_POKE_KID]                = GENDER_FEMALE,
    [TRAINER_CLASS_YOUNG_COUPLE]            = GENDER_NONE,
    [TRAINER_CLASS_ACE_TRAINER_MALE]        = GENDER_MALE,
    [TRAINER_CLASS_ACE_TRAINER_FEMALE]      = GENDER_FEMALE,
    [TRAINER_CLASS_WAITRESS]                = GENDER_FEMALE,
    [TRAINER_CLASS_VETERAN]                 = GENDER_MALE,
    [TRAINER_CLASS_NINJA_BOY]               = GENDER_MALE,
    [TRAINER_CLASS_DRAGON_TAMER]            = GENDER_MALE,
    [TRAINER_CLASS_BIRD_KEEPER]             = GENDER_FEMALE,
    [TRAINER_CLASS_DOUBLE_TEAM]             = GENDER_NONE,
    [TRAINER_CLASS_RICH_BOY]                = GENDER_MALE,
    [TRAINER_CLASS_LADY]                    = GENDER_FEMALE,
    [TRAINER_CLASS_GENTLEMAN]               = GENDER_MALE,
    [TRAINER_CLASS_SOCIALITE]               = GENDER_FEMALE,
    [TRAINER_CLASS_BEAUTY]                  = GENDER_FEMALE,
    [TRAINER_CLASS_COLLECTOR]               = GENDER_MALE,
    [TRAINER_CLASS_POLICEMAN]               = GENDER_MALE,
    [TRAINER_CLASS_RANGER_MALE]             = GENDER_MALE,
    [TRAINER_CLASS_RANGER_FEMALE]           = GENDER_FEMALE,
    [TRAINER_CLASS_SCIENTIST]               = GENDER_MALE,
    [TRAINER_CLASS_SWIMMER_MALE]            = GENDER_MALE,
    [TRAINER_CLASS_SWIMMER_FEMALE]          = GENDER_FEMALE,
    [TRAINER_CLASS_TUBER_MALE]              = GENDER_MALE,
    [TRAINER_CLASS_TUBER_FEMALE]            = GENDER_FEMALE,
    [TRAINER_CLASS_SAILOR]                  = GENDER_MALE,
    [TRAINER_CLASS_SIS_AND_BRO]             = GENDER_NONE,
    [TRAINER_CLASS_RUIN_MANIAC]             = GENDER_MALE,
    [TRAINER_CLASS_PSYCHIC_MALE]            = GENDER_MALE,
    [TRAINER_CLASS_PSYCHIC_FEMALE]          = GENDER_FEMALE,
    [TRAINER_CLASS_PI]                      = GENDER_MALE,
    [TRAINER_CLASS_GUITARIST]               = GENDER_MALE,
    [TRAINER_CLASS_ACE_TRAINER_SNOW_MALE]   = GENDER_MALE,
    [TRAINER_CLASS_ACE_TRAINER_SNOW_FEMALE] = GENDER_FEMALE,
    [TRAINER_CLASS_SKIER_MALE]              = GENDER_MALE,
    [TRAINER_CLASS_SKIER_FEMALE]            = GENDER_FEMALE,
    [TRAINER_CLASS_ROUGHNECK]               = GENDER_MALE,
    [TRAINER_CLASS_CLOWN]                   = GENDER_MALE,
    [TRAINER_CLASS_WORKER]                  = GENDER_MALE,
    [TRAINER_CLASS_SCHOOL_KID_MALE]         = GENDER_MALE,
    [TRAINER_CLASS_SCHOOL_KID_FEMALE]       = GENDER_FEMALE,
    [TRAINER_CLASS_LEADER_ROARK]            = GENDER_MALE,
    [TRAINER_CLASS_RIVAL]                   = GENDER_MALE,
    [TRAINER_CLASS_LEADER_BYRON]            = GENDER_MALE,
    [TRAINER_CLASS_ELITE_FOUR_AARON]        = GENDER_MALE,
    [TRAINER_CLASS_ELITE_FOUR_BERTHA]       = GENDER_FEMALE,
    [TRAINER_CLASS_ELITE_FOUR_FLINT]        = GENDER_MALE,
    [TRAINER_CLASS_ELITE_FOUR_LUCIAN]       = GENDER_MALE,
    [TRAINER_CLASS_CHAMPION_CYNTHIA]        = GENDER_FEMALE,
    [TRAINER_CLASS_BELLE_AND_PA]            = GENDER_NONE,
    [TRAINER_CLASS_RANCHER]                 = GENDER_MALE,
    [TRAINER_CLASS_COMMANDER_MARS]          = GENDER_FEMALE,
    [TRAINER_CLASS_GALACTIC_GRUNT_MALE]     = GENDER_MALE,
    [TRAINER_CLASS_LEADER_GARDENIA]         = GENDER_FEMALE,
    [TRAINER_CLASS_LEADER_WAKE]             = GENDER_MALE,
    [TRAINER_CLASS_LEADER_MAYLENE]          = GENDER_FEMALE,
    [TRAINER_CLASS_LEADER_FANTINA]          = GENDER_FEMALE,
    [TRAINER_CLASS_LEADER_CANDICE]          = GENDER_FEMALE,
    [TRAINER_CLASS_LEADER_VOLKNER]          = GENDER_MALE,
    [TRAINER_CLASS_PARASOL_LADY]            = GENDER_FEMALE,
    [TRAINER_CLASS_WAITER]                  = GENDER_MALE,
    [TRAINER_CLASS_INTERVIEWERS]            = GENDER_NONE,
    [TRAINER_CLASS_CAMERAMAN]               = GENDER_MALE,
    [TRAINER_CLASS_REPORTER]                = GENDER_FEMALE,
    [TRAINER_CLASS_IDOL]                    = GENDER_FEMALE,
    [TRAINER_CLASS_GALACTIC_BOSS]           = GENDER_MALE,
    [TRAINER_CLASS_COMMANDER_JUPITER]       = GENDER_FEMALE,
    [TRAINER_CLASS_COMMANDER_SATURN]        = GENDER_FEMALE,
    [TRAINER_CLASS_GALACTIC_GRUNT_FEMALE]   = GENDER_FEMALE,
    [TRAINER_CLASS_TRAINER_CHERYL]          = GENDER_FEMALE,
    [TRAINER_CLASS_TRAINER_RILEY]           = GENDER_MALE,
    [TRAINER_CLASS_TRAINER_MARLEY]          = GENDER_FEMALE,
    [TRAINER_CLASS_TRAINER_BUCK]            = GENDER_MALE,
    [TRAINER_CLASS_TRAINER_MIRA]            = GENDER_FEMALE,
    [TRAINER_CLASS_DP_PLAYER_MALE]          = GENDER_MALE,
    [TRAINER_CLASS_DP_PLAYER_FEMALE]        = GENDER_FEMALE,
    [TRAINER_CLASS_TOWER_TYCOON]            = GENDER_MALE,
    [TRAINER_CLASS_MAID]                    = GENDER_FEMALE,
    [TRAINER_CLASS_HALL_MATRON]             = GENDER_FEMALE,
    [TRAINER_CLASS_FACTORY_HEAD]            = GENDER_MALE,
    [TRAINER_CLASS_ARCADE_STAR]             = GENDER_FEMALE,
    [TRAINER_CLASS_CASTLE_VALET]            = GENDER_MALE,
    [TRAINER_CLASS_DP_PLAYER_MALE_2]        = GENDER_MALE,
    [TRAINER_CLASS_DP_PLAYER_FEMALE_2]      = GENDER_FEMALE,
};
// clang-format on
