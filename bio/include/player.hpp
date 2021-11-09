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

enum PlayerRace { // type=int8_t
    RACE_HUMAN = 0,
    RACE_SAURIAN,
    RACE_BOHEMIAN,
    RACE_SCHNOZZOID,
    MAX_PLAYER_RACE,
};

typedef enum PlayerRace PlayerRace;

enum SpecialistClass { // type=int8_t
    CLASS_ARCHITECT = 0,
    CLASS_FARMER,
    CLASS_SCIENTIST,
    CLASS_SHEPHERD,
    MAX_SPEC_CLASS,
};

typedef enum SpecialistClass SpecialistClass;

class Specialist { // sizeof=36
public:
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

class Player { // sizeof=233
    class Player * operator=(class Player *arg1);
    class Player * Player(class Player *arg1);
    void pPA_WIN_LEVEL(Packet *arg1);
    void pPA_LEAVE_STAT_SCREEN(Packet *arg1);
    void pPA_JOINSESSION(Packet *arg1);
    void pPA_SETUPSTUFF(Packet *arg1);
    void pPA_SESSIONINFOREQUEST(Packet *arg1);
    void pPA_CREATURE_ACTION(Packet *arg1);
    void pPA_SET_SHIELD_MODE(Packet *arg1);
    void pPA_SET_SHEPHERD_THING(Packet *arg1);
    void pPA_IFC_ABORT_SPECIAL(Packet *arg1);
    void pPA_ACTIVATE_BUILDING(Packet *arg1);
    void pPA_UPGRADE_BUILDING(Packet *arg1);
    void pPA_GROUP(Packet *arg1);
    void pPA_SET_SENTINEL_ZONE(Packet *arg1);
    void pPA_IFC_MOVE_GO(Packet *arg1);
    void pPA_CHEAT(Packet *arg1);
    void pPA_RANDOM_SEED(Packet *arg1);
    void pPA_ADD_PLANT(Packet *arg1);
    void pPA_NEWSPECIES(Packet *arg1);
    void pPA_SET_DROP_ZONE(Packet *arg1);
    void pPA_CREATE_A_CREATURE(Packet *arg1);
    void pPA_CREATE_CREATURE(Packet *arg1);
    void pPA_LANDING(Packet *arg1);
    void pPA_REMOVE_TEAM_MEMBER(Packet *arg1);
    void pPA_ADD_TEAM_MEMBER(Packet *arg1);
    void pPA_IFC_GO(Packet *arg1);
    void pPA_ABORT_MOVE(Packet *arg1);
    void pPA_MOVE_TO(Packet *arg1);
    UBYTE BaseColor();
    BBOOL IsSamePlayer(Thing *arg1);
    BBOOL IsEnemy(Thing *arg1);
    void OverlayInto(Player *arg1);
    BBOOL DataRequestFromHost(void *arg1, SLONG arg2, char arg3);
    void SetTargetPointer();
    void SetPlayerPointer();
    SBYTE next_tool(SBYTE arg1, Specialist *arg2);
    void DisplayEtherealPoints();
    void EtherealPoints();
    void PaletteFromTerraform();
    void UpdateBase(UBYTE arg1);
    void UpdateTeam();
    SBYTE GetNum(PlSpec *arg1);
    PlSpec * GetTeam(UBYTE arg1);
    void ResetTeamLandings();
    void LandTeamNotOnPlanet();
    void ClearTeamNotOnPlanet();
    BBOOL PrepTeamForPlanetside(SLONG arg1);
    void YankWholeTeamOffPlanet();
    void YankTeamMemberOffPlanet(UBYTE arg1);
    void RemoveTeamMember(SWORD arg1, BBOOL arg2);
    BBOOL AddTeamMember(SWORD arg1);
    void DefaultTeam();
    void AddGood(SLONG arg1, Thing *arg2);
    void AddBad(SLONG arg1, Thing *arg2);
    void AddBad(SLONG arg1, XY arg2);
    void FreeAllAllocs();
    void Reset();
    BBOOL Resync();
    void Invalidate();
    void MakeValid();
    BBOOL Valid();
    void Init();
    class Player * Player(UBYTE arg1);
    UBYTE ControlType; // offset=0
    UBYTE idx; // offset=1
    BBOOL computer; // offset=2
    SBYTE teamNum; // offset=3
    SBYTE teamIDX[4]; // offset=4
    XY dropSite; // offset=9
    SLONG ePoints; // offset=13
    SLONG ePointsGoodBad; // offset=17
    TheShip theShip; // offset=21
    ResearchGrid grid; // offset=26
    TheBase theBase; // offset=161
    PlayerRace race; // offset=226
    UBYTE dead; // offset=227
    UBYTE pad[2]; // offset=228
    SBYTE techLevel; // offset=231
    UBYTE solarSystem; // offset=232
};


void Creature::SetPlayerActive( CreatureUserAction );
char unsigned Plant::IsDead();
void Specialist::Invalidate();
void Specialist::SetOnTeam();
void Specialist::ClearOnTeam();
void Specialist::SetPlanetside();
void Specialist::ClearPlanetside();
void PlSpec::InterruptMove();
void PlSpec::SetupMoveToTgt( XY );
void Player::DefaultTeam();
void Player::ResetTeamLandings();
char unsigned Player::AddTeamMember( short );
void Player::RemoveTeamMember( short, char unsigned );
near Player::Player( char unsigned );
void Player::Init();
void Player::OverlayInto( Player * );
void Player::AddBad( long, XY );
void Player::AddBad( long, Thing * );
void Player::AddGood( long, Thing * );
char unsigned Player::Resync();
void Player::FreeAllAllocs();
void Player::PaletteFromTerraform();
void Player::EtherealPoints();
void Player::DisplayEtherealPoints();
char unsigned Player::PrepTeamForPlanetside( long );
void Player::ClearTeamNotOnPlanet();
void Player::LandTeamNotOnPlanet();
void Player::YankTeamMemberOffPlanet( char unsigned );
void Player::YankWholeTeamOffPlanet();
void Player::Reset();
char signed Player::next_tool( char signed, Specialist & );
char unsigned Player::DataRequestFromHost( void *, long );
void Player::pPA_MOVE_TO( Packet * );
void Player::pPA_IFC_GO( Packet * );
void Player::pPA_IFC_ABORT_SPECIAL( Packet * );
void Player::pPA_IFC_MOVE_GO( Packet * );
void Player::pPA_ADD_TEAM_MEMBER( Packet * );
void Player::pPA_REMOVE_TEAM_MEMBER( Packet * );
void Player::pPA_SET_DROP_ZONE( Packet * );
void Player::pPA_LANDING( Packet * );
void Player::pPA_ABORT_MOVE( Packet * );
void Player::pPA_RANDOM_SEED( Packet * );
void Player::pPA_CREATE_A_CREATURE( Packet * );
void Player::pPA_CHEAT( Packet * );
void Player::pPA_GROUP( Packet * );
void Player::pPA_SET_SENTINEL_ZONE( Packet * );
void Player::pPA_SET_SHEPHERD_THING( Packet * );
void Player::pPA_UPGRADE_BUILDING( Packet * );
void Player::pPA_ACTIVATE_BUILDING( Packet * );
void Player::pPA_SET_SHIELD_MODE( Packet * );
void Player::pPA_CREATURE_ACTION( Packet * );
void Player::pPA_SESSIONINFOREQUEST( Packet * );
void Player::pPA_SETUPSTUFF( Packet * );
void Player::pPA_JOINSESSION( Packet * );
near Plant::Plant();
extern void (near * const __vftbl[])();
void Player::pPA_LEAVE_STAT_SCREEN( Packet * );
void Player::pPA_WIN_LEVEL( Packet * );

char unsigned Player::Valid();
PlSpec * Player::GetTeam( char unsigned );
Thing * Player::__defarg();
Thing * Player::__defarg();
char unsigned Player::IsEnemy( Thing * );
char unsigned Player::BaseColor();
char signed Player::GetNum( PlSpec * );
void Player::SetPlayerPointer();
void Player::Invalidate();
char unsigned Player::IsSamePlayer( Thing * );
char unsigned Player::__defarg();
Player & Player::.tdctor();
long Player::__defarg();
void Player::MakeValid();
Player & Player::operator =( Player const & );

#endif // BIO_PLAYER_HPP_
/******************************************************************************/
