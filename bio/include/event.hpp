/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file event.hpp
 *     Event class.
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
#ifndef BIO_EVENT_HPP_
#define BIO_EVENT_HPP_

#include "bftypes.h"
#include "thingidx.hpp"
#include "thing.hpp"

class BioGame;
class Point;

class Event : public Thing { // sizeof=49
    UBYTE type; // offset=39
    UBYTE state; // offset=40
    SWORD timer; // offset=41
    ThingIDX eff; // offset=43
    ThingIDX building; // offset=46
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual void Read(SLONG &arg1);
    virtual void Write(SLONG &arg1);
    virtual void Resync();
    virtual UBYTE Update();
    BBOOL IsStaticallyDrawn();
    virtual BBOOL IsDead();
    void Free();
    Event * Create(UBYTE arg1, XY cor2, UBYTE arg3, Thing *tng4);
    void InitArray();
    void UpdateAll();
    SLONG ReadBuffer(Event **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG WriteBuffer(Event **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    BBOOL operator ==(Event *arg1);
private:
    BBOOL CreateSphereRing(Point *arg1, BBOOL *arg2, UBYTE arg3);
public:
    //Event(); -- generate default no-args constructor
    //Event(Event &arg1); -- generate default copy constructor
    Event & operator =(Event &arg1);
};

#endif // BIO_EVENT_HPP_
/******************************************************************************/
