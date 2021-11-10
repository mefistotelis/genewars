/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file optimize.hpp
 *     Header file for optimize.cpp.
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
#ifndef BIO_OPTIMIZE_HPP_
#define BIO_OPTIMIZE_HPP_

enum { // type=int8_t
    SCIE_SPR_STUDY = 13,
    SCIE_SPR_HEAL,
    SCIE_SPR_SHOOT, // 15
};

enum { // type=int8_t
    SHEP_SPR_HERD = 13,
    SHEP_SPR_SHOOT,
    SHEP_SPR_SHOOTSTASIS = 22,
};

enum { // type=int8_t
    FARM_SPR_HARVEST = 13,
    FARM_SPR_PLANT,
    FARM_SPR_CHOP, // 15
};

enum { // type=int8_t
    ARCH_SPR_FOUNDATION = 13,
    ARCH_SPR_PELLET,
    ARCH_SPR_BUILD, // 15
    ARCH_SPR_DRONE,
    ARCH_SPR_BOOM,
};

enum { // type=int8_t
    FNDERR_TOOCLOSE = 1,
    FNDERR_WATER,
    FNDERR_TREES,
    FNDERR_TIRED,
};


enum { // type=int8_t
    CL_BLACK = 0,
    CL_WHITE,
    CL_RED,
    CL_GREEN,
    CL_BLUE,
    CL_YELLOW, // 5
    CL_CYAN,
    CL_MAGENTA,
};

typedef void *CALLBACK;

typedef uint32_t clock_t;

typedef void (*onexit_t)();

typedef unsigned int ino_t;

typedef unsigned int size_t;

typedef uint32_t time_t;

typedef uint16_t wchar_t;



struct BuildingStage { // sizeof=1
    uint8_t player; // offset=0
    uint8_t stage; // offset=1
};

typedef struct BuildingStage BuildingStage;

class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

typedef class EventHelp EventHelp;

class GunSpec { // sizeof=7
    SWORD shotSpeed; // offset=0
    SWORD shotLifeInTurns; // offset=2
    SWORD reloadTime; // offset=4
    UBYTE shotEffect; // offset=6
};

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

class SoundConfig { // sizeof=10
    void Set();
    void Write(char *arg1);
    void Read(char *arg1);
    SLONG sfxVolume; // offset=0
    SLONG musicVolume; // offset=4
    BBOOL sfxOn; // offset=8
    BBOOL musicOn; // offset=9
};


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

enum TeamCircleMode { // type=int8_t
    TC_OPENING = 0,
    TC_CLOSING,
    TC_NORMAL,
};

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





class HelpDraw { // sizeof=26
    void GenericHelpDraw(MyGadget *arg1, char *arg2);
    void Draw(MyGadget *arg1, char *arg2);
    void SetColors(UBYTE arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4);
    void DislodgeAndReset();
    void Dislodge();
    SWORD hx; // offset=0
    SWORD hy; // offset=2
    SWORD hWidth; // offset=4
    SLONG turn; // offset=6
    SLONG length; // offset=10
    ULONG id; // offset=14
    UBYTE pen; // offset=18
    UBYTE outline; // offset=19
    UBYTE fill; // offset=20
    UBYTE boxOutline; // offset=21
    MyGadget *gad; // offset=22
};


class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};




class InfoRequester { // sizeof=142
    class InfoRequester * InfoRequester(class InfoRequester *arg1);
    void DrawPic(SLONG arg1, SLONG arg2);
    BBOOL Valid();
    void Invalidate();
    void Draw();
    BBOOL Update();
    void Create(char *arg1, char *arg2, char *arg3, SLONG arg4);
    class InfoRequester * InfoRequester();
    uint8_t picActive;
    UBYTE picReveal;
    UBYTE picBuffer[63];
    SLONG textWidth;
    char text[255];
    char title[63];
    TurnPrintInfo textTpi;
    TurnPrintInfo titleTpi;
};

class EtherealScope { // sizeof=11
    //EtherealScope(EtherealScope *arg1);
    void Draw();
    void Init();
    //EtherealScope();
    BBOOL blipHitSaucer;
    UBYTE saucerFade;
    SLONG blipRange;
    MyMinSprite etherealMms;
};


class LumberjackScan : RangeScanner { // sizeof=57
    class LumberjackScan * LumberjackScan(class LumberjackScan *arg1);
    void PerGrid();
    class LumberjackScan * LumberjackScan(PlSpec arg1);
    //void (**__vfptr)();
    SLONG dirBonus;
    SLONG bestValue;
    PlSpec pls;
    Plant *tgtPlant; // offset=41
};

class HarvestClearScan : RangeScanner { // sizeof=55
    class HarvestClearScan * HarvestClearScan(class HarvestClearScan *arg1);
    void Do();
    void PerGrid();
    class HarvestClearScan * HarvestClearScan(PlSpec arg1, BBOOL arg2, BBOOL arg3);
    //void (**__vfptr)();
    BBOOL clearFlags;
    BBOOL collect;
    ResearchGrid rGrid;
    PlSpec pls;
    ULONG seedsGot; // offset=41
};

class FarmerPlantingScan : WeightedRangeScanner { // sizeof=115
    class FarmerPlantingScan * FarmerPlantingScan(class FarmerPlantingScan *arg1);
    void PerGrid();
    class FarmerPlantingScan * FarmerPlantingScan(PlSpec arg1, BBOOL arg2);
    //void (**__vfptr)();
    BBOOL rangeInvert;
    PSpecies pSpc;
    PlSpec pls;
};

class SurvivalScan : RangeScanner { // sizeof=53
    class SurvivalScan * SurvivalScan(class SurvivalScan *arg1);
    void PerGrid();
    class SurvivalScan * SurvivalScan(PlSpec arg1, ULONG arg2);
    //void (**__vfptr)();
    ULONG bestRange;
    PlSpec pls;
    Creature *tgtCreature; // offset=41
};

class StudyCreatureScan : RangeScanner { // sizeof=53
    class StudyCreatureScan * StudyCreatureScan(class StudyCreatureScan *arg1);
    void PerGrid();
    class StudyCreatureScan * StudyCreatureScan(PlSpec arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    PlSpec scientist;
    Creature *tgtCreature; // offset=41
};

class HealCreatureScan : RangeScanner { // sizeof=53
    class HealCreatureScan * HealCreatureScan(class HealCreatureScan *arg1);
    void PerGrid();
    class HealCreatureScan * HealCreatureScan(PlSpec arg1);
    //void (**__vfptr)();
    ULONG bestRange;
    PlSpec scientist;
    Creature *tgtCreature; // offset=41
};






void BlastScreens();
void ZeroVRAM();
void FragCopyBScreenToWScreen( XY, XY );
void FragCopyWScreenToVRAM( XY, XY );
void CopyRegion( short, short, short, short, short, short );
void RefreshFromBScreenNormal();
void RefreshToVRAM();
void copy_svga_box( short unsigned, short unsigned, short unsigned, short unsigned );
void SwapScreensBio();

#endif // BIO_OPTIMIZE_HPP_
/******************************************************************************/
