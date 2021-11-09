/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file title.hpp
 *     Header file for title.cpp.
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
#ifndef BIO_TITLE_HPP_
#define BIO_TITLE_HPP_



struct __1td29bmSpr { // sizeof=12
    MySprite *off; // offset=0
    MySprite *on; // offset=4
    MyMinSprite *mMs; // offset=8
};


struct LanderStuff { // sizeof=5
    XY loc; // offset=0
    UBYTE type; // offset=4
};

typedef struct LanderStuff LanderStuff;

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

typedef struct RocketShip RocketShip;

class IFCTitle : IFCBase { // sizeof=232
    class IFCTitle * IFCTitle(class IFCTitle *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCTitle * IFCTitle(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    SWORD creditPos; // offset=20
    UBYTE *rocketData; // offset=22
    RocketShip rocketShip; // offset=26
};

class IFCStartNetwork : IFCBase { // sizeof=19
    class IFCStartNetwork * IFCStartNetwork(class IFCStartNetwork *arg1);
    class IFCStartNetwork * IFCStartNetwork();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    unsigned int *__vbptr;
};

class IFCGeneratePlanet : IFCBase { // sizeof=19
    class IFCGeneratePlanet * IFCGeneratePlanet(class IFCGeneratePlanet *arg1);
    class IFCGeneratePlanet * IFCGeneratePlanet();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    unsigned int *__vbptr;
};

struct TbTime { // sizeof=4
    UBYTE Hour; // offset=0
    UBYTE Minute; // offset=1
    UBYTE Second; // offset=2
    UBYTE HSecond; // offset=3
};

typedef struct TbTime TbTime;

class IFCJoiningPlayer : IFCBase { // sizeof=27
    class IFCJoiningPlayer * IFCJoiningPlayer(class IFCJoiningPlayer *arg1);
    class IFCJoiningPlayer * IFCJoiningPlayer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    unsigned int *__vbptr;
    IFCBase *previousIFC;
    ULONG joiningPlayers; // offset=4
};

class IFCWinLevel : IFCBase { // sizeof=19
    class IFCWinLevel * IFCWinLevel(class IFCWinLevel *arg1);
    class IFCWinLevel * IFCWinLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    unsigned int *__vbptr;
};

class IFCLoseLevel : IFCBase { // sizeof=19
    class IFCLoseLevel * IFCLoseLevel(class IFCLoseLevel *arg1);
    class IFCLoseLevel * IFCLoseLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    unsigned int *__vbptr;
};

class IFCStatScreen : IFCBase { // sizeof=19
    class IFCStatScreen * IFCStatScreen(class IFCStatScreen *arg1);
    class IFCStatScreen * IFCStatScreen();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //void (**__vfptr)();
    unsigned int *__vbptr;
};


#endif // BIO_TITLE_HPP_
/******************************************************************************/
