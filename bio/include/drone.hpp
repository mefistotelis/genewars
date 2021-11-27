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
    DroneType type; // offset=85
    DroneMode mode; // offset=86
    ThingIDX originBuilding; // offset=87
    ThingIDX target; // offset=90
    XY loggedTgtXY; // offset=93
//internal:
    //void (**__vfptr)(); // offset=35
public:
    void Read(SLONG &arg1);
    void Write(SLONG &arg1);
    void Resync();
    UBYTE Update();
    BBOOL Damage(SLONG arg1, Thing *tng2);
    BBOOL IsDead();
    SWORD MaxMoveSpeed();
    UBYTE ShapeFacing();
    void StartAMove(XY arg1);
    void Discover();
    void Free();
    void InitArray();
    Drone * Create(Building *arg1, Thing *tng2, DroneType arg3);
    void UpdateAll();
    SLONG ReadBuffer(Drone **drn1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG WriteBuffer(Drone **drn1, SLONG arg2, SLONG arg3, BioGame &game);
private:
    void GoBoom();
    void UntagTarget();
    void SetDraggingTarget();
    void DropWhateverYouWereDragging();
public:
    Drone();
    //Drone(Drone &drn1); -- generate default copy constructor
    Drone & operator =(Drone &drn1);
};

unsigned char AtMmsEnd(MyMinSprite &spr1, MySprite &spr2);

#endif // BIO_DRONE_HPP_
/******************************************************************************/
