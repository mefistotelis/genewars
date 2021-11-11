/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file data.hpp
 *     Header file for data.cpp.
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
#ifndef BIO_DATA_HPP_
#define BIO_DATA_HPP_

typedef enum LevelDrawPhase LevelDrawPhase;

class GameFlags { // sizeof=1
    uint8_t LostLevel; // offset=0
    uint8_t WonLevel; // offset=1
    uint8_t Conquest; // offset=2
    uint8_t MusicOn; // offset=3
    uint8_t SoundOn; // offset=4
    uint8_t GameStart; // offset=5
    uint8_t WorldGenerated; // offset=6
    uint8_t QuitGame; // offset=7
};

typedef class GameFlags GameFlags;

class ControllerInfo { // sizeof=13
    SWORD PointerX; // offset=0
    SWORD PointerY; // offset=2
    SWORD PointerXClicked; // offset=4
    SWORD PointerYClicked; // offset=6
    uint8_t RightReleased; // offset=8
    uint8_t ButtonTwoPressed; // offset=9
    uint8_t ButtonFourHeld; // offset=10
    uint8_t ButtonUpReleased; // offset=11
    uint8_t ButtonDownHeld; // offset=12
    uint8_t ButtonDownReleased; // offset=13
    uint8_t ButtonDownPressed; // offset=14
    uint8_t ButtonUpHeld; // offset=15
    uint8_t ButtonUpPressed; // offset=16
    uint8_t ButtonRightHeld; // offset=17
    uint8_t ButtonRightReleased; // offset=18
    uint8_t ButtonRightPressed; // offset=19
    uint8_t ButtonLeftHeld; // offset=20
    uint8_t ButtonLeftReleased; // offset=21
    uint8_t ButtonLeftPressed; // offset=22
    uint8_t ButtonFourReleased; // offset=23
    uint8_t ButtonFourPressed; // offset=24
    uint8_t ButtonThreeHeld; // offset=25
    uint8_t ButtonThreeReleased; // offset=26
    uint8_t ButtonThreePressed; // offset=27
    uint8_t ButtonTwoHeld; // offset=28
    uint8_t ButtonTwoReleased; // offset=29
    uint8_t ButtonOneHeld; // offset=30
    uint8_t ButtonOneReleased; // offset=31
    uint8_t ButtonOnePressed; // offset=32
    uint8_t RightClicked; // offset=33
    uint8_t MiddleClicked; // offset=34
    uint8_t LeftClicked; // offset=35
    uint8_t RightHeld; // offset=36
    uint8_t RightPressed; // offset=37
    uint8_t MiddleHeld; // offset=38
    uint8_t MiddleReleased; // offset=39
    uint8_t MiddlePressed; // offset=40
    uint8_t LeftHeld; // offset=41
    uint8_t LeftReleased; // offset=42
    uint8_t LeftPressed; // offset=43
};

typedef class ControllerInfo ControllerInfo;

class GameControl { // sizeof=52
    GameFlags Flags; // offset=0
    ControllerInfo Controller; // offset=1
    ULONG Turn; // offset=14
    ULONG RndCount; // offset=18
    ULONG Checksum; // offset=22
    UWORD Seed; // offset=26
    UBYTE NoPlayers; // offset=28
    UBYTE PlayerNo; // offset=29
    UBYTE PlayersReady; // offset=30
    UBYTE pad; // offset=31
    char SessionName[19]; // offset=32
};

typedef class GameControl GameControl;


class RunTimeGameFlags { // sizeof=2
    uint8_t DebugKeyboard; // offset=0
    uint8_t GameScreenOpen; // offset=1
    uint8_t ScreenShots; // offset=2
    uint8_t NewVersion; // offset=3
    uint8_t HiSoundsActive; // offset=4
    uint8_t TesterAutosave; // offset=5
    uint8_t RecorderActive; // offset=6
    uint8_t AlreadyOutOfSync; // offset=7
    uint8_t OutOfSync; // offset=8
    uint8_t Debug; // offset=9
    uint8_t Tester; // offset=10
    uint8_t Paused; // offset=11
    uint8_t Network; // offset=12
};

typedef class RunTimeGameFlags RunTimeGameFlags;

typedef class ScreenLockHandler ScreenLockHandler;





