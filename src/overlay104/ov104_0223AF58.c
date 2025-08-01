#include "overlay104/ov104_0223AF58.h"

#include <nitro.h>
#include <string.h>

#include "overlay104/ov104_0222DCE0.h"
#include "overlay104/struct_ov104_02230BE4.h"
#include "overlay104/struct_ov104_0223B5C0.h"

#include "communication_information.h"
#include "communication_system.h"
#include "field_battle_data_transfer.h"
#include "heap.h"
#include "item_use_pokemon.h"
#include "math_util.h"
#include "party.h"
#include "pokemon.h"
#include "unk_02030108.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
} UnkStruct_ov104_0224033C;

typedef struct {
    u16 unk_00;
    u16 unk_02;
} UnkStruct_ov104_02240364;

void FieldBattleDTO_CopyPlayerInfoToTrainerData(FieldBattleDTO *param0);
void ov104_0223AF58(u8 param0, u8 param1, u8 param2, u8 param3, u16 param4[]);
void ov104_0223AFB4(u8 param0, u8 param1, int param2, u8 param3, u8 param4, u16 param5[]);
void ov104_0223B0C8(u8 param0, u8 param1, u8 param2, u8 param3, u16 param4, u16 param5[], u8 param6);
u8 ov104_0223B500(u8 param0);
u8 ov104_0223B50C(u8 param0);
FieldBattleDTO *ov104_0223B250(UnkStruct_ov104_0223B5C0 *param0, UnkStruct_ov104_02230BE4 *param1);
static u32 ov104_0223B4D4(u8 param0);
static void ov104_0223B518(FrontierPokemonDataDTO *param0, u8 param1, u16 param2, u16 param3[], int param4, int param5, int param6);
static u32 ov104_0223B57C(UnkStruct_ov104_0223B5C0 *param0, u8 param1);
u8 ov104_0223B5A4(u8 param0);
u8 ov104_0223B5C0(UnkStruct_ov104_0223B5C0 *param0);
static u8 ov104_0223B5F0(u8 param0);
static u16 ov104_0223B604(UnkStruct_ov104_0223B5C0 *param0, u8 param1, u8 param2);
static u16 ov104_0223B644(u8 param0);
u16 ov104_0223B64C(UnkStruct_ov104_0223B5C0 *param0);
static BOOL ov104_0223B4A4(UnkStruct_ov104_0223B5C0 *param0, u8 param1);
BOOL ov104_0223B5B0(u8 param0);

static const u16 Unk_ov104_0224041C[10][8] = {
    { 0x2, 0x3, 0x14, 0x15, 0x25, 0x24, 0x16, 0x1C },
    { 0x2, 0x3, 0x51, 0x1A, 0x13, 0x50, 0x16, 0x1C },
    { 0x20, 0x21, 0x14, 0x15, 0x25, 0x24, 0x3A, 0x55 },
    { 0x20, 0x21, 0x51, 0x1A, 0x13, 0x50, 0x3A, 0x55 },
    { 0x4, 0x5, 0x47, 0x12, 0x22, 0x23, 0x25, 0x24 },
    { 0x4, 0x5, 0x10, 0x11, 0x22, 0x23, 0x39, 0x34 },
    { 0x3C, 0x3D, 0x47, 0x12, 0x14, 0x15, 0x13, 0x50 },
    { 0x3C, 0x3D, 0x10, 0x11, 0x14, 0x15, 0x39, 0x34 },
    { 0x18, 0x19, 0x47, 0x12, 0x27, 0x28, 0x33, 0x1B },
    { 0x18, 0x19, 0x10, 0x11, 0x27, 0x28, 0x33, 0x1B }
};

static const u16 Unk_ov104_0224038C[18][4] = {
    { 0x14, 0x15, 0x2, 0x3 },
    { 0x1B, 0x1B, 0x26, 0x26 },
    { 0x2C, 0x2D, 0x2E, 0xB },
    { 0x16, 0x16, 0x3B, 0x3B },
    { 0x7, 0x7, 0x4, 0x5 },
    { 0x35, 0x35, 0x36, 0x36 },
    { 0xE, 0xE, 0xA, 0xA },
    { 0x1C, 0x1C, 0x29, 0x29 },
    { 0x9, 0x9, 0x30, 0x30 },
    { 0x1E, 0x1E, 0x1E, 0x1E },
    { 0x31, 0x31, 0x32, 0x32 },
    { 0x6, 0x6, 0x6, 0x6 },
    { 0x9, 0x9, 0x30, 0x30 },
    { 0x31, 0x31, 0x32, 0x32 },
    { 0x1D, 0x1D, 0x1D, 0x1D },
    { 0x39, 0x39, 0x34, 0x34 },
    { 0x54, 0x53, 0xC, 0xD },
    { 0x55, 0x3A, 0x51, 0x1A }
};

