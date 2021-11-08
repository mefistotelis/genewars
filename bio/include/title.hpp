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

typedef struct TbLoadFiles TbLoadFiles;

class Specialist { // sizeof=36
    class Specialist * operator=(class Specialist *arg1);
    void ClearPlanetside();
    void SetPlanetside();
    BBOOL IsPlanetside();
    void ClearOnTeam();
    void SetOnTeam();
    BBOOL IsOnTeam();
    char * Name(char *arg1);
    void Invalidate();
    BBOOL Valid();
    char name[19]; // offset=0
    UBYTE sex; // offset=20
    PlayerRace race; // offset=21
    SpecialistClass specClass; // offset=22
    SBYTE ability; // offset=23
    SBYTE resolve; // offset=24
    SBYTE strength; // offset=25
    SBYTE currentStrength; // offset=26
    SBYTE currentResolve; // offset=27
    ULONG landings; // offset=28
    ULONG flags; // offset=32
};

typedef class Specialist Specialist;

typedef class Player Player;


class PowerGraph { // sizeof=45
    class PowerGraph * operator=(class PowerGraph *arg1);
    UBYTE PowerToColor(SWORD arg1);
    void Draw(SLONG arg1, SLONG arg2);
    void Update(SWORD arg1, SWORD arg2, SWORD arg3);
    UBYTE index;
    SWORD lo[49];
    SWORD hi[49];
    SWORD history[49];
};

typedef class PowerGraph PowerGraph;


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
    void (**__vfptr)();
    unsigned int *__vbptr;
};

class IFCGeneratePlanet : IFCBase { // sizeof=19
    class IFCGeneratePlanet * IFCGeneratePlanet(class IFCGeneratePlanet *arg1);
    class IFCGeneratePlanet * IFCGeneratePlanet();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
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
    void (**__vfptr)();
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
    void (**__vfptr)();
    unsigned int *__vbptr;
};

class IFCLoseLevel : IFCBase { // sizeof=19
    class IFCLoseLevel * IFCLoseLevel(class IFCLoseLevel *arg1);
    class IFCLoseLevel * IFCLoseLevel();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

class IFCStatScreen : IFCBase { // sizeof=19
    class IFCStatScreen * IFCStatScreen(class IFCStatScreen *arg1);
    class IFCStatScreen * IFCStatScreen();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    void (**__vfptr)();
    unsigned int *__vbptr;
};

void IFCTitle::PlugIn();
void IFCTitle::PullOut();
void IFCTitle::Update();
void IFCTitle::Draw();
void IFCStartNetwork::PlugIn();
void IFCStartNetwork::PullOut();
void IFCStartNetwork::Update();
void IFCStartNetwork::Draw();
void IFCGeneratePlanet::PlugIn();
void IFCGeneratePlanet::PullOut();
void IFCGeneratePlanet::Update();
void IFCGeneratePlanet::Draw();
void IFCJoiningPlayer::PlugIn();
void IFCJoiningPlayer::PullOut();
void IFCJoiningPlayer::Update();
void IFCJoiningPlayer::Draw();
void IFCWinLevel::PlugIn();
void IFCWinLevel::PullOut();
void IFCWinLevel::Update();
void IFCWinLevel::Draw();
void IFCLoseLevel::PlugIn();
void IFCLoseLevel::PullOut();
void IFCLoseLevel::Update();
void IFCLoseLevel::Draw();
void IFCStatScreen::PlugIn();
void IFCStatScreen::PullOut();
void IFCStatScreen::Update();
void IFCStatScreen::Draw();

#endif // BIO_TITLE_HPP_
/******************************************************************************/
