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
    LanderStuff stuff[31]; // offset=27
};

class IFCTitle : public IFCBase { // sizeof=232
public:
    //IFCTitle(IFCTitle *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    IFCTitle(MyGadget *arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    SWORD creditPos; // offset=20
    UBYTE *rocketData; // offset=22
    RocketShip rocketShip; // offset=26
};

class IFCWinLevel : public IFCBase { // sizeof=19
public:
    //IFCWinLevel(IFCWinLevel *arg1);
    //IFCWinLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

class IFCLoseLevel : public IFCBase { // sizeof=19
public:
    //IFCLoseLevel(IFCLoseLevel *arg1);
    //IFCLoseLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

class IFCStatScreen : public IFCBase { // sizeof=19
public:
    //IFCStatScreen(IFCStatScreen *arg1);
    //IFCStatScreen();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

class IFCStartNetwork : public IFCBase { // sizeof=19
public:
    //IFCStartNetwork(IFCStartNetwork *arg1);
    //IFCStartNetwork();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

class IFCJoiningPlayer : public IFCBase { // sizeof=27
public:
    //IFCJoiningPlayer(IFCJoiningPlayer *arg1);
    //IFCJoiningPlayer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    IFCBase *previousIFC;
    ULONG joiningPlayers; // offset=4
};

class IFCGeneratePlanet : public IFCBase { // sizeof=19
public:
    //IFCGeneratePlanet(IFCGeneratePlanet *arg1);
    //IFCGeneratePlanet();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
};

#endif // BIO_IFCTITLE_HPP_
/******************************************************************************/
