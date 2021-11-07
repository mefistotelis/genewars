/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file tables.cpp
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
#include "tables.hpp"

TbLoadFiles startup_files[];

TbLoadFiles installedData[];

char const * creatureAnbs[];

char unsigned const project_date[];

char unsigned const project_time[];

char unsigned const project_name[];

char const * project_builder;

char signed const terrainPointVals[][8];

short const terrainFriction[];

short const terrainBounce[];

XY const dxy[];

XY const hdxy[];

XY const hdxy2[];

XY const flatDxy[];

XY const cMassXY[];

char unsigned const flipDir[];

char unsigned const teColor[];

EqRange const eq_range[];

char unsigned const eq_catBase[];

char unsigned const specActionBases[];

short unsigned const specActionPointers[];

short unsigned const creatureActionPointers[];

ASpecies aSpecies[];

Gene genes[];

CreatureSpecies const speciesLookup[][5];

GunSpec gunSpec[];

SpecRaceData specRaceData[];

XY topoProgOffset[];

short topoProgWidth[];

char unsigned topoProgDimensions[];

char unsigned topoCrater1Blocks[][3];

char unsigned topoCrater1Orients[][3];

XY topoFlatOffset[];

char unsigned topoFlatDimensions[];

short topoFlatWidth[];

short unsigned noPlayerIcon[];

char unsigned playerDitherTables[][2];

PSpecies const pSpecies[];

BuildingType const buildingDisplayList[];

char unsigned const buildingPower[];

short const buildingBMax[][3];

char unsigned const buildingDestroyedIndices[];

char unsigned const turretHeight[];

char unsigned const buildingTech[][3];

EventHelpType const buildingHelp[][3];

char unsigned const foundationSizes[];

char unsigned const foundationArea[];

char signed const foundationTravel[][8];

short const foundationRadii[];

long const buildingGoopCost[];

short const lzBlockTypes[];

char unsigned const lzBlockOrientations[];

char unsigned dropLabHD[];

char unsigned const buildingNeeds[];

char unsigned const solarPower[];

char unsigned const mineralsPerTileType[];

short unsigned const idealAtmosphere[][3];

short unsigned const idealDensities[];

char unsigned const plantProduction[];

EffectStats const effectStats[];

long unsigned const project_version;

XY const landingPadDevFromBuilding;

Corners corners[];

XY const zeroXY;

Vector const zeroVector;

ComponentVector const zeroComponentVector;

VMod v_how[];


/******************************************************************************/
