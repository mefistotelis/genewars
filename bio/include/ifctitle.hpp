/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifctitle.hpp
 *     Header file for ifctitle.cpp.
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
#ifndef BIO_IFCTITLE_HPP_
#define BIO_IFCTITLE_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"
#include "iface.hpp"

class MyGadget;

enum { // type=int8_t
    TITLE_SINGLE_PLAYER = 0,
    TITLE_MULTI_PLAYER,
    TITLE_QUIT,
    TITLE_OPTIONS,
};

struct LanderStuff { // sizeof=5
    XY loc; // offset=0
    UBYTE type; // offset=4
};

struct RocketShip { // sizeof=187
    XY loc; // offset=0
    XY vel; // offset=4
    SWORD angle; // offset=8
    SWORD angleVel; // offset=10
    SWORD fuel; // offset=12
    SWORD thrust; // offset=14
    UBYTE state; // offset=16
    UBYTE level; // offset=17
    ULONG score; // offset=18
    XY padLoc; // offset=22
    UBYTE padLength; // offset=26
    LanderStuff stuff[32]; // offset=27
};

class IFCTitle : public IFCBase { // sizeof=232
public:
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    SWORD creditPos; // offset=20
    UBYTE *rocketData; // offset=22
    RocketShip rocketShip; // offset=26
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=213
public:
    IFCTitle(MyGadget *arg1);
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    //IFCTitle(IFCTitle &arg1); -- generate default copy constructor
};

class IFCWinLevel : public IFCBase { // sizeof=19
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=4
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    IFCWinLevel();
    //IFCWinLevel(IFCWinLevel &arg1); -- generate default copy constructor
};

class IFCLoseLevel : public IFCBase { // sizeof=19
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=4
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    IFCLoseLevel();
    //IFCLoseLevel(IFCLoseLevel &arg1); -- generate default copy constructor
};

class IFCStatScreen : public IFCBase { // sizeof=19
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=4
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    IFCStatScreen();
    //IFCStatScreen(IFCStatScreen &arg1); -- generate default copy constructor
};

class IFCStartNetwork : public IFCBase { // sizeof=19
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=4
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    IFCStartNetwork();
    //IFCStartNetwork(IFCStartNetwork &arg1); -- generate default copy constructor
};

class IFCJoiningPlayer : public IFCBase { // sizeof=27
public:
    ULONG joiningPlayers; // offset=4
    IFCBase *previousIFC; // offset=8
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=12
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    IFCJoiningPlayer();
    //IFCJoiningPlayer(IFCJoiningPlayer &arg1); -- generate default copy constructor
};

class IFCGeneratePlanet : public IFCBase { // sizeof=19
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=4
public:
    virtual void PlugIn();
    virtual void PullOut();
    virtual void Draw();
    virtual void Update();
    IFCGeneratePlanet();
    //IFCGeneratePlanet(IFCGeneratePlanet &arg1); -- generate default copy constructor
};

#endif // BIO_IFCTITLE_HPP_
/******************************************************************************/
