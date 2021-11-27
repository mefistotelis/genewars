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
public:
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
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual void Read(SLONG &arg1);
    virtual void Write(SLONG &arg1);
    virtual void Resync();
    virtual UBYTE Update();
    virtual BBOOL Damage(SLONG arg1, Thing *tng2);
    virtual void Discover();
    virtual SWORD MaxMoveSpeed();
    virtual void DrawOnMap(SWORD arg1, SWORD arg2);
    virtual void StartAMove(XY arg1);
    virtual BBOOL IsDead();
    BBOOL IsBusyDoingSomething();
    virtual BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    virtual BBOOL IsMovable();
    void Init(UBYTE arg1, UBYTE arg2);
    BBOOL Dead();
    void Resync(UBYTE arg1);
    void SetDrawFlags();
    void FromCenter(GridTile *arg1, XY &arg2);
    BOOL PassableDir(UBYTE arg1);
    SWORD PassableHex(XY arg1, BOOL arg2);
    void BeginMove(SBYTE arg1);
    void AbortSpecial(BBOOL arg1);
    BBOOL OKToSwitchToSpecial();
    void BeginSpecial();
    BBOOL DoMove(BBOOL arg1);
    void DoWaiting();
    void DoBuilder();
    void DoCowboy();
    void DoFarmer();
    void DoGeologist();
    void DoLumberjack();
    void DoShepherd();
    void DoScientist();
    void DoNewFarmer();
    void DoNewShepherd();
    void DoLiftoff();
    void DoAbduct();
    void SetTarget(UBYTE arg1);
    void StartAction(UBYTE arg1, ULONG arg2, ULONG arg3);
    void SetCowboyTarget(Creature *arg1);
    void GetAbducted(Ethereal *arg1);
    BBOOL CanAbortSpecialWithMove();
    BBOOL CanDoSpecialWithMove();
    XY GetXYToChopTreeDown(Plant *arg1);
    SBYTE ActionOn(Thing *tng1, BBOOL arg2, BBOOL arg3, BBOOL arg4);
    void Speech(ULONG arg1, BufferSubmitMode arg2);
    void RemoveFromGame();
    void SetupMoveToTgt(XY arg1);
    void InterruptMove();
    BBOOL IsDoingSpecial();
    BBOOL IsActionAbortable();
    BBOOL CanGetOrder();
    BBOOL IsFullyCloaked();
    SLONG ShepherdCatchRange();
    SLONG ShepherdThrowRange();
    SLONG CowboyPatrolRange();
    SLONG FarmerPlantingRange();
    SLONG FarmerHarvestRange();
    SLONG LumberjackFellRange();
    SLONG FarmerPackCapacity();
    UBYTE GetGun(BBOOL arg1);
    SLONG ScientistStudyRange();
    SLONG ScientistHealRange();
    SLONG ArchitectPelletCost();
    SLONG ArchitectBuildCost(BuildingType arg1);
    void InitArray();
    void UpdateAll();
    SLONG ReadBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG WriteBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    BBOOL operator ==(PlSpec *arg1);
private:
    BBOOL IsFoundationSiteOK(BuilderIFC &arg1, UBYTE &arg2);
    SBYTE SpecialToolTest(UBYTE arg1, SBYTE arg2, SBYTE arg3);
    void AssignMove(UBYTE arg1);
    UWORD SpecialMove(SBYTE arg1);
    UBYTE AssessAlternateDir(UBYTE arg1);
    PlSpec * CowboyPlsScan();
    Creature * CowboyCreatureScan();
    void ReleaseShepherdedCreatures();
    void CowboyRanging(MovingThing *tng1, ULONG arg2);
    void ShootAtMovingThing(MovingThing *tng1, ULONG arg2, UBYTE arg3);
    void DoAnySpecialWhileMoving();
    void DoActionActiveDuringNewMove();
    void RemoveRefsFromCreatures();
    void InitiateMove();
    void SetupMoveToSpecialTgt(XY arg1);
    void SetupMoveToThing(Thing *tng1);
    void SetupMoveAwayFromThing(Thing *tng1);
    void SetupMoveToInsideBuilding(Building *arg1, XY arg2);
    GunSpec & GetGunSpec(UBYTE arg1);
    void StartLumberjackChopping(Plant *arg1);
    void BuilderSetDemoCharges(SBYTE arg1);
    void SetWaiting();
    void SetAltSpecialFlipToThing(Thing *tng1);
public:
    PlSpec();
    //PlSpec(PlSpec &arg1); -- generate default copy constructor
    PlSpec & operator =(PlSpec const &arg1);
};

short WeightedAngle( char unsigned );

#endif // BIO_PLSPEC_HPP_
/******************************************************************************/