static const u16 Unk_ov104_022404BC[] = {
    0x2,
    0x2,
    0x2,
    0x3,
    0x3,
    0x3,
    0x3C,
    0x3C,
    0x3C,
    0x3D,
    0x3D,
    0x3D,
    0x20,
    0x20,
    0x20,
    0x21,
    0x21,
    0x21,
    0x4,
    0x4,
    0x4,
    0x5,
    0x5,
    0x5,
    0x2C,
    0x2C,
    0x2C,
    0x2D,
    0x2D,
    0x2D,
    0x34,
    0x34,
    0x34,
    0x55,
    0x55,
    0x55,
    0x14,
    0x14,
    0x14,
    0x15,
    0x15,
    0x15,
    0x51,
    0x51,
    0x51,
    0x1A,
    0x1A,
    0x1A,
    0x6,
    0x6,
    0x6,
    0x1C,
    0x1C,
    0x1C,
    0x16,
    0x16,
    0x16,
    0xB,
    0xB,
    0x30,
    0x30,
    0x25,
    0x25,
    0x50,
    0x50,
    0x50,
    0x24,
    0x24,
    0x24,
    0x7,
    0x7,
    0x7,
    0x34,
    0x34,
    0x1E,
    0x1E,
    0x1E,
    0x2E,
    0x2E,
    0x9,
    0x9,
    0x55,
    0x55,
    0x55,
    0x13,
    0x13,
    0x3B,
    0x3B,
    0x47,
    0x47,
    0x47,
    0x12,
    0x12,
    0x12,
    0x53,
    0x53,
    0x53,
    0x54,
    0x54,
    0x54,
    0xC,
    0xC,
    0xD,
    0xD,
    0xE,
    0xE,
    0xA,
    0xA,
    0xE,
    0xE,
    0xE,
    0xA,
    0xA,
    0xA,
    0x1B,
    0x1B,
    0x1B,
    0x23,
    0x23,
    0x23,
    0x31,
    0x31,
    0x31,
    0x32,
    0x32,
    0x32,
    0x10,
    0x10,
    0x10,
    0x11,
    0x11,
    0x11,
    0x22,
    0x22,
    0x39,
    0x39,
    0x29,
    0x29,
    0x3A,
    0x3A,
    0x18,
    0x18,
    0x18,
    0x19,
    0x19,
    0x19,
    0x27,
    0x27,
    0x27,
    0x28,
    0x28,
    0x28,
    0x1D,
    0x1D,
    0x1D,
    0x1D,
    0x35,
    0x35,
    0x36,
    0x36,
    0x2,
    0x2,
    0x3,
    0x3,
    0x3C,
    0x3C,
    0x3D,
    0x3D,
    0x20,
    0x20,
    0x21,
    0x21,
    0x6,
    0x6,
    0x1C,
    0x1C,
    0x16,
    0x16,
    0x55,
    0x55,
    0x13,
    0x13,
    0xB,
    0xB,
    0x30,
    0x30,
    0x25,
    0x25,
    0x34,
    0x34,
    0x1E,
    0x1E,
    0x2E,
    0x2E,
    0x9,
    0x9,
    0x26,
    0x26,
    0x33,
    0x33,
    0x4,
    0x4,
    0x5,
    0x5,
    0x34,
    0x34,
    0x55,
    0x55,
    0x14,
    0x14,
    0x15,
    0x15,
    0x47,
    0x47,
    0x12,
    0x12,
    0x10,
    0x10,
    0x11,
    0x11,
    0x18,
    0x18,
    0x19,
    0x19,
    0x35,
    0x35,
    0x36,
    0x36,
    0x27,
    0x27,
    0x28,
    0x28,
    0x1D,
    0x1D,
    0xE,
    0xE,
    0xA,
    0xA,
    0x1B,
    0x1B,
    0x23,
    0x23,
    0x31,
    0x31,
    0x32,
    0x32,
    0x51,
    0x51,
    0x1A,
    0x1A,
    0x53,
    0x53,
    0x54,
    0x54,
    0xC,
    0xC,
    0xD,
    0xD,
    0x33,
    0x33,
    0x55,
    0x55,
    0x13,
    0x13,
    0xB,
    0xB,
    0x2E,
    0x2E,
    0x9,
    0x9,
    0x30,
    0x30,
    0x34,
    0x34,
    0x25,
    0x25,
    0x39,
    0x39,
    0x29,
    0x29,
    0x22,
    0x22,
    0x3B,
    0x3B,
    0x3A,
    0x3A,
    0x26,
    0x26,
    0x33,
    0x33,
    0x1E,
    0x1E,
    0x50,
    0x50,
    0x24,
    0x24,
    0x7,
    0x7,
    0x55,
    0x55
};

