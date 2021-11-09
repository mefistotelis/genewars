/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file lab.hpp
 *     Header file for lab.cpp.
 * @par Purpose:
 *     Unknown.
 * @par Comment:
 *     None.
 * @author   Tomasz Lis
 * @date     12 Nov 2008 - 05 Nov 2021
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef BIO_LAB_HPP_
#define BIO_LAB_HPP_

struct { // sizeof=12
    unsigned int __index;
    unsigned int __delta;
    void * (*__fn)();
};

enum { // type=int8_t
    MAKE_NOTREADY = 0,
    MAKE_READYPRESSED,
    MAKE_READY,
};

enum { // type=int8_t
    OPTSPR_LS = 0,
    OPTSPR_EXIT,
    OPTSPR_RS,
    OPTSPR_SM,
    OPTSPR_PICKER,
};

enum { // type=int8_t
    OPTIONS_MUSIC_SLIDER = 0,
    OPTIONS_MUSIC_TOGGLE,
    OPTIONS_SFX_SLIDER,
    OPTIONS_SFX_TOGGLE,
    OPTIONS_LOAD,
    OPTIONS_SAVE, // 5
    OPTIONS_SLOTS,
    OPTIONS_QUIT_TO_DOS,
    OPTIONS_ABANDON,
    OPTIONS_RESUME,
};

typedef void *NSERV_HANDLE;

typedef void *CALLBACK;

typedef uint32_t BOOL;

typedef uint32_t clock_t;

typedef void (*onexit_t)();

typedef unsigned int ino_t;

typedef unsigned int size_t;

typedef uint32_t time_t;

typedef uint16_t wchar_t;

struct TbSprite { // sizeof=6
    SBYTE *Data; // offset=0
    UBYTE SWidth; // offset=4
    UBYTE SHeight; // offset=5
};

typedef struct TbSprite TbSprite;

struct FontKernData { // sizeof=225
    UBYTE KernedCount; // offset=0
    UBYTE CharactersKerned[223]; // offset=1
    SBYTE Kern[255]; // offset=225
};

typedef struct FontKernData FontKernData;

struct Colour { // sizeof=3
    UBYTE Red; // offset=0
    UBYTE Green; // offset=1
    UBYTE Blue; // offset=2
};

typedef struct Colour Colour;

struct FontInfo { // sizeof=28
    TbSprite *SpaceSprite; // offset=0
    FontKernData *TextKerningData; // offset=4
    Colour *Palette; // offset=8
    UBYTE *FFCTable; // offset=12
    ULONG ControlFlags; // offset=16
    ULONG PenColour; // offset=20
    ULONG OutlineColour; // offset=24
};

typedef struct FontInfo FontInfo;

class TurnPrintInfo { // sizeof=110
    BBOOL Print();
    char *drawCurrent;
    char *current;
    SLONG delayCount;
    SLONG count;
    SLONG length;
    SLONG x; // offset=0
    SLONG y; // offset=4
    SLONG delay; // offset=8
    SLONG step; // offset=12
    char *str; // offset=16
    char hilite[2][9]; // offset=20
    char *drawStr; // offset=50
    FontInfo dfi; // offset=54
    ULONG drawing; // offset=82
    SLONG linesDrawn; // offset=86
};

typedef class TurnPrintInfo TurnPrintInfo;


typedef class Specialist Specialist;

typedef class Player Player;


class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

class GunSpec { // sizeof=7
    SWORD shotSpeed; // offset=0
    SWORD shotLifeInTurns; // offset=2
    SWORD reloadTime; // offset=4
    UBYTE shotEffect; // offset=6
};

typedef class GunSpec GunSpec;


struct __24e741VDI_HDR { // sizeof=10
    BYTE ID[7]; // offset=0
    ULONG driver_version; // offset=8
    REALFAR common_IO_configurations; // offset=12
    UWORD num_IO_configurations; // offset=16
    REALFAR environment_string; // offset=18
    IO_PARMS IO; // offset=22
    WORD service_rate; // offset=46
    UWORD busy; // offset=48
    UWORD driver_num; // offset=50
    UWORD this_ISR; // offset=52
    REALFAR prev_ISR; // offset=54
    BYTE scratch[127]; // offset=58
    BYTE dev_name[79]; // offset=186
};

typedef struct __24e741VDI_HDR VDI_HDR;

struct __3f9o8oAIL_DRIVER { // sizeof=44
    REALFAR seg; // offset=0
    ULONG sel; // offset=4
    void *buf; // offset=8
    ULONG size; // offset=12
    VDI_HDR *VHDR; // offset=16
    LONG type; // offset=20
    LONG initialized; // offset=24
    LONG PM_ISR; // offset=28
    HTIMER server; // offset=32
    void (*destructor)(void *arg1); // offset=36
    void *descriptor; // offset=40
};

typedef struct __3f9o8oAIL_DRIVER AIL_DRIVER;

struct __4qsnj8DIG_MODE { // sizeof=14
    UWORD minimum_physical_sample_rate; // offset=0
    UWORD nominal_physical_sample_rate; // offset=2
    UWORD maximum_physical_sample_rate; // offset=4
    UWORD minimum_DMA_half_buffer_size; // offset=6
    UWORD maximum_DMA_half_buffer_size; // offset=8
    ULONG flags; // offset=10
};

typedef struct __4qsnj8DIG_MODE DIG_MODE;

struct __1th3moDIG_DDT { // sizeof=240
    UBYTE format_supported[15]; // offset=0
    DIG_MODE format_data[15]; // offset=16
};

typedef struct __1th3moDIG_DDT DIG_DDT;

