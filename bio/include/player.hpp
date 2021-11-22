/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file player.hpp
 *     Header file for player.cpp.
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
#ifndef BIO_PLAYER_HPP_
#define BIO_PLAYER_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "thebase.hpp"
#include "theship.hpp"
#include "research.hpp"
#include "playerstat.hpp"

class Packet;
class Thing;
class PlSpec;
class Specialist;

class Player { // sizeof=1769
    UBYTE ControlType; // offset=0
    UBYTE idx; // offset=1
    BBOOL computer; // offset=2
    SBYTE teamNum; // offset=3
    SBYTE teamIDX[5]; // offset=4
    XY dropSite; // offset=9
    SLONG ePoints; // offset=13
    SLONG ePointsGoodBad; // offset=17
    TheShip theShip; // offset=21
    TheBase theBase; // offset=1185
    ResearchGrid grid; // offset=1562
    PlayerRace race; // offset=1762
    UBYTE dead; // offset=1763
    UBYTE pad[3]; // offset=1764
    SBYTE techLevel; // offset=1767
    UBYTE solarSystem; // offset=1768
public:
    //Player(UBYTE arg1); -- would replace default no-arg constructor
    void Init();
    BBOOL Valid();
    void MakeValid();
    void Invalidate();
    BBOOL Resync();
    void Reset();
    void FreeAllAllocs();
    void AddBad(SLONG arg1, XY arg2);
    void AddBad(SLONG arg1, Thing *tng2);
    void AddGood(SLONG arg1, Thing *tng2);
    void DefaultTeam();
    BBOOL AddTeamMember(SWORD arg1);
    void RemoveTeamMember(SWORD arg1, BBOOL arg2);
    void YankTeamMemberOffPlanet(UBYTE arg1);
    void YankWholeTeamOffPlanet();
    BBOOL PrepTeamForPlanetside(SLONG arg1);
    void ClearTeamNotOnPlanet();
    void LandTeamNotOnPlanet();
    void ResetTeamLandings();
    PlSpec * GetTeam(UBYTE arg1);
    SBYTE GetNum(PlSpec *arg1);
    void UpdateTeam();
    void UpdateBase(UBYTE arg1);
    void PaletteFromTerraform();
    void EtherealPoints();
    void DisplayEtherealPoints();
    SBYTE next_tool(SBYTE arg1, Specialist &spcls);
    void SetPlayerPointer();
    void SetTargetPointer();
    BBOOL DataRequestFromHost(void *arg1, SLONG arg2, char arg3); // 3rd argument uncertain
    void OverlayInto(Player *arg1);
    BBOOL IsEnemy(Thing *tng1);
    BBOOL IsSamePlayer(Thing *tng1);
    UBYTE BaseColor();
    void pPA_MOVE_TO(Packet *pkt);
    void pPA_ABORT_MOVE(Packet *pkt);
    void pPA_IFC_GO(Packet *pkt);
    void pPA_ADD_TEAM_MEMBER(Packet *pkt);
    void pPA_REMOVE_TEAM_MEMBER(Packet *pkt);
    void pPA_LANDING(Packet *pkt);
    void pPA_CREATE_CREATURE(Packet *pkt);
    void pPA_CREATE_A_CREATURE(Packet *pkt);
    void pPA_SET_DROP_ZONE(Packet *pkt);
    void pPA_NEWSPECIES(Packet *pkt);
    void pPA_ADD_PLANT(Packet *pkt);
    void pPA_RANDOM_SEED(Packet *pkt);
    void pPA_CHEAT(Packet *pkt);
    void pPA_IFC_MOVE_GO(Packet *pkt);
    void pPA_SET_SENTINEL_ZONE(Packet *pkt);
    void pPA_GROUP(Packet *pkt);
    void pPA_UPGRADE_BUILDING(Packet *pkt);
    void pPA_ACTIVATE_BUILDING(Packet *pkt);
    void pPA_IFC_ABORT_SPECIAL(Packet *pkt);
    void pPA_SET_SHEPHERD_THING(Packet *pkt);
    void pPA_SET_SHIELD_MODE(Packet *pkt);
    void pPA_CREATURE_ACTION(Packet *pkt);
    void pPA_SESSIONINFOREQUEST(Packet *pkt);
    void pPA_SETUPSTUFF(Packet *pkt);
    void pPA_JOINSESSION(Packet *pkt);
    void pPA_LEAVE_STAT_SCREEN(Packet *pkt);
    void pPA_WIN_LEVEL(Packet *pkt);
    //Player(Player &arg1); -- generate default copy constructor
    Player & operator =(Player const &player1);
    ~Player();
};

#endif // BIO_PLAYER_HPP_
/******************************************************************************/