static const u16 Unk_ov104_02240ACE[][2] = {
    { 0xC, 0x3 },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x6, 0x6 },
    { 0x6, 0x6 },
    { 0x6, 0x3 },
    { 0x6, 0x3 },
    { 0x0, 0x2 },
    { 0x0, 0x0 },
    { 0x0, 0x2 },
    { 0x3, 0x3 },
    { 0xD, 0xD },
    { 0x4, 0x4 },
    { 0x3, 0x3 },
    { 0x3, 0x3 },
    { 0x0, 0x0 },
    { 0xA, 0xA },
    { 0x0, 0x0 },
    { 0x3, 0x2 },
    { 0xC, 0x3 },
    { 0x6, 0xC },
    { 0x6, 0x3 },
    { 0x4, 0x4 },
    { 0x0, 0x0 },
    { 0xB, 0xB },
    { 0x1, 0x1 },
    { 0xB, 0xB },
    { 0xE, 0xE },
    { 0x1, 0x1 },
    { 0xC, 0x3 },
    { 0xB, 0x3 },
    { 0x5, 0x4 },
    { 0xB, 0xE },
    { 0xD, 0x8 },
    { 0x0, 0x2 },
    { 0xB, 0xB },
    { 0x3, 0x3 },
    { 0xB, 0xB },
    { 0x7, 0x3 },
    { 0xE, 0xE },
    { 0xB, 0xB },
    { 0xD, 0xD },
    { 0xC, 0xE },
    { 0x4, 0x4 },
    { 0xB, 0xB },
    { 0xB, 0xB },
    { 0xB, 0xB },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0x10, 0x10 },
    { 0xC, 0xC },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x0, 0x0 },
    { 0x0, 0x2 },
    { 0x6, 0x2 },
    { 0x6, 0x3 },
    { 0xB, 0xD },
    { 0xD, 0xD },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0xE, 0x2 },
    { 0xD, 0xD },
    { 0xB, 0xB },
    { 0xC, 0x2 },
    { 0xC, 0xC },
    { 0xB, 0x4 },
    { 0xE, 0xE },
    { 0x6, 0x6 },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0xA, 0xA },
    { 0xF, 0x4 },
    { 0xB, 0xB },
    { 0xF, 0x2 },
    { 0x11, 0xA },
    { 0x4, 0x4 },
    { 0x0, 0x0 },
    { 0x1, 0x1 },
    { 0xF, 0xE },
    { 0x5, 0x4 },
    { 0xC, 0xC },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x11, 0x11 },
    { 0x0, 0x0 },
    { 0x6, 0x6 },
    { 0x6, 0x6 },
    { 0x6, 0x6 },
    { 0xB, 0xC },
    { 0xC, 0xC },
    { 0x0, 0x2 },
    { 0xB, 0x2 },
    { 0xE, 0xE },
    { 0xE, 0xE },
    { 0x6, 0xB },
    { 0xC, 0xC },
    { 0x0, 0x0 },
    { 0x6, 0x4 },
    { 0x6, 0x7 },
    { 0x0, 0x0 },
    { 0x1, 0x1 },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0x8, 0x5 },
    { 0x1, 0xE },
    { 0xD, 0xD },
    { 0x3, 0x3 },
    { 0xB, 0x11 },
    { 0xA, 0x4 },
    { 0xE, 0xE },
    { 0x4, 0x4 },
    { 0xC, 0xC },
    { 0x0, 0x2 },
    { 0xB, 0x4 },
    { 0xB, 0xB },
    { 0x4, 0xE },
    { 0xB, 0xB },
    { 0x7, 0x7 },
    { 0x7, 0x7 },
    { 0xE, 0xE },
    { 0xF, 0xF },
    { 0xF, 0xB },
    { 0xB, 0xB },
    { 0x10, 0x10 },
    { 0x8, 0xE },
    { 0xC, 0xC },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x0, 0x2 },
    { 0x0, 0x0 },
    { 0x6, 0x6 },
    { 0xD, 0xD },
    { 0xC, 0x3 },
    { 0x6, 0x6 },
    { 0x6, 0x2 },
    { 0xB, 0xB },
    { 0xC, 0xC },
    { 0xB, 0xB },
    { 0x0, 0x0 },
    { 0xE, 0xE },
    { 0x3, 0x11 },
    { 0x8, 0xE },
    { 0x5, 0x5 },
    { 0xE, 0xE },
    { 0x0, 0x0 },
    { 0x10, 0x4 },
    { 0x1, 0x1 },
    { 0x4, 0x4 },
    { 0x3, 0x6 },
    { 0x3, 0x1 },
    { 0xB, 0xB },
    { 0xC, 0xF },
    { 0xC, 0x3 },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x6, 0x2 },
    { 0x6, 0x3 },
    { 0x0, 0x2 },
    { 0x0, 0x0 },
    { 0x3, 0x3 },
    { 0x3, 0x3 },
    { 0x3, 0x3 },
    { 0x0, 0x0 },
    { 0xC, 0x3 },
    { 0x6, 0xC },
    { 0x4, 0x4 },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0xE, 0xE },
    { 0x1, 0x1 },
    { 0xC, 0x3 },
    { 0x5, 0x4 },
    { 0xA, 0xA },
    { 0x0, 0x2 },
    { 0x7, 0x3 },
    { 0x5, 0x4 },
    { 0x4, 0x4 },
    { 0x0, 0x0 },
    { 0x3, 0x3 },
    { 0x4, 0x5 },
    { 0xC, 0xC },
    { 0xB, 0xB },
    { 0x0, 0x0 },
    { 0x5, 0xB },
    { 0x5, 0xB },
    { 0x10, 0x10 },
    { 0xC, 0xC },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x0, 0x0 },
    { 0x6, 0x2 },
    { 0x6, 0x3 },
    { 0x0, 0x2 },
    { 0xD, 0xD },
    { 0xB, 0xB },
    { 0x5, 0x5 },
    { 0xC, 0x2 },
    { 0x0, 0x0 },
    { 0xC, 0xC },
    { 0x6, 0x2 },
    { 0xB, 0x4 },
    { 0x11, 0x2 },
    { 0x7, 0x7 },
    { 0xE, 0xE },
    { 0x0, 0x0 },
    { 0x4, 0x2 },
    { 0xB, 0x3 },
    { 0x11, 0xF },
    { 0xA, 0x5 },
    { 0xB, 0x5 },
    { 0xD, 0xD },
    { 0xA, 0xA },
    { 0x5, 0x4 },
    { 0xC, 0xC },
    { 0xA, 0x1 },
    { 0xB, 0x4 },
    { 0x11, 0x11 },
    { 0x0, 0x0 },
    { 0x6, 0x2 },
    { 0x6, 0x3 },
    { 0xB, 0xC },
    { 0xC, 0x11 },
    { 0x0, 0x2 },
    { 0xB, 0x2 },
    { 0x6, 0x2 },
    { 0x0, 0x0 },
    { 0x5, 0x5 },
    { 0x0, 0x0 },
    { 0x11, 0x7 },
    { 0x8, 0x8 },
    { 0x8, 0x5 },
    { 0x1, 0xE },
    { 0xD, 0xD },
    { 0xD, 0xD },
    { 0x6, 0x6 },
    { 0x6, 0x6 },
    { 0xC, 0x3 },
    { 0xB, 0xB },
    { 0x0, 0x0 },
    { 0x4, 0x10 },
    { 0x5, 0xC },
    { 0x5, 0x6 },
    { 0x0, 0x0 },
    { 0xE, 0xE },
    { 0xF, 0xB },
    { 0xB, 0xB },
    { 0x10, 0x10 },
    { 0x8, 0xE },
    { 0xC, 0xC },
    { 0xA, 0x1 },
    { 0xB, 0xB },
    { 0x0, 0x2 },
    { 0x0, 0xB },
    { 0x6, 0x6 },
    { 0xD, 0xD },
    { 0x5, 0x5 },
    { 0x5, 0x8 },
    { 0x6, 0xC },
    { 0x6, 0x2 },
    { 0xD, 0xD },
    { 0x7, 0x2 },
    { 0x0, 0x0 },
    { 0x0, 0x2 },
    { 0x10, 0x4 },
    { 0x0, 0x0 },
    { 0xB, 0x2 },
    { 0x6, 0x4 },
    { 0x6, 0x8 },
    { 0xD, 0xD },
    { 0x4, 0x4 },
    { 0x3, 0x4 },
    { 0x3, 0x4 },
    { 0x0, 0x0 },
    { 0x3, 0x2 },
    { 0xC, 0x3 },
    { 0x6, 0x3 },
    { 0x0, 0x0 },
    { 0x1, 0x1 },
    { 0xE, 0xE },
    { 0xC, 0x3 },
    { 0x5, 0x4 },
    { 0xB, 0xE },
    { 0xD, 0x8 },
    { 0x0, 0x2 },
    { 0xB, 0xF },
    { 0xE, 0xE },
    { 0xB, 0xB },
    { 0xD, 0xD },
    { 0x1, 0x1 },
    { 0x1, 0x1 },
    { 0x3, 0x3 },
    { 0x4, 0x5 },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0xB, 0xB },
    { 0xB, 0xB },
    { 0xE, 0xE },
    { 0xF, 0xE },
    { 0xD, 0xD },
    { 0xA, 0xA },
    { 0x0, 0x0 },
    { 0x5, 0xB },
    { 0x5, 0xB },
    { 0x0, 0x2 },
    { 0xB, 0xD },
    { 0xE, 0x2 },
    { 0xC, 0xC },
    { 0xC, 0x2 },
    { 0xB, 0xE },
    { 0x0, 0xE },
    { 0x6, 0x8 },
    { 0x0, 0x0 },
    { 0xF, 0x4 },
    { 0xB, 0xB },
    { 0xB, 0x2 },
    { 0x8, 0x2 },
    { 0x0, 0x0 },
    { 0x1, 0x1 },
    { 0x0, 0x0 },
    { 0xB, 0xC },
    { 0xC, 0x11 },
    { 0xC, 0x1 },
    { 0x0, 0x0 },
    { 0x6, 0x2 },
    { 0x0, 0x0 },
    { 0x1, 0x1 },
    { 0xD, 0xD },
    { 0x3, 0x3 },
    { 0xB, 0x11 },
    { 0xA, 0x4 },
    { 0xA, 0xA },
    { 0xE, 0xE },
    { 0xC, 0x11 },
    { 0x10, 0x2 },
    { 0x0, 0x0 },
    { 0x3, 0x3 },
    { 0x5, 0xE },
    { 0x5, 0xE },
    { 0xB, 0x4 },
    { 0xB, 0x11 },
    { 0x5, 0xC },
    { 0x5, 0x6 },
    { 0x0, 0x0 },
    { 0x7, 0x7 },
    { 0x7, 0x7 },
    { 0xC, 0x2 },
    { 0x11, 0x11 },
    { 0xF, 0xF },
    { 0xB, 0xB },
    { 0xB, 0xB },
    { 0xB, 0x5 },
    { 0x0, 0x2 },
    { 0x5, 0x5 },
    { 0x5, 0x8 },
    { 0x6, 0x2 },
    { 0xB, 0xB },
    { 0xC, 0xC },
    { 0xB, 0x4 },
    { 0x0, 0x0 },
    { 0x7, 0x2 },
    { 0x0, 0x0 },
    { 0x7, 0x7 },
    { 0x0, 0x0 },
    { 0x3, 0x11 },
    { 0x7, 0x11 },
    { 0x3, 0x1 },
    { 0xC, 0xC },
    { 0xB, 0xB },
    { 0xC, 0xF },
    { 0xF, 0x7 },
    { 0xD, 0x7 },
    { 0x0, 0x2 },
    { 0x0, 0x2 },
    { 0xB, 0xB },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0xA, 0xA },
    { 0xB, 0x1 },
    { 0x1, 0x1 },
    { 0xB, 0x3 },
    { 0xA, 0xA },
    { 0x3, 0x3 },
    { 0xB, 0xF },
    { 0x7, 0x3 },
    { 0xC, 0xE },
    { 0xB, 0xE },
    { 0x6, 0x2 },
    { 0x6, 0x6 },
    { 0xB, 0x2 },
    { 0xB, 0xF },
    { 0xB, 0xB },
    { 0xD, 0xD },
    { 0xA, 0xA },
    { 0x5, 0x2 },
    { 0x0, 0x0 },
    { 0xF, 0x2 },
    { 0xD, 0x2 },
    { 0xA, 0x2 },
    { 0x10, 0x2 },
    { 0xC, 0xC },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x3, 0x2 },
    { 0xD, 0xD },
    { 0xB, 0xB },
    { 0xE, 0xE },
    { 0x11, 0x11 },
    { 0x8, 0x4 },
    { 0x6, 0x8 },
    { 0x6, 0x5 },
    { 0x6, 0x1 },
    { 0x0, 0x0 },
    { 0x11, 0xA },
    { 0xB, 0x10 },
    { 0x4, 0x4 },
    { 0x0, 0x0 },
    { 0x0, 0x0 },
    { 0xD, 0xD },
    { 0xA, 0xA },
    { 0xB, 0xB },
    { 0x5, 0x11 },
    { 0xC, 0xC },
    { 0xA, 0x1 },
    { 0xB, 0x4 },
    { 0xE, 0xE },
    { 0x0, 0x0 },
    { 0x8, 0x5 },
    { 0xB, 0xB },
    { 0x4, 0x10 },
    { 0x4, 0xE },
    { 0xB, 0xB },
    { 0xF, 0xB },
    { 0xE, 0xE },
    { 0x10, 0x2 },
    { 0x8, 0xE },
    { 0x5, 0x5 },
    { 0xF, 0xF },
    { 0x8, 0x8 },
    { 0x10, 0xE },
    { 0x10, 0xE },
    { 0xC, 0x4 },
    { 0xA, 0x1 },
    { 0xB, 0x8 },
    { 0xD, 0xD },
    { 0xC, 0x3 },
    { 0x11, 0x2 },
    { 0x8, 0xE },
    { 0x10, 0x4 },
    { 0x1, 0x8 },
    { 0x4, 0x4 },
    { 0x3, 0x11 },
    { 0x11, 0xF },
    { 0xD, 0x8 },
    { 0x0, 0x0 },
    { 0x4, 0x5 },
    { 0xC, 0xC },
    { 0xD, 0xD },
    { 0xA, 0xA },
    { 0x0, 0x2 },
    { 0x6, 0x2 },
    { 0xC, 0xC },
    { 0xF, 0xF },
    { 0x4, 0x2 },
    { 0xF, 0x4 },
    { 0x0, 0x0 },
    { 0xE, 0x1 },
    { 0x5, 0x8 },
    { 0x7, 0x7 },
    { 0xE, 0xE },
    { 0xE, 0xE },
    { 0xE, 0xE },
    { 0xA, 0x8 },
    { 0xC, 0x3 },
    { 0xA, 0x2 },
    { 0x0, 0x0 }
};

