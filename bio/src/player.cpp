/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file player.cpp
 *     Implementation of related functions.
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
#include "player.hpp"

#include "bfsprite.h"
#include "bfscreen.h"
#include "data.hpp"
#include "misc.hpp"

Player::Player(UBYTE skip_init)
    : theBase()
{
  // code at 0001:00050843
  if (!skip_init)
    this->Init();
}

Player::~Player() // .tdctor
{
// code at 0001:00061450
}

void Player::Invalidate()
{
// code at 0001:0006008c
}

void Player::DefaultTeam()
{
// code at 0001:0005041a
}

void Player::ResetTeamLandings()
{
// code at 0001:0005057b
}

BBOOL Player::AddTeamMember(SWORD arg1)
{
// code at 0001:000505cc
}

void Player::RemoveTeamMember(SWORD arg1, BBOOL arg2)
{
// code at 0001:000506cb
}

void Player::Init()
{
// code at 0001:0005088d
}

void Player::OverlayInto(Player *arg1)
{
// code at 0001:00050965
}

void Player::AddBad(SLONG arg1, XY arg2)
{
// code at 0001:000509ab
}

void Player::AddBad(SLONG arg1, Thing *tng2)
{
// code at 0001:000509e3
}

void Player::AddGood(SLONG arg1, Thing *tng2)
{
// code at 0001:00050a76
}

char unsigned Player::Resync()
{
// code at 0001:00050b12
}

void Player::FreeAllAllocs()
{
// code at 0001:00050b33
}

void Player::PaletteFromTerraform()
{
// code at 0001:00050b4d
}

void Player::EtherealPoints()
{
// code at 0001:00050b67
}

void Player::DisplayEtherealPoints()
{
// code at 0001:00050bc5
}

BBOOL Player::PrepTeamForPlanetside(SLONG arg1)
{
// code at 0001:00050c0a
}

void Player::ClearTeamNotOnPlanet()
{
// code at 0001:00050d99
}

void Player::LandTeamNotOnPlanet()
{
// code at 0001:00050e57
}

void Player::YankTeamMemberOffPlanet(UBYTE arg1)
{
// code at 0001:00050fc5
}

void Player::YankWholeTeamOffPlanet()
{
// code at 0001:000510c2
}

void Player::Reset()
{
// code at 0001:000510fb
}

SBYTE Player::next_tool(SBYTE arg1, Specialist &spcls)
{
// code at 0001:00051151
}

BBOOL Player::DataRequestFromHost(void *arg1, SLONG arg2, char arg3)
{
// code at 0001:00051174
}

char unsigned Player::Valid()
{
// code at 0001:00003a34
}

PlSpec * Player::GetTeam( char unsigned )
{
// code at 0001:000035dc
}

char unsigned Player::IsEnemy( Thing * )
{
// code at 0001:00025634
}

char unsigned Player::BaseColor()
{
// code at 0001:00025608
}

char signed Player::GetNum( PlSpec * )
{
// code at 0001:000254e4
}

void Player::SetPlayerPointer()
{
  // code at 0001:00015818
  TbSprite *spr;

  spr = &pointers_sprites[this->idx + 1];
  if ( lbDisplay.MouseSprite != spr )
    SetPointerAndHotpoint(spr, 0, 0);
}

char unsigned Player::IsSamePlayer( Thing * )
{
// code at 0001:0001d230
}

void Player::MakeValid()
{
// code at 0001:0004e568
}

Player & Player::operator =(Player const &plyr1)
{
// code at 0001:0004e1c8
}

void Player::pPA_MOVE_TO(Packet *pkt)
{
// code at 0001:00051252
}

void Player::pPA_IFC_GO(Packet *pkt)
{
// code at 0001:000512e6
}

void Player::pPA_IFC_ABORT_SPECIAL(Packet *pkt)
{
// code at 0001:00051464
}

void Player::pPA_IFC_MOVE_GO(Packet *pkt)
{
// code at 0001:000514ba
}

void Player::pPA_ADD_TEAM_MEMBER(Packet *pkt)
{
// code at 0001:0005169b
}

void Player::pPA_REMOVE_TEAM_MEMBER(Packet *pkt)
{
// code at 0001:000516c4
}

void Player::pPA_SET_DROP_ZONE(Packet *pkt)
{
// code at 0001:000516f2
}

void Player::pPA_LANDING(Packet *pkt)
{
// code at 0001:0005173e
}

void Player::pPA_ABORT_MOVE(Packet *pkt)
{
// code at 0001:0005177b
}

void Player::pPA_RANDOM_SEED(Packet *pkt)
{
// code at 0001:000517c6
}

void Player::pPA_CREATE_A_CREATURE(Packet *pkt)
{
// code at 0001:000517ed
}

void Player::pPA_CHEAT(Packet *pkt)
{
// code at 0001:00051878
}

void Player::pPA_GROUP(Packet *pkt)
{
// code at 0001:00051eb1
}

void Player::pPA_SET_SENTINEL_ZONE(Packet *pkt)
{
// code at 0001:000520dc
}

void Player::pPA_SET_SHEPHERD_THING(Packet *pkt)
{
// code at 0001:0005214e
}

void Player::pPA_UPGRADE_BUILDING(Packet *pkt)
{
// code at 0001:00052359
}

void Player::pPA_ACTIVATE_BUILDING(Packet *pkt)
{
// code at 0001:0005238f
}

void Player::pPA_SET_SHIELD_MODE(Packet *pkt)
{
// code at 0001:000524ae
}

void Player::pPA_CREATURE_ACTION(Packet *pkt)
{
// code at 0001:000525f1
}

void Player::pPA_SESSIONINFOREQUEST(Packet *pkt)
{
// code at 0001:00052696
}

void Player::pPA_SETUPSTUFF(Packet *pkt)
{
// code at 0001:00052723
}

void Player::pPA_JOINSESSION(Packet *pkt)
{
// code at 0001:0005279f
}

void Player::pPA_LEAVE_STAT_SCREEN(Packet *pkt)
{
// code at 0001:000527c7
}

void Player::pPA_WIN_LEVEL(Packet *pkt)
{
// code at 0001:00052810
}

/*char unsigned Player::__defarg()
{
// code at 0001:00061604
}*/

/*Thing * Player::__defarg()
{
// code at 0001:00025694
}*/

/*Thing * Player::__defarg()
{
// code at 0001:00025670
}*/

/*long Player::__defarg()
{
// code at 0001:0004e5ac
}*/

/******************************************************************************/
