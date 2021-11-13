/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file tables.hpp
 *     Header file for tables.cpp.
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
#ifndef BIO_TABLES_HPP_
#define BIO_TABLES_HPP_

#include "bfdata.h"
#include "myspr.h"
#include "xy.hpp"
#include "event.hpp"
#include "eventstat.hpp"
#include "misc.hpp"
#include "creature.hpp"
#include "creaturestat.hpp"
#include "plantstat.hpp"
#include "buildingstat.hpp"

extern TbLoadFiles startup_files[];
extern TbLoadFiles installedData[];
extern const char * creatureAnbs[];
extern const char project_date[];
extern const char project_time[];
extern const char project_name[];
extern const char * project_builder;
extern char signed const terrainPointVals[][8];
extern short const terrainFriction[];
extern short const terrainBounce[];
extern const XY dxy[];
extern const XY hdxy[];
extern const XY hdxy2[];
extern const XY flatDxy[];
extern const XY cMassXY[];
extern const unsigned char flipDir[];
extern const unsigned char teColor[];
extern const EqRange eq_range[];
extern const unsigned char eq_catBase[];
extern const unsigned char specActionBases[];
extern const unsigned short specActionPointers[];
extern const unsigned short creatureActionPointers[];
extern ASpecies aSpecies[];
extern Gene genes[];
extern CreatureSpecies const speciesLookup[][5];
extern GunSpec gunSpec[];
extern SpecRaceData specRaceData[];
extern XY topoProgOffset[];
extern short topoProgWidth[];
extern char unsigned topoProgDimensions[];
extern char unsigned topoCrater1Blocks[][3];
extern char unsigned topoCrater1Orients[][3];
extern XY topoFlatOffset[];
extern char unsigned topoFlatDimensions[];
extern short topoFlatWidth[];
extern short unsigned noPlayerIcon[];
extern char unsigned playerDitherTables[][2];
extern PSpecies const pSpecies[];
extern BuildingType const buildingDisplayList[];
extern const unsigned char buildingPower[];
extern short const buildingBMax[][3];
extern const unsigned char buildingDestroyedIndices[];
extern const unsigned char turretHeight[];
extern const unsigned char buildingTech[][3];
extern EventHelpType const buildingHelp[][3];
extern const unsigned char foundationSizes[];
extern const unsigned char foundationArea[];
extern char signed const foundationTravel[][8];
extern short const foundationRadii[];
extern long const buildingGoopCost[];
extern short const lzBlockTypes[];
extern const unsigned char lzBlockOrientations[];
extern char unsigned dropLabHD[];
extern const unsigned char buildingNeeds[];
extern const unsigned char solarPower[];
extern const unsigned char mineralsPerTileType[];
extern const unsigned short idealAtmosphere[][3];
extern const unsigned short idealDensities[];
extern const unsigned char plantProduction[];
extern EffectStats const effectStats[];
extern long unsigned const project_version;
extern XY const landingPadDevFromBuilding;
extern Corners corners[];
extern XY const zeroXY;
extern Vector const zeroVector;
extern ComponentVector const zeroComponentVector;
extern VMod v_how[];

#endif // BIO_TABLES_HPP_
/******************************************************************************/
