/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ethereal.hpp
 *     Header file for ethereal.cpp.
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
#ifndef BIO_ETHEREAL_HPP_
#define BIO_ETHEREAL_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "thingidx.hpp"
#include "smvthing.hpp"

enum DeathRayType { // type=int8_t
    DRT_WHITE66 = 0,
    DRT_WHITE33,
    DRT_WHITE,
    DRT_CYAN66,
    DRT_CYAN33,
    DRT_CYAN, // 5
};

enum EtherealPunishment { // type=int8_t
    ETP_NONE = 0,
    ETP_POTSHOTS,
    ETP_BUILDING,
    ETP_FIRE,
    ETP_DEATHRAY,
    ETP_NATURALIZE, // 5
    ETP_ABDUCT,
    MAX_ETP,
};

enum EtherealMode { // type=int8_t
    ETPM_ENTRY = 0,
    ETPM_BASE,
    ETPM_ZONES,
    ETPM_EXIT,
    ETSM_ENTRY,
    ETSM_WAITING, // 5
    ETSM_MONOMAKE,
    ETSM_PUNISH,
    ETSM_WAITINGTOGO,
    ETSM_EXIT,
};

enum EtherealType { // type=int8_t
    ET_SAUCER = 0,
    ET_PUTT,
};

class Ethereal : SmartMovingThing { // sizeof=102
    Ethereal * operator=(Ethereal *arg1);
    //Ethereal(Ethereal *arg1);
    //Ethereal();
    void SetMoveToThingWithAlt(Thing *arg1, SLONG arg2);
    void SetMoveToTgtWithAlt(XY arg1, SLONG arg2);
    void AbsolveBad();
    void PunishAbduct();
    void PunishBuildings();
    void PunishPotshots();
    EtherealPunishment SelectPunishment();
    void DrawBeam(SLONG arg1, SLONG arg2, SLONG arg3);
    void PuttAroundPoint(XY arg1, SLONG arg2);
    BBOOL GetNextPuttTarget();
    void UpdatePutt();
    void UpdateSaucer();
    SLONG WriteBuffer(Ethereal **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG ReadBuffer(Ethereal **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    void UpdateAll();
    Ethereal * Create(EtherealType arg1, XY arg2, SLONG arg3, UBYTE arg4);
    void InitArray();
    void Free();
    void DrawDeathRay(DeathRayType arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, SLONG arg7, SLONG arg8);
    void VectorToWhereGoingTo(Vector *arg1);
    SLONG SquareTrueRangeToWhereGoingTo();
    void TurnToDesiredAngle();
    void Discover();
    void StartAMove(XY arg1);
    SWORD MaxMoveSpeed();
    BBOOL IsVectorable();
    BBOOL IsFlying();
    BBOOL IsDead();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    EtherealType type; // offset=85
    EtherealMode mode; // offset=86
    SBYTE phase; // offset=87
    EtherealPunishment punishment; // offset=88
    ThingIDX target; // offset=89
    XY targetXY; // offset=92
    SLONG targetAltitude; // offset=96
    SWORD pixCount; // offset=100
};


#endif // BIO_ETHEREAL_HPP_
/******************************************************************************/
