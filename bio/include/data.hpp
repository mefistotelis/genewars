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

#include "bftypes.h"
#include "bfsprite.h"
#include "myspr.h"
#include "mygad.h"
#include "myfont.h"
#include "ifccomped.hpp"
#include "ifccomputer.hpp"
#include "ifccustom.hpp"
#include "ifceditor.hpp"
#include "ifclevel.hpp"
#include "ifcoptions.hpp"
#include "ifcplanet.hpp"
#include "ifctitle.hpp"
#include "player.hpp"
#include "control.hpp"
#include "setup.hpp"
#include "bioeng.hpp"
#include "building.hpp"
#include "screenlock.hpp"
#include "draw.hpp"
#include "record.hpp"
#include "computer.hpp"
#include "draw.hpp"
#include "engine.hpp"
#include "packets.hpp"

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
extern char const * debugFile[];
extern long unsigned debugLine[];
extern long unsigned debugTurn[];
extern char unsigned debugIndex;
extern TbClockMSec pktTotalTime;
extern TbClockMSec gameStartTime;
extern TbClockMSec gameEndTime;
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
extern Planet defaultPlanet;
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

inline UWORD control_urand(UBYTE shift, ULONG bound, const char *fn, ULONG ln)
{
    ++control.RndCount;
    debugLine[debugIndex] = ln;
    debugFile[debugIndex] = fn;
    debugTurn[debugIndex] = control.Turn;
    debugIndex = (debugIndex+1) & 0x1Fu;
    control.Seed *= 0xE62Du;
    return (((int)control.Seed >> shift) & 0x7FFF) % bound;
}

#define URAND8(bound) control_urand(8, bound, __FILE__, __LINE__)


#endif // BIO_DATA_HPP_
/******************************************************************************/
