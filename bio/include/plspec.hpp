/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plspec.hpp
 *     Header file for plspec.cpp.
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
#ifndef BIO_PLSPEC_HPP_
#define BIO_PLSPEC_HPP_

#include "bftypes.h"
#include "bfdata.h"
#include "myspr.h"
#include "xy.hpp"
#include "plsiface.hpp"
#include "buildingstat.hpp"
#include "smvthing.hpp"
#include "sound.hpp"

class BioGame;
class GunSpec;
class Creature;
class Specialist;
class BuilderIFC;

enum PlsError { // type=int8_t
    PLSERR_NONE = 0,
    PLSERR_STUCK,
    PLSERR_TOOTIRED,
    PLSERR_NOTARGETS,
    PLSERR_FULL,
    PLSERR_WATER, // 5
    PLSERR_CLOSE,
    PLSERR_TREES,
    PLSERR_NOSUPPLY,
};

class PlSpec : public SmartMovingThing { // sizeof=200
    PlSpec * operator =(PlSpec *arg1);
    //PlSpec(PlSpec *arg1); -- generate default copy constructor
    //PlSpec(); -- generate default no-args constructor
    void SetAltSpecialFlipToThing(::Thing *tng1);
    void SetWaiting();
    void BuilderSetDemoCharges(SBYTE arg1);
    void StartLumberjackChopping(Plant *arg1);
    GunSpec & GetGunSpec(UBYTE arg1);
    void SetupMoveToInsideBuilding(Building *arg1, XY arg2);
    void SetupMoveAwayFromThing(::Thing *tng1);
    void SetupMoveToThing(::Thing *tng1);
    void SetupMoveToSpecialTgt(XY arg1);
    void InitiateMove();
    void RemoveRefsFromCreatures();
    void DoActionActiveDuringNewMove();
    void DoAnySpecialWhileMoving();
    void ShootAtMovingThing(::MovingThing *tng1, ULONG arg2, UBYTE arg3);
    void CowboyRanging(::MovingThing *tng1, ULONG arg2);
    void ReleaseShepherdedCreatures();
    Creature * CowboyCreatureScan();
    PlSpec * CowboyPlsScan();
    UBYTE AssessAlternateDir(UBYTE arg1);
    UWORD SpecialMove(SBYTE arg1);
    void AssignMove(UBYTE arg1);
    SBYTE SpecialToolTest(UBYTE arg1, SBYTE arg2, SBYTE arg3);
    BBOOL IsFoundationSiteOK(BuilderIFC &arg1, UBYTE &arg2);
    BBOOL operator ==(PlSpec *arg1);
    SLONG WriteBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG ReadBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    void UpdateAll();
    void InitArray();
    SLONG ArchitectBuildCost(BuildingType arg1);
    SLONG ArchitectPelletCost();
    SLONG ScientistHealRange();
    SLONG ScientistStudyRange();
    UBYTE GetGun(BBOOL arg1);
    SLONG FarmerPackCapacity();
    SLONG LumberjackFellRange();
    SLONG FarmerHarvestRange();
    SLONG FarmerPlantingRange();
    SLONG CowboyPatrolRange();
    SLONG ShepherdThrowRange();
    SLONG ShepherdCatchRange();
    BBOOL IsFullyCloaked();
    BBOOL CanGetOrder();
    BBOOL IsActionAbortable();
    BBOOL IsDoingSpecial();
    void InterruptMove();
    void SetupMoveToTgt(XY arg1);
    void RemoveFromGame();
    void Speech(ULONG arg1, BufferSubmitMode arg2);
    SBYTE ActionOn(::Thing *tng1, BBOOL arg2, BBOOL arg3, BBOOL arg4);
    XY GetXYToChopTreeDown(Plant *arg1);
    BBOOL CanDoSpecialWithMove();
    BBOOL CanAbortSpecialWithMove();
    void GetAbducted(Ethereal *arg1);
    void SetCowboyTarget(Creature *arg1);
    void StartAction(UBYTE arg1, ULONG arg2, ULONG arg3);
    void SetTarget(UBYTE arg1);
    void DoAbduct();
    void DoLiftoff();
    void DoNewShepherd();
    void DoNewFarmer();
    void DoScientist();
    void DoShepherd();
    void DoLumberjack();
    void DoGeologist();
    void DoFarmer();
    void DoCowboy();
    void DoBuilder();
    void DoWaiting();
    BBOOL DoMove(BBOOL arg1);
    void BeginSpecial();
    BBOOL OKToSwitchToSpecial();
    void AbortSpecial(BBOOL arg1);
    void BeginMove(SBYTE arg1);
    SWORD PassableHex(XY arg1, BOOL arg2);
    BOOL PassableDir(UBYTE arg1);
    void FromCenter(GridTile *arg1, XY *arg2);
    void SetDrawFlags();
    void Resync(UBYTE arg1);
    BBOOL Dead();
    void Init(UBYTE arg1, UBYTE arg2);
    BBOOL IsMovable();
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    BBOOL IsBusyDoingSomething();
    BBOOL IsDead();
    void StartAMove(XY arg1);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    SWORD MaxMoveSpeed();
    void Discover();
    BBOOL Damage(SLONG arg1, ::Thing *tng2);
    UBYTE Update();
    void Resync();
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    void (**__vfptr)();
    SBYTE mode; // offset=85
    SBYTE saveMode; // offset=86
    SBYTE newMode; // offset=87
    SBYTE ifcGo; // offset=88
    SBYTE specialShp; // offset=89
    SBYTE moveMode; // offset=90
    SBYTE playerNewMoveMode; // offset=91
    XY playerTgt; // offset=92
    XY sp; // offset=96
    SLONG reload; // offset=100
    SLONG pixCount; // offset=104
    SLONG savePixCount; // offset=108
    UWORD flags; // offset=112
    UBYTE seeds; // offset=114
    UBYTE cloaked; // offset=115
    SBYTE crewIDX; // offset=116
    MyMinSprite auxMMs; // offset=117
    PlsError error; // offset=122
    ThingIDX damagedBy; // offset=123
    PLSInterface ifc; // offset=126
    TbLoadFiles loadFile; // offset=148
    Specialist *spec; // offset=192
    MyAnimBank *anb; // offset=196
};

short WeightedAngle( char unsigned );

#endif // BIO_PLSPEC_HPP_
/******************************************************************************/
