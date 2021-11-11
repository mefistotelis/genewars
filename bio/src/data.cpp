/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file data.cpp
 *     Implementation of related functions.
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
#include "data.hpp"

void Point::Set( long, long, long )
{
// code at 0001:00049cac
}

char unsigned SoundManager::__defarg()
{
// code at 0001:00049b24
}

SoundRequest * SoundManager::GetSoundReq( Thing * )
{
// code at 0001:00049ae8
}

char signed FlickerHandler::Create()
{
// code at 0001:00047a17
}


near GEngine::GEngine()
{
// code at 0001:0005ea30
}

near IFCCustom::IFCCustom( MyGadget * )
{
// code at 0001:0005e7f4
}

near CreatureInfo::CreatureInfo()
{
// code at 0001:0005e7c8
}

near CreatureInfo::~CreatureInfo()
{
// code at 0001:0005e574
}

IFCOptions::IFCOptions( MyGadget * )
{
// code at 0001:0005e5bc
}



char unsigned * block_ptrs[];

char unsigned * block_mem;

char unsigned * aBlockMem;

TbSprite * pointers_sprites;

TbSprite * end_pointers_sprites;

Player * end_players;

char unsigned * palette;

char unsigned * shipPalette;

char unsigned * b_screen;

char * game_text;

char unsigned * scratch;

char * strings[];

FontInfo * menu_font;

TbSprite * gad_spr;

MyAnimBank * bones_anb;

MySprite * bones_spr;

MyAnimBank * plgbl_anb;

MySprite * plgbl_spr;

TbSprite * plSpr;

MyAnimBank * ifcLab_anb;

MySprite * ifcLab_spr;

TbSprite * ifcLabSpr;

MyAnimBank * iface_anb;

MySprite * iface_spr;

TbSprite * ifcSpr;

MyAnimBank * effect_anb;

MySprite * effect_spr;

MyAnimBank * ethereal_anb;

MySprite * ethereal_spr;

MyAnimBank * building_anb[];

MySprite * building_spr[];

MyAnimBank * ani_anb[];

MySprite * ani_spr[];

MyAnimBank * plant_anb[];

MySprite * plant_spr[];

IFCBase * currentIFC;

void * Packet::dataBlast;

long unsigned pointers_data;

long unsigned planets_data;

long unsigned sparkle_data;

long unsigned tubemask_data;

long unsigned ifclvs_data;

long unsigned globalOptions;

long unsigned playerVictory[];

short unsigned localRndSeed;

short boundMinX;

short boundMinY;

short boundMaxX;

short boundMaxY;

short realX;

short realY;

int mouseDebug;

char unsigned cyanTables[][256];

char unsigned redTables[][256];

char unsigned iceTables[][256];

char unsigned globalDebug;

char unsigned thingProcessing;

char * debugFile[];

long unsigned debugLine[];

long unsigned debugTurn[];

char unsigned debugIndex;

long unsigned pktTotalTime;

long unsigned gameStartTime;

long unsigned gameEndTime;

char unsigned replace_display;

char unsigned runSimulation;

char signed centerCtr;

char signed visX;

char signed visY;

char signed ptrX;

char signed ptrY;

char signed playerProcessed;

char unsigned localPlayer;


char unsigned equipmentStore[][52];

char unsigned editorMode;

char unsigned mapGrid;

char unsigned dropSiteTaken;

char unsigned localRace;

char unsigned localVictory;

char unsigned localEtherealStrictness;

GameControl control;

Config config;

RunTimeGameFlags runFlags;

XY oldMouseXY;

ControllerInfo * controller;

Colour savePalette[];

TbSpriteData font_sprites[];

Packet packets[];

BioGame bio;

GridTile defaultGridTile;

ScreenLockHandler screenLock;

tm mainMapTime;

MapDisplay mapDisplay;

SoundManager snd;

PlSpecLoader plsLoader;

HelpDraw helper;

Recorder recorder;

InfoRequester request;

Computer computers[];


long unsigned buildingsAllowed;

char unsigned shadeMethod;

Planet planet;

MyGadget ifcPls_gads[];

MyGadget ifcPanel_gads[];

MyGadget ifcPalette_gads[];

MyGadget ifcLab_gads[];


MyAnimBank * tubespec_anb;

MyGadget ifcOptions_gads[];

MyGadget ifcLvS_gads[];

MyGadget ifcTitle_gads[];

MyGadget ifcCustom_gads[];

MyGadget ifcEditor_gads[];

MyGadget ifcComp_gads[];

char const * triggerType[];

char const * stuffTypes[];

char * ceditor_help[];

MyGadget ifcCompEditor_gads[];

MyGadget ifcClone_gads[];

short const buildScores[][3];

short const buildThreatScores[][3];

MySprite * tubespec_spr;

TbSprite * tubespec_sprites;

MyAnimBank * sequip_anb;

MySprite * sequip_spr;

TbSprite * sequip_sprites;

TextEntry textEntry;

CreatureInfo creatureInfo[];

GEngine Engine;

IFCTitle ifcTitle;

IFCCustom ifcCustom;

IFCPlanetside ifcPls;

IFCStartNetwork ifcStartNetwork;

IFCGeneratePlanet ifcGeneratePlanet;

IFCJoiningPlayer ifcJoiningPlayer;

IFCWinLevel ifcWinLevel;

IFCLoseLevel ifcLoseLevel;

IFCStatScreen ifcStatScreen;

IFCComputer ifcComputer;

IFCOptions ifcOptions;

IFCLevel ifcLevel;

IFCEditor ifcEditor;

IFCCompEditor ifcCompEditor;

char unsigned colour_lookup[];

char unsigned const upgradeScores[][3];

char unsigned const specTgtScores[];

char unsigned const specThreatScores[];

char unsigned const creatureThreatScores[];

char unsigned const cInfo[][5];

char signed const sectorDirs[][2];

FontInfo font_info[];


/******************************************************************************/
