/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file drone.hpp
 *     Header file for drone.cpp.
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
#ifndef BIO_DRONE_HPP_
#define BIO_DRONE_HPP_

#include "bftypes.h"
#include "smvthing.hpp"

class BioGame;

enum DroneMode { // type=int8_t
    DRM_ACQUIRE = 0,
    DRM_ACTIVE,
    DRM_RETURN,
    DRM_BOOM,
};

enum DroneType { // type=int8_t
    DRT_CHOP = 0,
    DRT_CHOPDRAG,
    DRT_FARM,
};

class Drone : public SmartMovingThing { // sizeof=97
public:
    Drone * operator=(Drone *drn1);
    //Drone(Drone *arg1); -- generate default copy constructor
    //Drone(); -- generate default no-args constructor
    void DropWhateverYouWereDragging();
    void SetDraggingTarget();
    void UntagTarget();
    void GoBoom();
    SLONG WriteBuffer(Drone **drn1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG ReadBuffer(Drone **drn1, SLONG arg2, SLONG arg3, BioGame &game);
    void UpdateAll();
    Drone * Create(Building *arg1, ::Thing *arg2, DroneType arg3);
    void InitArray();
    void Free();
    void Discover();
    void StartAMove(XY arg1);
    UBYTE ShapeFacing();
    SWORD MaxMoveSpeed();
    BBOOL IsDead();
    BBOOL Damage(SLONG arg1, ::Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    //void (**__vfptr)();
    DroneType type; // offset=85
    DroneMode mode; // offset=86
    ThingIDX originBuilding; // offset=87
    ThingIDX target; // offset=90
    XY loggedTgtXY; // offset=93
};

unsigned char AtMmsEnd(MyMinSprite &spr1, MySprite &spr2);

#endif // BIO_DRONE_HPP_
/******************************************************************************/
