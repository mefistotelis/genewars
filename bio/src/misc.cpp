/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file misc.cpp
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
#include "misc.hpp"

#include "bfscreen.h"
#include "bfmouse.h"

short FindShortDist( char unsigned, char unsigned, char unsigned )
{
// code at 0001:000929d9
}

long FindShortDistance( long, long, long )
{
// code at 0001:00092a77
}

void SetRefreshZones( long, long, long, long, char unsigned )
{
// code at 0001:00092b07
}

char unsigned ActiveRefreshZoneHit( long, long, TbSprite * )
{
// code at 0001:00092c7c
}

char unsigned ActiveRefreshZoneHit( long, long, MyFrame * )
{
// code at 0001:00092deb
}

void SetFrameRefreshZones( long, long, MyFrame *, char unsigned )
{
// code at 0001:00092f28
}

void DrawLineHR( short, short, short, short, char unsigned )
{
// code at 0001:00093075
}

char * ComposeAndLowerCaseString( char *, char *, char * )
{
// code at 0001:00093124
}

char * MakeHelpActionString( char *, char unsigned, Thing * )
{
// code at 0001:00093186
}

void MemDump( char unsigned *, long unsigned )
{
// code at 0001:000932ec
}

void global_x_rotate_points( Point *, Point *, long, long, long unsigned )
{
// code at 0001:00093346
}

void global_y_rotate_points( Point *, Point *, long, long, long unsigned )
{
// code at 0001:000933ec
}

void global_z_rotate_points( Point *, Point *, long, long, long unsigned )
{
// code at 0001:00093491
}

MyFrame * UpdateMyMinSprite2( MySprite *, MyMinSprite * )
{
// code at 0001:00093536
}

void SetPointerAndHotpoint( TbSprite *spr, unsigned long hsX, unsigned long hsY)
{
  // code at 0001:000936ac
  if ( spr == lbDisplay.MouseSprite )
  {
    LbMouseChangeSpriteOffset(-hsX, -hsY);
  }
  else
  {
    LbMouseChangeSprite(NULL);
    LbMouseChangeSpriteOffset(-hsX, -hsY);
    LbMouseChangeSprite(spr);
  }
}

short WeightedAngle( char unsigned )
{
// code at 0001:00077c3c
}

void BoundMmsToMySprite( MyMinSprite &, MySprite & )
{
// code at 0001:0001d1f8
}

BuildPriority::BuildPriority()
{
  // code at 0001:00037480
  this->newBaseThisTurn = 0;
}

char unsigned BuildPriority::Build( PlSpec *, char unsigned, char unsigned )
{
// code at 0001:000343f8
}

char unsigned BuildPriority::BuildHighestPri( PlSpec * )
{
// code at 0001:00030496
}

char unsigned BuildPriority::Emergency( PlSpec * )
{
// code at 0001:0003057a
}

char unsigned BuildPriority::Basic( PlSpec * )
{
// code at 0001:000307fc
}

char unsigned BuildPriority::BuildingPersonality( PlSpec *, char signed )
{
// code at 0001:00030df6
}

BestBuilding BuildPriority::FindBestLoc( char unsigned, char unsigned )
{
// code at 0001:00030e23
}

const char * stuffCreatures[] = {
    "DINO",
    "CRAB",
    "FROG",
    "BIRD",
    "MULE",
    "DINOCRAB",
    "DINOFROG",
    "DINOBIRD",
    "DINOMULE",
    "CRABBOFROG",
    "CRABBOBIRD",
    "CRABBOMULE",
    "FROGGOBIRD",
    "FROGGOMULE",
    "BIRDDOMULE",
    "CRABBOSAUR",
    "FROGGOSAUR",
    "FROGGOCRAB",
    "BIRDDOSAUR",
    "BIRDDOCRAB",
    "BIRDDOFROG",
    "MULEOSAUR",
    "MULEOCRAB",
    "MULEOFROG",
    "MULEOBIRD",
};

const char * stuffBuildings[] = {
    "GENELAB(TM)",
    "TURRET",
    "SAWMILL",
    "POWER STATION",
    "FARM",
    "LAUNCHER",
    "SOLAR PANEL",
    "ETHEREAL TEMPLE",
    "WIND TURBINE",
    "NUCLEAR REACTOR",
    "OPERATIONS",
    "MINE",
    "SHIELD GENERATOR",
    "GOOP VAT",
};

const char * gPTypes[] = {
    "ATTACK",
    "STAGE",
    "DEFEND",
    "BREED",
    "WORK",
    "SCORE",
    "MONOLITH",
    "MAX_TYPES",
};

const char * victCondTypes[] = {
    "Summon ethereals",
    "Cure disease",
    "Level 1 special case",
    "Not used",
    "Not used",
    "Not used",
    "Not used",
    "Not used",
};

const char * specFuncTxt[][7] = {
  {
    "Build",
    "Wreck",
    "Raise (not used)",
    "Lower (not used",
    "Upgrade",
    "not used",
    "not used",
  }, {
    "Collect seeds",
    "Plant seeds",
    "Chop trees",
    "not used",
    "not used",
    "not used",
    "not used",
  }, {
    "Study",
    "Heal",
    "not used",
    "not used",
    "not used",
    "not used",
    "not used",
  }, {
    "Herd",
    "Kill",
    "Stun",
    "Subvert",
    "not used",
    "not used",
    "not used",
  },
};

/******************************************************************************/