class PlSpecLoader { // sizeof=80
    void Free(PlayerRace arg1, SpecialistClass arg2, MyAnimBank *arg3);
    void Free(PlSpec *arg1);
    MyAnimBank * Load(PlayerRace arg1, SpecialistClass arg2);
    BBOOL Load(PlSpec *arg1);
    MyAnimBank *anbs[3][3];
    SBYTE counters[3][3];
};

typedef class PlSpecLoader PlSpecLoader;

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

typedef class HelpDraw HelpDraw;

class Recording { // sizeof=6
    void Decode();
    void Encode();
    XY mouse; // offset=0
    uint8_t keyDown; // offset=4
    UBYTE key; // offset=5
    uint8_t alt; // offset=6
    uint8_t ctrl; // offset=7
    uint8_t shift; // offset=8
    uint8_t mRight; // offset=9
    uint8_t mLeft; // offset=10
};

typedef class Recording Recording;

typedef class Recorder Recorder;

class PacketData { // sizeof=11
    SWORD X; // offset=0
    SWORD Y; // offset=2
    SWORD Z; // offset=4
    SWORD A; // offset=6
    SWORD B; // offset=8
    UBYTE Action; // offset=10
};

typedef class PacketData PacketData;







struct GEngine { // sizeof=20
    //GEngine(GEngine *arg1);
    //GEngine();
    SLONG XStep; // offset=0
    SLONG YStep; // offset=4
    SLONG BaseX; // offset=8
    SLONG BaseY; // offset=12
    SLONG AltScaler; // offset=16
};

typedef struct GEngine GEngine;

struct LanderStuff { // sizeof=5
    XY loc; // offset=0
    UBYTE type; // offset=4
};

typedef struct LanderStuff LanderStuff;