static const u16 Unk_ov104_02240714[] = {
    0x1,
    0x4,
    0x7,
    0xA,
    0xB,
    0xD,
    0xE,
    0x10,
    0x13,
    0x15,
    0x17,
    0x19,
    0x1B,
    0x1D,
    0x20,
    0x23,
    0x25,
    0x27,
    0x29,
    0x2B,
    0x2E,
    0x30,
    0x32,
    0x34,
    0x36,
    0x38,
    0x3C,
    0x3F,
    0x42,
    0x45,
    0x48,
    0x4A,
    0x4F,
    0x51,
    0x54,
    0x56,
    0x58,
    0x5A,
    0x5C,
    0x60,
    0x62,
    0x64,
    0x66,
    0x68,
    0x74,
    0x76,
    0x81,
    0x84,
    0x85,
    0x93,
    0x98,
    0x9B,
    0x9E,
    0xA1,
    0xA3,
    0xA5,
    0xA7,
    0xAA,
    0xAC,
    0xAD,
    0xAE,
    0xAF,
    0xB1,
    0xB3,
    0xB7,
    0xBB,
    0xBF,
    0xC2,
    0xC9,
    0xCC,
    0xD1,
    0xD8,
    0xDA,
    0xDC,
    0xDF,
    0xE1,
    0xE4,
    0xE7,
    0xEB,
    0xEC,
    0xEE,
    0xF6,
    0xFC,
    0xFF,
    0x102,
    0x105,
    0x107,
    0x109,
    0x10A,
    0x10C,
    0x10E,
    0x111,
    0x114,
    0x116,
    0x118,
    0x119,
    0x11B,
    0x11D,
    0x11F,
    0x122,
    0x124,
    0x125,
    0x128,
    0x12A,
    0x12C,
    0x130,
    0x133,
    0x135,
    0x13C,
    0x13E,
    0x142,
    0x145,
    0x148,
    0x14B,
    0x14D,
    0x153,
    0x155,
    0x157,
    0x15D,
    0x161,
    0x163,
    0x168,
    0x169,
    0x16B,
    0x172,
    0x173,
    0x176,
    0x183,
    0x186,
    0x189,
    0x18C,
    0x18F,
    0x191,
    0x193,
    0x196,
    0x19C,
    0x19F,
    0x1A2,
    0x1A4,
    0x1A6,
    0x1AF,
    0x1B1,
    0x1B2,
    0x1B4,
    0x1B6,
    0x1B7,
    0x1B8,
    0x1BB,
    0x1BF,
    0x1C1,
    0x1C3,
    0x1C5,
    0x1C8,
    0x1CB,
    0x2,
    0x5,
    0x8,
    0xC,
    0xF,
    0x11,
    0x14,
    0x18,
    0x1E,
    0x21,
    0x28,
    0x2C,
    0x2F,
    0x33,
    0x3A,
    0x3D,
    0x40,
    0x43,
    0x46,
    0x4B,
    0x4D,
    0x53,
    0x5D,
    0x5F,
    0x69,
    0x6C,
    0x6D,
    0x6F,
    0x72,
    0x78,
    0x89,
    0x8A,
    0x8C,
    0x94,
    0x99,
    0x9C,
    0x9F,
    0xA2,
    0xA6,
    0xA8,
    0xB0,
    0xB4,
    0xB8,
    0xB9,
    0xBC,
    0xBE,
    0xC0,
    0xC1,
    0xC3,
    0xC6,
    0xC8,
    0xCA,
    0xCE,
    0xCF,
    0xD3,
    0xD7,
    0xDB,
    0xDE,
    0xEF,
    0xF0,
    0xF7,
    0xFD,
    0x100,
    0x103,
    0x106,
    0x108,
    0x10B,
    0x10D,
    0x10F,
    0x112,
    0x115,
    0x117,
    0x11C,
    0x126,
    0x12B,
    0x12D,
    0x12E,
    0x12F,
    0x131,
    0x134,
    0x137,
    0x138,
    0x139,
    0x13A,
    0x13B,
    0x140,
    0x147,
    0x149,
    0x159,
    0x15B,
    0x15F,
    0x166,
    0x16C,
    0x16E,
    0x174,
    0x177,
    0x184,
    0x187,
    0x18A,
    0x18D,
    0x190,
    0x192,
    0x194,
    0x198,
    0x19A,
    0x19D,
    0x19E,
    0x1A1,
    0x1A9,
    0x1AB,
    0x1B9,
    0x1BC,
    0x1BE,
    0x1CA,
    0x19D,
    0x19D,
    0x1A,
    0x1C,
    0x1F,
    0x22,
    0x24,
    0x2A,
    0x2D,
    0x31,
    0x35,
    0x39,
    0x41,
    0x47,
    0x4C,
    0x50,
    0x52,
    0x55,
    0x57,
    0x61,
    0x63,
    0x65,
    0x6A,
    0x6B,
    0x6E,
    0x70,
    0x71,
    0x73,
    0x75,
    0x77,
    0x7A,
    0x7C,
    0x7D,
    0x7E,
    0x80,
    0x8B,
    0x8D,
    0xA4,
    0xAB,
    0xB2,
    0xB6,
    0xBD,
    0xC7,
    0xCB,
    0xCD,
    0xD2,
    0xDD,
    0xE0,
    0xE2,
    0xE3,
    0xEA,
    0xED,
    0xF1,
    0x110,
    0x113,
    0x11E,
    0x120,
    0x123,
    0x127,
    0x129,
    0x136,
    0x13D,
    0x13F,
    0x143,
    0x144,
    0x146,
    0x14C,
    0x14E,
    0x14F,
    0x150,
    0x151,
    0x152,
    0x154,
    0x156,
    0x15A,
    0x15C,
    0x160,
    0x162,
    0x164,
    0x165,
    0x167,
    0x16A,
    0x16F,
    0x170,
    0x171,
    0x18E,
    0x199,
    0x19B,
    0x1A0,
    0x1A3,
    0x1A5,
    0x1A7,
    0x1A8,
    0x1AA,
    0x1AC,
    0x1AD,
    0x1B0,
    0x1B3,
    0x1BA,
    0x1C6,
    0x1C7,
    0x1C9,
    0x1CC,
    0x1DE,
    0x1DF,
    0x12,
    0x16,
    0x9,
    0x26,
    0x37,
    0x3B,
    0x3E,
    0x44,
    0x49,
    0x4E,
    0x59,
    0x5B,
    0x5E,
    0x67,
    0x79,
    0x7B,
    0x7F,
    0x82,
    0x83,
    0x86,
    0x87,
    0x88,
    0x8E,
    0x8F,
    0x90,
    0x91,
    0x92,
    0x95,
    0x9A,
    0x9D,
    0xA0,
    0xA9,
    0xB5,
    0xBA,
    0xC4,
    0xC5,
    0xD0,
    0xD4,
    0xD5,
    0xD6,
    0xD9,
    0xE5,
    0xE6,
    0xE8,
    0xE9,
    0xF2,
    0xF3,
    0xF4,
    0xF5,
    0xF8,
    0xFE,
    0x101,
    0x104,
    0x11A,
    0x121,
    0x132,
    0x141,
    0x14A,
    0x158,
    0x15E,
    0x16D,
    0x1E8,
    0x175,
    0x178,
    0x179,
    0x17A,
    0x17B,
    0x17C,
    0x17D,
    0x185,
    0x188,
    0x18B,
    0x195,
    0x197,
    0x1AE,
    0x1B5,
    0x1BD,
    0x1C0,
    0x1C2,
    0x1C4,
    0x1CD,
    0x1CE,
    0x1CF,
    0x1D0,
    0x1D1,
    0x1D2,
    0x1D3,
    0x1D4,
    0x1D5,
    0x1D6,
    0x1D7,
    0x1D8,
    0x1D9,
    0x1DA,
    0x1DB,
    0x1DC,
    0x1DD,
    0x1E0,
    0x1E1,
    0x1E2,
    0x1E5,
    0x3,
    0x6,
    0x1E6
};

