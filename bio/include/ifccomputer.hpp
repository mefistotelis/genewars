/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifccomputer.hpp
 *     Header file for computer.cpp.
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
#ifndef BIO_IFCCOMPUTER_HPP_
#define BIO_IFCCOMPUTER_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"
#include "stuff.hpp"
#include "iface.hpp"

class MyGadget;

class IFCComputer : public IFCBase { // sizeof=55
    IFCBase *saveIFC; // offset=11
    MyGadget *gad; // offset=15
    MyAnimBank *anb; // offset=19
    MySprite *spr; // offset=23
    TbSprite *sprites; // offset=27
    XY mapMouseScroll; // offset=31
    Stuff stuff; // offset=35
    BBOOL drawPowerRange; // offset=43
    BBOOL drawCenters; // offset=44
    BBOOL drawBuildingDebug; // offset=45
    BBOOL drawLocation; // offset=46
    UBYTE slices; // offset=47
    BBOOL draw; // offset=48
    BBOOL fromCenter; // offset=49
    BBOOL drawBuildInfo; // offset=50
    BBOOL pressedKeyLastTurn; // offset=51
    BBOOL creatureDebugStuff; // offset=52
    UBYTE cPlayer; // offset=53
    UBYTE gPointType; // offset=54
//internal:
    //void (**__vfptr)(); // offset=7
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    SBYTE FirstFreeGuardPoint(UBYTE arg1);
    BBOOL BuildingAllowed(UBYTE arg1, UBYTE arg2);
    IFCComputer(MyGadget *arg1);
    //IFCComputer(IFCComputer &arg1); -- generate default copy constructor
};

#endif // BIO_IFCCOMPUTER_HPP_
/******************************************************************************/
