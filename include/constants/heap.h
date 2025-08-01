#ifndef POKEPLATINUM_CONSTANTS_HEAP_H
#define POKEPLATINUM_CONSTANTS_HEAP_H

enum HeapId {
    HEAP_ID_SYSTEM = 0,
    HEAP_ID_SAVE,
    HEAP_ID_DEBUG,
    HEAP_ID_APPLICATION,
    HEAP_ID_FIELD,
    HEAP_ID_BATTLE,
    HEAP_ID_6,
    HEAP_ID_POKETCH_MAIN,
    HEAP_ID_POKETCH_APP,
    HEAP_ID_BOX_DATA,
    HEAP_ID_BOX_GRAPHICS,
    HEAP_ID_FIELDMAP,
    HEAP_ID_12,
    HEAP_ID_13,
    HEAP_ID_14,
    HEAP_ID_COMMUNICATION,
    HEAP_ID_16,
    HEAP_ID_17,
    HEAP_ID_18,
    HEAP_ID_POKEMON_SUMMARY_SCREEN,
    HEAP_ID_20,
    HEAP_ID_21,
    HEAP_ID_22,
    HEAP_ID_23,
    HEAP_ID_24,
    HEAP_ID_TRAINER_CARD_SCREEN,
    HEAP_ID_26,
    HEAP_ID_27,
    HEAP_ID_28,
    HEAP_ID_MINING,
    HEAP_ID_DISTORTION_WORLD_WARP,
    HEAP_ID_31,
    HEAP_ID_FIELD_TASK,
    HEAP_ID_33,
    HEAP_ID_34,
    HEAP_ID_35,
    HEAP_ID_36,
    HEAP_ID_POKEDEX,
    HEAP_ID_OPTIONS_MENU,
    HEAP_ID_39,
    HEAP_ID_40,
    HEAP_ID_41,
    HEAP_ID_JOURNAL,
    HEAP_ID_43,
    HEAP_ID_44,
    HEAP_ID_45,
    HEAP_ID_46,
    HEAP_ID_CHOOSE_STARTER_APP,
    HEAP_ID_48,
    HEAP_ID_49,
    HEAP_ID_50,
    HEAP_ID_51,
    HEAP_ID_52,
    HEAP_ID_53,
    HEAP_ID_54,
    HEAP_ID_55,
    HEAP_ID_56,
    HEAP_ID_57,
    HEAP_ID_58,
    HEAP_ID_59,
    HEAP_ID_60,
    HEAP_ID_61,
    HEAP_ID_62,
    HEAP_ID_63,
    HEAP_ID_64,
    HEAP_ID_65,
    HEAP_ID_66,
    HEAP_ID_67,
    HEAP_ID_68,
    HEAP_ID_69,
    HEAP_ID_70,
    HEAP_ID_71,
    HEAP_ID_72,
    HEAP_ID_73,
    HEAP_ID_74,
    HEAP_ID_75,
    HEAP_ID_76,
    HEAP_ID_GAME_START,
    HEAP_ID_MIGRATE_FROM_GBA,
    HEAP_ID_79,
    HEAP_ID_80,
    HEAP_ID_MAIN_MENU,
    HEAP_ID_ROWAN_INTRO,
    HEAP_ID_ROWAN_INTRO_TV,
    HEAP_ID_84,
    HEAP_ID_85,
    HEAP_ID_MYSTERY_GIFT_APP,
    HEAP_ID_WONDER_CARDS_APP,
    HEAP_ID_88,
    HEAP_ID_89,
    HEAP_ID_90,
    HEAP_ID_91,
    HEAP_ID_92,
    HEAP_ID_93,
    HEAP_ID_94,
    HEAP_ID_95,
    HEAP_ID_96,
    HEAP_ID_97,
    HEAP_ID_98,
    HEAP_ID_99,
    HEAP_ID_100,
    HEAP_ID_101,
    HEAP_ID_102,
    HEAP_ID_103,
    HEAP_ID_104,
    HEAP_ID_105,
    HEAP_ID_106,
    HEAP_ID_107,
    HEAP_ID_108,
    HEAP_ID_109,
    HEAP_ID_110,
    HEAP_ID_111,
    HEAP_ID_112,
    HEAP_ID_113,
    HEAP_ID_114,
    HEAP_ID_115,
    HEAP_ID_116,
    HEAP_ID_117,
    HEAP_ID_118,
    HEAP_ID_119,
    HEAP_ID_LIBRARY_TV,
    HEAP_ID_121,
    HEAP_ID_122,
    HEAP_ID_MAX,
};

enum HeapSize {
    HEAP_SIZE_SYSTEM = 0xD200,
    HEAP_SIZE_SAVE = 0x20E00,
    HEAP_SIZE_DEBUG = 0x10,
    HEAP_SIZE_APPLICATION = 0x10D800,

    HEAP_SIZE_PRE_POKETCH_SUBSCREEN = 0x18000,
    HEAP_SIZE_POKETCH_MAIN = 0xC000,
    HEAP_SIZE_POKETCH_APP = 0xC000,

    HEAP_SIZE_FIELDMAP = 0x1C000,
    HEAP_SIZE_FIELD_TASK = 0x4000,

    HEAP_SIZE_CHOOSE_STARTER_APP = 0x40000,
    HEAP_SIZE_LIBRARY_TV = 0x40000,
    HEAP_SIZE_TRAINER_CARD_SCREEN = 0x28000,
    HEAP_SIZE_MINING = 0x50000,
    HEAP_SIZE_DISTORTION_WORLD_WARP = 0x50000,
    HEAP_SIZE_GAME_START = 0x20000,
    HEAP_SIZE_MAIN_MENU = 0x40000,
    HEAP_SIZE_MIGRATE_FROM_GBA = 0x38000,
    HEAP_SIZE_WONDER_CARDS_APP = 0x30000,
    HEAP_SIZE_MYSTERY_GIFT_APP = 0x30000,
};

#endif // POKEPLATINUM_CONSTANTS_HEAP_H
