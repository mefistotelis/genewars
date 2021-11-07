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

enum DroneMode { // type=int8_t
    DRM_ACQUIRE = 0,
    DRM_ACTIVE,
    DRM_RETURN,
    DRM_BOOM,
};

typedef enum DroneMode DroneMode;

enum DroneType { // type=int8_t
    DRT_CHOP = 0,
    DRT_CHOPDRAG,
    DRT_FARM,
};

typedef enum DroneType DroneType;

typedef class Drone Drone;

class Drone : SmartMovingThing { // sizeof=97
    class Drone * operator=(class Drone *arg1);
    class Drone * Drone(class Drone *arg1);
    class Drone * Drone();
    void DropWhateverYouWereDragging();
    void SetDraggingTarget();
    void UntagTarget();
    void GoBoom();
    SLONG WriteBuffer(Drone **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Drone **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    Drone * Create(Building *arg1, Thing *arg2, DroneType arg3);
    void InitArray();
    void Free();
    void Discover();
    void StartAMove(XY arg1);
    UBYTE ShapeFacing();
    SWORD MaxMoveSpeed();
    BBOOL IsDead();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    DroneType type; // offset=85
    DroneMode mode; // offset=86
    ThingIDX originBuilding; // offset=87
    ThingIDX target; // offset=90
    XY loggedTgtXY; // offset=93
};

char unsigned MovingThing::Update();
char unsigned SmartMovingThing::IsMovingToTgt();
char unsigned Plant::IsFallen();
char unsigned Building::IsPowered();
char unsigned Building::IsBusted();
char unsigned AtMmsEnd( MyMinSprite &, MySprite & );
void SmartMovingThing::SetMoveToInsideBuilding( Building *, XY );
void Drone::InitArray();
void Drone::Resync();
void Drone::Read( long & );
void Drone::Write( long & );
long Drone::ReadBuffer( Drone * *, long, long, BioGame & );
long Drone::WriteBuffer( Drone * *, long, long, BioGame & );
Drone * Drone::Create( Building *, Thing *, DroneType );
void Drone::Free();
void Drone::UntagTarget();
void Drone::GoBoom();
char unsigned Drone::Damage( long, Thing * );
void Drone::SetDraggingTarget();
void Drone::DropWhateverYouWereDragging();
char unsigned Drone::Update();
void Drone::UpdateAll();

#endif // BIO_DRONE_HPP_
/******************************************************************************/