static const UnkStruct_ov104_0224033C Unk_ov104_0224033C[10] = {
    { 0x0, 0x8, 0x0 },
    { 0x0, 0xA, 0x0 },
    { 0x0, 0xC, 0x0 },
    { 0x0, 0xE, 0x0 },
    { 0x0, 0x10, 0x0 },
    { 0x0, 0x12, 0x0 },
    { 0x0, 0x14, 0x0 },
    { 0x0, 0x16, 0x0 },
    { 0x0, 0x18, 0x0 },
    { 0x0, 0x1A, 0x0 }
};

void ov104_0223AF58(u8 param0, u8 param1, u8 param2, u8 param3, u16 param4[])
{
    int v0;
    u16 v1;
    u8 v2, v3;
    int v4 = 0;

    v2 = (param3 * 2);
    v3 = ov104_0223B644(param2);

    do {
        v1 = (LCRNG_Next() % (8 + 4));

        if (v1 < 8) {
            param4[v2 + v4] = Unk_ov104_0224041C[v3][v1];
        } else {
            param4[v2 + v4] = Unk_ov104_0224038C[param0][v1 - 8];
        }

        v4++;
    } while (v4 < param1);

    return;
}

void ov104_0223AFB4(u8 param0, u8 param1, int param2, u8 param3, u8 param4, u16 param5[])
{
    int v0, v1, v2, v3, v4;
    u16 v5, v6;
    u8 v7, v8;

    v3 = 0;
    v7 = (param4 * 2);
    v8 = ov104_0223B644(param3);

    if (param0 == 0) {
        v2 = (param2 * 10) + (param4 + 1);

        if (v2 == 50) {
            param5[v7] = 307;
            return;
        } else if (v2 == 170) {
            param5[v7] = 308;
            return;
        }
    }

    do {
        v5 = (LCRNG_Next() % (NELEMS(Unk_ov104_022404BC)));
        v1 = v5;

        while (TRUE) {
            v4 = param5[v7 + v3];

            if (v4 == Unk_ov104_022404BC[v5]) {
                for (v0 = 0; v0 < (v7 + v3); v0++) {
                    if (param5[v0] == v5) {
                        break;
                    }
                }

                if (v0 == (v7 + v3)) {
                    param5[v7 + v3] = v5;
                    v3++;
                    break;
                }
            }

            v5++;

            if (v5 >= (NELEMS(Unk_ov104_022404BC))) {
                v5 = 0;
            }

            if (v5 == v1) {
                while (TRUE) {
                    v6 = (LCRNG_Next() % 8);

                    if (v4 != Unk_ov104_0224041C[v8][v6]) {
                        param5[v7 + v3] = Unk_ov104_0224041C[v8][v6];
                        break;
                    }
                }
            }
        }
    } while (v3 < param1);

    return;
}

