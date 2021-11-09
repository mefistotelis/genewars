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

void Creature::SetPlayerActive( CreatureUserAction )
{
// code at 0001:00052bbc
}

void Specialist::Invalidate()
{
// code at 0001:00052b64
}

void Specialist::SetOnTeam()
{
// code at 0001:00052b40
}

void Specialist::ClearOnTeam()
{
// code at 0001:00052b1c
}

void Specialist::SetPlanetside()
{
// code at 0001:00052af8
}

void Specialist::ClearPlanetside()
{
// code at 0001:00052ad4
}

void PlSpec::InterruptMove()
{
// code at 0001:00052a9c
}

void PlSpec::SetupMoveToTgt( XY )
{
// code at 0001:000529cc
}

void TheShip::Reset()
{
// code at 0001:0004f6d8
}

char unsigned TheShip::CallRocketDown( Player & )
{
// code at 0001:0004f719
}

char unsigned TheShip::CallRocketDown( Building * )
{
// code at 0001:0004f7f5
}

void TheShip::ClearCrew()
{
// code at 0001:0004f8d5
}

void TheShip::MakeInitialCrew( char unsigned )
{
// code at 0001:0004f918
}

void TheShip::GetMoreSpecialists( PlayerRace, int )
{
// code at 0001:0004f9e4
}

void TheShip::MakeNewSpecialist( Specialist &, PlayerRace, SpecialistClass, char unsigned )
{
// code at 0001:0004fc57
}

int TheShip::SpecsInTeamBelongingToRace( PlayerRace )
{
// code at 0001:00050255
}

char unsigned TheShip::AddASpecialist( Specialist & )
{
// code at 0001:000502c0
}

void TheShip::RemoveASpecialist( short )
{
// code at 0001:00050325
}

Specialist * * TheShip::CrewClassList( char unsigned, char unsigned & )
{
// code at 0001:000503a4
}

void Player::DefaultTeam()
{
// code at 0001:0005041a
}

void Player::ResetTeamLandings()
{
// code at 0001:0005057b
}

char unsigned Player::AddTeamMember( short )
{
// code at 0001:000505cc
}

void Player::RemoveTeamMember( short, char unsigned )
{
// code at 0001:000506cb
}

near Player::Player( char unsigned )
{
// code at 0001:00050843
}

void Player::Init()
{
// code at 0001:0005088d
}

void Player::OverlayInto( Player * )
{
// code at 0001:00050965
}

void Player::AddBad( long, XY )
{
// code at 0001:000509ab
}

void Player::AddBad( long, Thing * )
{
// code at 0001:000509e3
}

void Player::AddGood( long, Thing * )
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

char unsigned Player::PrepTeamForPlanetside( long )
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

void Player::YankTeamMemberOffPlanet( char unsigned )
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

char signed Player::next_tool( char signed, Specialist & )
{
// code at 0001:00051151
}

char unsigned Player::DataRequestFromHost( void *, long )
{
// code at 0001:00051174
}

void Player::pPA_MOVE_TO( Packet * )
{
// code at 0001:00051252
}

void Player::pPA_IFC_GO( Packet * )
{
// code at 0001:000512e6
}

void Player::pPA_IFC_ABORT_SPECIAL( Packet * )
{
// code at 0001:00051464
}

void Player::pPA_IFC_MOVE_GO( Packet * )
{
// code at 0001:000514ba
}

void Player::pPA_ADD_TEAM_MEMBER( Packet * )
{
// code at 0001:0005169b
}

void Player::pPA_REMOVE_TEAM_MEMBER( Packet * )
{
// code at 0001:000516c4
}

void Player::pPA_SET_DROP_ZONE( Packet * )
{
// code at 0001:000516f2
}

void Player::pPA_LANDING( Packet * )
{
// code at 0001:0005173e
}

void Player::pPA_ABORT_MOVE( Packet * )
{
// code at 0001:0005177b
}

void Player::pPA_RANDOM_SEED( Packet * )
{
// code at 0001:000517c6
}

void Player::pPA_CREATE_A_CREATURE( Packet * )
{
// code at 0001:000517ed
}

void Player::pPA_CHEAT( Packet * )
{
// code at 0001:00051878
}

void Player::pPA_GROUP( Packet * )
{
// code at 0001:00051eb1
}

void Player::pPA_SET_SENTINEL_ZONE( Packet * )
{
// code at 0001:000520dc
}

void Player::pPA_SET_SHEPHERD_THING( Packet * )
{
// code at 0001:0005214e
}

void Player::pPA_UPGRADE_BUILDING( Packet * )
{
// code at 0001:00052359
}

void Player::pPA_ACTIVATE_BUILDING( Packet * )
{
// code at 0001:0005238f
}

void Player::pPA_SET_SHIELD_MODE( Packet * )
{
// code at 0001:000524ae
}

void Player::pPA_CREATURE_ACTION( Packet * )
{
// code at 0001:000525f1
}

void Player::pPA_SESSIONINFOREQUEST( Packet * )
{
// code at 0001:00052696
}

void Player::pPA_SETUPSTUFF( Packet * )
{
// code at 0001:00052723
}

void Player::pPA_JOINSESSION( Packet * )
{
// code at 0001:0005279f
}

void (near * const __vftbl[])();

void Player::pPA_LEAVE_STAT_SCREEN( Packet * )
{
// code at 0001:000527c7
}

void Player::pPA_WIN_LEVEL( Packet * )
{
// code at 0001:00052810
}

char unsigned ResearchGrid::RegisterCreature( CreatureSpecies )
{
// code at 0001:0005288c
}

void ResearchGrid::CheatGetAllCreatures()
{
// code at 0001:0005290a
}


/******************************************************************************/