class IFCStartNetwork : public IFCBase { // sizeof=19
    //IFCStartNetwork(IFCStartNetwork *arg1);
    //IFCStartNetwork();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

typedef class IFCStartNetwork IFCStartNetwork;

class IFCGeneratePlanet : public IFCBase { // sizeof=19
    //IFCGeneratePlanet(IFCGeneratePlanet *arg1);
    //IFCGeneratePlanet();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

typedef class IFCGeneratePlanet IFCGeneratePlanet;

class IFCJoiningPlayer : public IFCBase { // sizeof=27
    //IFCJoiningPlayer(IFCJoiningPlayer *arg1);
    //IFCJoiningPlayer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    IFCBase *previousIFC;
    ULONG joiningPlayers; // offset=4
};

typedef class IFCJoiningPlayer IFCJoiningPlayer;

class IFCWinLevel : public IFCBase { // sizeof=19
    //IFCWinLevel(IFCWinLevel *arg1);
    //IFCWinLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

typedef class IFCWinLevel IFCWinLevel;

class IFCLoseLevel : public IFCBase { // sizeof=19
    //IFCLoseLevel(IFCLoseLevel *arg1);
    //IFCLoseLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

typedef class IFCLoseLevel IFCLoseLevel;

class IFCStatScreen : public IFCBase { // sizeof=19
    //IFCStatScreen(IFCStatScreen *arg1);
    //IFCStatScreen();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

typedef class IFCStatScreen IFCStatScreen;




extern char unsigned * block_ptrs[];
extern char unsigned * block_mem;
extern char unsigned * aBlockMem;
extern TbSprite * pointers_sprites;
extern TbSprite * end_pointers_sprites;
extern Player * end_players;
extern char unsigned * palette;
extern char unsigned * shipPalette;
extern char unsigned * b_screen;
extern char * game_text;
extern char unsigned * scratch;
extern char * strings[];
extern FontInfo * menu_font;
extern TbSprite * gad_spr;
extern MyAnimBank * bones_anb;
extern MySprite * bones_spr;
extern MyAnimBank * plgbl_anb;
extern MySprite * plgbl_spr;
extern TbSprite * plSpr;
extern MyAnimBank * ifcLab_anb;
extern MySprite * ifcLab_spr;
extern TbSprite * ifcLabSpr;
extern MyAnimBank * iface_anb;
extern MySprite * iface_spr;
extern TbSprite * ifcSpr;
extern MyAnimBank * effect_anb;
extern MySprite * effect_spr;
extern MyAnimBank * ethereal_anb;
extern MySprite * ethereal_spr;
extern MyAnimBank * building_anb[];
extern MySprite * building_spr[];
extern MyAnimBank * ani_anb[];
extern MySprite * ani_spr[];
extern MyAnimBank * plant_anb[];
extern MySprite * plant_spr[];
extern IFCBase * currentIFC;

extern long unsigned pointers_data;
extern long unsigned planets_data;
extern long unsigned sparkle_data;
extern long unsigned tubemask_data;
extern long unsigned ifclvs_data;
extern long unsigned globalOptions;
extern long unsigned playerVictory[];
extern short unsigned localRndSeed;
extern short boundMinX;
extern short boundMinY;
extern short boundMaxX;
extern short boundMaxY;
extern short realX;
extern short realY;
extern int mouseDebug;
extern char unsigned cyanTables[][256];
extern char unsigned redTables[][256];
extern char unsigned iceTables[][256];
extern char unsigned globalDebug;
extern char unsigned thingProcessing;
extern char * debugFile[];
extern long unsigned debugLine[];
extern long unsigned debugTurn[];
extern char unsigned debugIndex;
extern long unsigned pktTotalTime;
extern long unsigned gameStartTime;
extern long unsigned gameEndTime;
extern char unsigned replace_display;
extern char unsigned runSimulation;
extern char signed centerCtr;
extern char signed visX;
extern char signed visY;
extern char signed ptrX;
extern char signed ptrY;
extern char signed playerProcessed;
extern char unsigned localPlayer;
extern char unsigned equipmentStore[][52];
extern char unsigned editorMode;
extern char unsigned mapGrid;
extern char unsigned dropSiteTaken;
extern char unsigned localRace;
extern char unsigned localVictory;
extern char unsigned localEtherealStrictness;
extern GameControl control;
extern Config config;
extern RunTimeGameFlags runFlags;
extern XY oldMouseXY;
extern ControllerInfo * controller;
extern Colour savePalette[];
extern TbSpriteData font_sprites[];
extern Packet packets[];
extern BioGame bio;
extern GridTile defaultGridTile;
extern ScreenLockHandler screenLock;
extern tm mainMapTime;
extern MapDisplay mapDisplay;
extern SoundManager snd;
extern PlSpecLoader plsLoader;
extern HelpDraw helper;
extern Recorder recorder;
extern InfoRequester request;
extern Computer computers[];

extern long unsigned buildingsAllowed;
extern char unsigned shadeMethod;
extern Planet planet;
extern MyGadget ifcPls_gads[];
extern MyGadget ifcPanel_gads[];
extern MyGadget ifcPalette_gads[];
extern MyGadget ifcLab_gads[];

extern MyAnimBank * tubespec_anb;
extern MyGadget ifcOptions_gads[];
extern MyGadget ifcLvS_gads[];
extern MyGadget ifcTitle_gads[];
extern MyGadget ifcCustom_gads[];
extern MyGadget ifcEditor_gads[];
extern MyGadget ifcComp_gads[];
extern char const * triggerType[];
extern char const * stuffTypes[];
extern char * ceditor_help[];
extern MyGadget ifcCompEditor_gads[];
extern MyGadget ifcClone_gads[];
extern short const buildScores[][3];
extern short const buildThreatScores[][3];
extern MySprite * tubespec_spr;
extern TbSprite * tubespec_sprites;
extern MyAnimBank * sequip_anb;
extern MySprite * sequip_spr;
extern TbSprite * sequip_sprites;
extern TextEntry textEntry;
extern CreatureInfo creatureInfo[];
extern GEngine Engine;
extern IFCTitle ifcTitle;
extern IFCCustom ifcCustom;
extern IFCPlanetside ifcPls;
extern IFCStartNetwork ifcStartNetwork;
extern IFCGeneratePlanet ifcGeneratePlanet;
extern IFCJoiningPlayer ifcJoiningPlayer;
extern IFCWinLevel ifcWinLevel;
extern IFCLoseLevel ifcLoseLevel;
extern IFCStatScreen ifcStatScreen;
extern IFCComputer ifcComputer;
extern IFCOptions ifcOptions;
extern IFCLevel ifcLevel;
extern IFCEditor ifcEditor;
extern IFCCompEditor ifcCompEditor;
extern char unsigned colour_lookup[];
extern char unsigned const upgradeScores[][3];
extern char unsigned const specTgtScores[];
extern char unsigned const specThreatScores[];
extern char unsigned const creatureThreatScores[];
extern char unsigned const cInfo[][5];
extern char signed const sectorDirs[][2];
extern FontInfo font_info[];

#endif // BIO_DATA_HPP_
/******************************************************************************/