struct __3n9rjlDIG_DST { // sizeof=10
    REALFAR DMA_buffer_A; // offset=0
    REALFAR DMA_buffer_B; // offset=4
    WORD active_buffer; // offset=8
};

typedef struct __3n9rjlDIG_DST DIG_DST;

typedef struct _SAMPLE SAMPLE;

struct _DIG_DRIVER { // sizeof=140
    AIL_DRIVER *drvr; // offset=0
    DIG_DDT *DDT; // offset=4
    DIG_DST *DST; // offset=8
    HTIMER timer; // offset=12
    LONG half_buffer_size; // offset=16
    LONG DMA_rate; // offset=20
    LONG hw_format; // offset=24
    ULONG hw_mode_flags; // offset=28
    REALFAR DMA_seg; // offset=32
    ULONG DMA_sel; // offset=36
    void *DMA_buf; // offset=40
    void *DMA[1]; // offset=44
    WORD *buffer_flag; // offset=52
    LONG last_buffer; // offset=56
    LONG channels_per_sample; // offset=60
    LONG bytes_per_channel; // offset=64
    LONG channels_per_buffer; // offset=68
    LONG samples_per_buffer; // offset=72
    LONG build_size; // offset=76
    LONG *build_buffer; // offset=80
    LONG playing; // offset=84
    LONG quiet; // offset=88
    SAMPLE *samples; // offset=92
    LONG n_samples; // offset=96
    LONG n_active_samples; // offset=100
    LONG master_volume; // offset=104
    LONG system_data[7]; // offset=108
};

typedef struct _DIG_DRIVER _DIG_DRIVER;

struct _SAMPLE { // sizeof=148
    _DIG_DRIVER *driver; // offset=0
    ULONG status; // offset=4
    void *start[1]; // offset=8
    ULONG len[1]; // offset=16
    ULONG pos[1]; // offset=24
    ULONG done[1]; // offset=32
    LONG current_buffer; // offset=40
    LONG last_buffer; // offset=44
    LONG loop_count; // offset=48
    LONG format; // offset=52
    ULONG flags; // offset=56
    LONG playback_rate; // offset=60
    LONG volume; // offset=64
    LONG pan; // offset=68
    CALLBACK SOB; // offset=72
    LONG vol_scale[1][255]; // offset=73
    CALLBACK EOB; // offset=76
    CALLBACK EOS; // offset=80
    LONG user_data[7]; // offset=84
    LONG system_data[7]; // offset=116
};

typedef SAMPLE *HSAMPLE;

struct SampleInfo { // sizeof=25
    HSAMPLE SampleHandle; // offset=0
    SLONG SampleVolume; // offset=4
    UWORD SamplePitch; // offset=8
    UWORD SamplePan; // offset=10
    UWORD FadeToVolume; // offset=12
    ULONG SourceID; // offset=14
    SWORD SampleNumber; // offset=18
    UBYTE FadeState; // offset=20
    UBYTE FadeStopFlag; // offset=21
    UBYTE FadeStep; // offset=22
    UBYTE UserFlag; // offset=23
    UBYTE SampleType; // offset=24
};

typedef struct SampleInfo SampleInfo;

class SoundTag { // sizeof=6
    void SetNewSample();
    BBOOL IsNewSample();
    ULONG id; // offset=0
    SampleID sampleNum; // offset=4
};

typedef class SoundTag SoundTag;

class SpeechFileStatus { // sizeof=8
    BBOOL Valid();
    void Invalidate();
    TbFileHandle handle; // offset=0
    SLONG numSamples; // offset=4
};

typedef class SpeechFileStatus SpeechFileStatus;

class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;



class LabPad : MainInterfacePad { // sizeof=124
    class LabPad * LabPad(class LabPad *arg1);
    BBOOL IsListScrolling();
    void KickOffNewSpeciesStuff();
    void DrawMainWindow();
    void DrawList();
    void DrawListCreature(CreatureSpecies arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void Draw(SBYTE arg1);
    void MapDraw();
    BBOOL Update(SWORD arg1);
    void Close();
    void Init(Thing *arg1);
    class LabPad * LabPad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    uint8_t rightActive;
    uint8_t leftActive;
    SLONG sinTheta;
    SBYTE scrollPhase;
    SBYTE scrollDir;
    SBYTE listPosition;
    MyMinSprite mainMMs;
    char mainStr[63];
    TurnPrintInfo tpi;
    TurnPrintInfo nameTpi;
    Building *lab; // offset=4
    UBYTE makeStatus; // offset=8
    MyAnimBank *anb; // offset=9
    MySprite *mSpr; // offset=13
    TbSprite *spr; // offset=17
};

char unsigned Building::IsGenelabReady();
char unsigned Building::IsGenelabBusy();
near MainInterfacePad::MainInterfacePad();
char unsigned LabPad::IsListScrolling();
char unsigned * __defarg();
void MainInterfacePad::StartStaticNoise();
void MainInterfacePad::StopStaticNoise();
void MainInterfacePad::__vfthunk( Thing * );
char unsigned MainInterfacePad::__vfthunk( short );
void MainInterfacePad::__vfthunk( char signed );
void MainInterfacePad::__vfthunk();
void MainInterfacePad::__vfthunk();
near LabPad::LabPad();
void LabPad::Init( Thing * );
void LabPad::Close();
char unsigned LabPad::Update( short );
void LabPad::MapDraw();
void LabPad::KickOffNewSpeciesStuff();
void LabPad::DrawMainWindow();
extern void (near * const __vftbl[])();
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
void LabPad::DrawListCreature( CreatureSpecies, long, long, char unsigned );
void LabPad::DrawList();
void LabPad::Draw( char signed );
extern void (near * const __vftbl[])();

#endif // BIO_LAB_HPP_
/******************************************************************************/
