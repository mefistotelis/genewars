/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file clone.hpp
 *     Header file for clone.cpp.
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
#ifndef BIO_CLONE_HPP_
#define BIO_CLONE_HPP_

class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;


class TeamCircles { // sizeof=63
    void StopStatic(UBYTE arg1);
    void StartStatic(UBYTE arg1, BBOOL arg2);
    void SelectCircle(UBYTE arg1);
    void DrawTeamCircle(UBYTE arg1);
    void Reset();
    void Draw();
    void Update();
    void Init();
    BBOOL red[4];
    SBYTE circleFadeDelta;
    TeamCircleMode modes[4]; // offset=0
    SBYTE circleActive; // offset=5
    SBYTE circleFadeLevel; // offset=6
    MyMinSprite mMs[4]; // offset=7
    MyMinSprite staticMms[4]; // offset=32
};

typedef class TeamCircles TeamCircles;

char unsigned Building::IsFunctional();
char unsigned Specialist::Valid();
char unsigned Specialist::IsOnTeam();
char unsigned Specialist::IsPlanetside();
char unsigned EventHelp::__defarg();
void IsoMapBuffer::SetNewXlatedTop( char unsigned, char unsigned );
char unsigned MapDisplay::IsFullScreen();
void MapDisplay::SetScrolled();
void IFCBase::SetPacket( char unsigned, short );
void IFCBase::SetPacket( char unsigned, short, short );
char unsigned IFCBase::PacketAction();
void IFCPlanetside::SetOnOffSwitch( char unsigned );
void ClonePad::Init( Thing * );
void ClonePad::Close();
char unsigned ClonePad::Update( short );
void ClonePad::Draw( char signed );
char signed ClonePad::FindCrewType( char signed & );
char signed ClonePad::FindTeamNum();
void ClonePad::CrewHelp( MyGadget * );
void ClonePad::TeamHelp( MyGadget * );
void ClonePad::DrawMainPanelEdge();
void ClonePad::DrawCrew();
void ClonePad::DrawTeam();
char signed ClonePad::FindBestSpecialist( char unsigned, char unsigned );
void ClonePad::AddSpecialist( char unsigned, char unsigned );
void ClonePad::RemoveSpecialist( char unsigned );

#endif // BIO_CLONE_HPP_
/******************************************************************************/