static const UnkStruct_ov104_02240364 Unk_ov104_02240364[] = {
    { 0x1, 0x9A },
    { 0x1, 0x9A },
    { 0x1, 0x10E },
    { 0x1, 0x10E },
    { 0x1, 0x10E },
    { 0x9B, 0x177 },
    { 0x9B, 0x177 },
    { 0x9B, 0x177 },
    { 0x10F, 0x1DD },
    { 0x10F, 0x1DD }
};

static const UnkStruct_ov104_02240364 Unk_ov104_0224032C[] = {
    { 0x1, 0x9A },
    { 0x9B, 0x10E },
    { 0x10F, 0x177 },
    { 0x178, 0x1DD }
};

void ov104_0223B0C8(u8 param0, u8 param1, u8 param2, u8 param3, u16 param4, u16 param5[], u8 param6)
{
    const UnkStruct_ov104_02240364 *v0;
    u8 v1, v2, v3;
    u16 v4, v5, v6, v7, v8, v9;
    int v10 = 0;
    u16 v11 = 0;

    v3 = 0;
    v1 = (param3 * 2);
    v2 = ov104_0223B644(param2);

    if (param6 != 0) {
        for (v7 = 0; v7 < (NELEMS(Unk_ov104_02240714)); v7++) {
            if (param4 == Unk_ov104_02240714[v7]) {
                v9 = v7;
                break;
            }
        }

        if (v7 == (NELEMS(Unk_ov104_02240714))) {
            v9 = Unk_ov104_0224032C[NELEMS(Unk_ov104_0224032C) - 1].unk_00;
        }

        for (v7 = 0; v7 < (NELEMS(Unk_ov104_0224032C)); v7++) {
            if (v9 < Unk_ov104_0224032C[v7].unk_02) {
                break;
            }
        }

        if (v7 == (NELEMS(Unk_ov104_0224032C))) {
            v7 = (NELEMS(Unk_ov104_0224032C) - 1);
        }

        if (param6 == 2) {
            v0 = &Unk_ov104_0224032C[(NELEMS(Unk_ov104_0224032C) - 1)];
        } else {
            v0 = &Unk_ov104_0224032C[v7];
        }
    } else {
        v0 = &Unk_ov104_02240364[v2];
    }

    v5 = (v0->unk_02 - v0->unk_00) + 1;
    v4 = v0->unk_00 + (LCRNG_Next() % v5);
    v4 -= 1;
    v6 = v4;

    while (v10 < param0) {
        if (v3 == 0) {
            for (v8 = 0; v8 < v1; v8++) {
                if (param5[v8] == (v4 + 1)) {
                    break;
                }
            }
        } else {
            if (param5[v1 - 2] == (v4 + 1)) {
                v8 = 0;
            } else {
                v8 = v1;
            }
        }

        if (v8 == v1) {
            if (param6 != 0) {
                if (param4 != Unk_ov104_02240714[v4]) {
                    param5[v1 + v10] = (v4 + 1);
                    v10++;
                }
            } else {
                if ((param1 == Unk_ov104_02240ACE[v4][0]) || (param1 == Unk_ov104_02240ACE[v4][1])) {
                    if (param4 != Unk_ov104_02240714[v4]) {
                        param5[v1 + v10] = (v4 + 1);

                        v10++;
                    }
                }
            }
        }

        v4++;

        if ((v4 + 1) >= v0->unk_02) {
            v4 = (v0->unk_00 - 1);
        }

        if (v4 == v6) {
            v3 = 1;
        }
    }

    return;
}

FieldBattleDTO *ov104_0223B250(UnkStruct_ov104_0223B5C0 *param0, UnkStruct_ov104_02230BE4 *param1)
{
    int v1;
    u8 v7;
    Pokemon *v9;
    FrontierTrainerDataDTO v10;

    u8 v6 = (param0->unk_05 * 2);
    u8 v4 = ov104_0223B500(param0->unk_04);
    u8 v5 = ov104_0223B50C(param0->unk_04);
    Party *v13 = SaveData_GetParty(param0->saveData);

    Party_HealAllMembers(v13);

    FieldBattleDTO *v8 = FieldBattleDTO_New(HEAP_ID_FIELDMAP, ov104_0223B4D4(param0->unk_04));
    FieldBattleDTO_InitFromGameState(v8, NULL, param1->saveData, param1->unk_1C, param1->journalEntry, param1->bagCursor, param1->unk_20);

    v8->background = BACKGROUND_BATTLE_HALL;
    v8->terrain = TERRAIN_BATTLE_HALL;
    Party_InitWithCapacity(v8->parties[0], v4);

    v9 = Pokemon_New(HEAP_ID_FIELDMAP);

    for (v1 = 0; v1 < v4; v1++) {
        Pokemon_Copy(Party_GetPokemonBySlotIndex(v13, param0->unk_260[v1]), v9);
        FieldBattleDTO_AddPokemonToBattler(v8, v9, 0);
    }

    Heap_Free(v9);
    FieldBattleDTO_CopyPlayerInfoToTrainerData(v8);

    Heap_Free(ov104_0222DD04(&v10, param0->unk_18[v6], HEAP_ID_FIELDMAP, NARC_INDEX_BATTLE__B_PL_TOWER__PL_BTDTR));
    ov104_0222E284(v8, &v10, v5, 1, 11);
    Party_InitWithCapacity(v8->parties[1], v5);

    v7 = sub_020301E0(param0->unk_6F5, &param0->unk_704[param0->unk_04][0]);

    if (param0->unk_04 == 2) {
        v7 = (10 - 1);
    }

    u16 v2 = ov104_0223B604(param0, v6, v7);

    for (v1 = 0; v1 < 4; v1++) {
        v8->trainer[v1].header.aiMask = v2;
    }

    ov104_0223B518(&param0->unk_290[v6], v7, param0->unk_18[v6], &param0->unk_268[v6], v5, HEAP_ID_FIELDMAP, NARC_INDEX_BATTLE__B_PL_STAGE__PL_BSDPM);

    v9 = Pokemon_New(HEAP_ID_FIELDMAP);

    for (v1 = 0; v1 < v5; v1++) {
        while (TRUE) {
            if (ov104_0223B4A4(param0, v6) == 0) {
                break;
            }
        }

        ov104_0222DF40(&param0->unk_290[v6], v9, ov104_0223B57C(param0, v7));

        Pokemon_CalcAbility(v9);
        FieldBattleDTO_AddPokemonToBattler(v8, v9, 1);
    }

    Heap_Free(v9);

    switch (param0->unk_04) {
    case 2:
    case 3:
        FieldBattleDTO_CopyPlayerInfoToTrainerData(v8);

        TrainerInfo_Copy(CommInfo_TrainerInfo(1 - CommSys_CurNetId()), v8->trainerInfo[2]);

        Heap_Free(ov104_0222DD04(&v10, param0->unk_18[v6 + 1], HEAP_ID_FIELDMAP, NARC_INDEX_BATTLE__B_PL_TOWER__PL_BTDTR));

        ov104_0222E284(v8, &v10, v5, 3, 11);
        Party_InitWithCapacity(v8->parties[3], v5);

        v9 = Pokemon_New(HEAP_ID_FIELDMAP);

        while (TRUE) {
            if (ov104_0223B4A4(param0, v6) == 0) {
                break;
            }
        }

        ov104_0222DF40(&param0->unk_290[v6], v9, ov104_0223B57C(param0, v7));

        Pokemon_CalcAbility(v9);
        FieldBattleDTO_AddPokemonToBattler(v8, v9, 3);
        Heap_Free(v9);
        break;
    }

    return v8;
}

static BOOL ov104_0223B4A4(UnkStruct_ov104_0223B5C0 *param0, u8 param1)
{
    if (param0->unk_290[param1].personality > ((24 + 1) * 10001)) {
        param0->unk_290[param1].personality -= ((24 + 1) * 10001);
    } else {
        param0->unk_290[param1].personality += ((24 + 1) * 10001);
    }

    return Pokemon_IsPersonalityShiny(param0->unk_290[param1].otID, param0->unk_290[param1].personality);
}

static u32 ov104_0223B4D4(u8 param0)
{
    switch (param0) {
    case 0:
        return (0x0 | 0x1) | 0x80;
    case 1:
        return (0x2 | 0x1) | 0x80;
    case 2:
        return (((0x4 | 0x1) | 0x2) | 0x8) | 0x80;
    case 3:
        return (((0x4 | 0x1) | 0x2) | 0x8) | 0x80;
    }

    return (0x0 | 0x1) | 0x80;
}

u8 ov104_0223B500(u8 param0)
{
    switch (param0) {
    case 1:
        return 2;
    }

    return 1;
}

u8 ov104_0223B50C(u8 param0)
{
    switch (param0) {
    case 1:
        return 2;
    }

    return 1;
}

static void ov104_0223B518(FrontierPokemonDataDTO *param0, u8 param1, u16 param2, u16 param3[], int param4, int param5, int param6)
{
    int v0;
    u32 v1;
    u8 v2;
    u32 v3;

    if (param2 == 307) {
        v3 = 31;
    } else if (param2 == 308) {
        v3 = 31;
    } else {
        v3 = ov104_0223B5F0(param1);
    }

    for (v0 = 0; v0 < param4; v0++) {
        ov104_0222E2F0(&param0[v0], param3[v0], v0, v3, 0, param5, param6);
    }

    return;
}

static u32 ov104_0223B57C(UnkStruct_ov104_0223B5C0 *param0, u8 param1)
{
    u8 v0;
    u32 v1;

    v0 = (param0->unk_05 * 2);

    if ((param0->unk_18[v0] == 307) || (param0->unk_18[v0] == 308)) {
        v1 = ov104_0223B64C(param0);
    } else {
        v1 = param0->unk_07;
    }

    return v1;
}

static const u8 Unk_ov104_02241244[20] = {
    0x0,
    0xA,
    0xB,
    0xD,
    0xC,
    0xF,
    0x1,
    0x3,
    0x4,
    0x2,
    0xE,
    0x6,
    0x5,
    0x7,
    0x10,
    0x11,
    0x8,
    0xfe,
    0xfe,
    0x9
};

u8 ov104_0223B5A4(u8 param0)
{
    return Unk_ov104_02241244[param0];
}

BOOL ov104_0223B5B0(u8 param0)
{
    switch (param0) {
    case 2:
    case 3:
        return 1;
    }

    return 0;
}

u8 ov104_0223B5C0(UnkStruct_ov104_0223B5C0 *param0)
{
    u32 v0;
    int v1;
    Party *v2 = SaveData_GetParty(param0->saveData);
    Pokemon *v3 = Party_GetPokemonBySlotIndex(v2, param0->unk_260[0]);
    v1 = Pokemon_GetValue(v3, MON_DATA_LEVEL, NULL);

    return v1 / 10;
}

static u8 ov104_0223B5F0(u8 param0)
{
    return Unk_ov104_0224033C[ov104_0223B644(param0)].unk_01;
}

static u16 ov104_0223B604(UnkStruct_ov104_0223B5C0 *param0, u8 param1, u8 param2)
{
    u8 v0;
    u16 v1;

    if ((param2 + 1) >= 8) {
        v1 = (0x1 | 0x2 | 0x4);
    } else if ((param2 + 1) >= 4) {
        v1 = 0x1;
    } else {
        v1 = 0;
    }

    if (param0->unk_04 == 0) {
        v0 = (param1 * 2);

        if ((param0->unk_18[v0] == 307) || (param0->unk_18[v0] == 308)) {
            v1 = (0x1 | 0x2 | 0x4);
        }
    }

    if (param0->unk_04 == 2) {
        v1 = (0x1 | 0x2 | 0x4);
    }

    return v1;
}

static u16 ov104_0223B644(u8 param0)
{
    u8 v0 = param0;

    if (v0 >= 10) {
        v0 = (10 - 1);
    }

    return v0;
}

u16 ov104_0223B64C(UnkStruct_ov104_0223B5C0 *param0)
{
    Party *v0;
    Pokemon *v1;
    u16 v2, v3;

    v0 = SaveData_GetParty(param0->saveData);
    v1 = Party_GetPokemonBySlotIndex(v0, param0->unk_260[0]);
    v2 = Pokemon_GetValue(v1, MON_DATA_LEVEL, NULL);

    if (ov104_0223B500(param0->unk_04) == 2) {
        v1 = Party_GetPokemonBySlotIndex(v0, param0->unk_260[1]);
        v3 = Pokemon_GetValue(v1, MON_DATA_LEVEL, NULL);

        if (v2 > v3) {
            return v2;
        } else {
            return v3;
        }
    } else {
        if (ov104_0223B5B0(param0->unk_04) == 1) {
            if (v2 > param0->unk_D84[0]) {
                return v2;
            } else {
                return param0->unk_D84[0];
            }
        }
    }

    return v2;
}

fx32 ov104_0223B6C4(u32 param0)
{
    return FX_Sqrt(FX32_CONST(param0));
}
