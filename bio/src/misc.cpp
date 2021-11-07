/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file misc.cpp
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
#include "misc.hpp"

long GridTile::__defarg()
{
// code at 0001:000938c0
}

void GridTile::SetFoundation()
{
// code at 0001:0009388c
}

void GridTile::ClearFoundation()
{
// code at 0001:00093868
}

char unsigned GridTile::IsCrater()
{
// code at 0001:00093820
}

void EtherealZone::Invalidate()
{
// code at 0001:000937fc
}

void EtherealZone::Deactivate()
{
// code at 0001:000937d8
}

void EtherealZone::Exhaust()
{
// code at 0001:000937a8
}

void EtherealZone::Activate()
{
// code at 0001:00093774
}

char unsigned EtherealZoneHandler::IsZonesScoredOut()
{
// code at 0001:00093730
}

char unsigned EventHelp::IsForceDisplay()
{
// code at 0001:00093704
}

void IFCBase::SetupColorLookups()
{
// code at 0001:00089a9c
}

void IFCBase::ClearMousePointer()
{
// code at 0001:00089b8a
}

void SoundConfig::Read( char * )
{
// code at 0001:00089bae
}

void SoundConfig::Write( char * )
{
// code at 0001:00089bfa
}

void SoundConfig::Set()
{
// code at 0001:00089c5e
}

char unsigned Config::GetConfigs()
{
// code at 0001:00089cbf
}

char unsigned BioGame::Write( char *, char unsigned )
{
// code at 0001:0008a05c
}

char unsigned BioGame::ReadName( char *, char * )
{
// code at 0001:0008a455
}

char unsigned BioGame::Read( char *, char unsigned, char signed, Player * )
{
// code at 0001:0008a4bb
}

void BioGame::FreeAllAllocs()
{
// code at 0001:0008ae4c
}

void BioGame::RemoveTargetReferencesTo( Thing * )
{
// code at 0001:0008af42
}

void BioGame::RegisterMapChangeWithThings()
{
// code at 0001:0008b2ac
}

void BioGame::ClearExplorationMapAndReshadeThings()
{
// code at 0001:0008b36e
}

void BioGame::CompareAllGames()
{
// code at 0001:0008b5af
}

void BioGame::Compare( BioGame & )
{
// code at 0001:0008b6df
}

void BioGame::ResetGameAndControl()
{
// code at 0001:0008b9b4
}

void BioGame::CheckForVictory()
{
// code at 0001:0008ba4a
}

void Recording::Encode()
{
// code at 0001:0008dc53
}

void Recording::Decode()
{
// code at 0001:0008de17
}

char unsigned Recorder::Init( char *, char unsigned )
{
// code at 0001:0008df26
}

void Recorder::Close()
{
// code at 0001:0008e065
}

void Recorder::Flush()
{
// code at 0001:0008e0a5
}

void Recorder::ReadBuffer()
{
// code at 0001:0008e0f7
}

void Recorder::Store()
{
// code at 0001:0008e138
}

void Recorder::Playback()
{
// code at 0001:0008e17e
}

void HelpDraw::Draw( MyGadget *, char * )
{
// code at 0001:0008e1f8
}

void HelpDraw::GenericHelpDraw( MyGadget *, char * )
{
// code at 0001:0008e4e3
}

void EventHelp::Log( EventHelpType, char unsigned )
{
// code at 0001:0008e50e
}

void TopoGrid::InterpolateAlts( long unsigned, long unsigned, long unsigned, long unsigned, long unsigned, long unsigned, long unsigned, long unsigned, long, char unsigned (near *)[9], char signed )
{
// code at 0001:0008e595
}

void TopoGrid::Fractalize( char unsigned, long )
{
// code at 0001:0008ed2c
}

void TopoGrid::SetTimer()
{
// code at 0001:0008fa30
}

void TopoGrid::Create( XY, char unsigned, long, long )
{
// code at 0001:0008fb1a
}

void TopoGrid::Flat( XY, char unsigned, long, long )
{
// code at 0001:0008fc45
}

void TopoGrid::Crater( XY, char unsigned )
{
// code at 0001:0008fd64
}

char unsigned TopoGrid::Update()
{
// code at 0001:00090fe9
}

near TopoMorpher::TopoMorpher()
{
// code at 0001:000912b0
}

TopoGrid * TopoMorpher::Create( XY, char unsigned, long, long )
{
// code at 0001:00091306
}

TopoGrid * TopoMorpher::Crater( XY, char unsigned )
{
// code at 0001:00091388
}

TopoGrid * TopoMorpher::Flat( XY, char unsigned, long, long )
{
// code at 0001:00091400
}

void TopoMorpher::Update()
{
// code at 0001:00091482
}

char unsigned EtherealZone::ScoreToPlayer( long, char unsigned, Thing * )
{
// code at 0001:00091525
}

void EtherealZone::ScoreCreatures( CreatureBaseSpecies )
{
// code at 0001:00091666
}

void EtherealZone::ScorePlants( PlantSpecies )
{
// code at 0001:000919c8
}

void EtherealZone::ScoreTemples()
{
// code at 0001:00091cb3
}

void EtherealZone::Score()
{
// code at 0001:00091f0f
}

void EtherealZone::Shade( char unsigned )
{
// code at 0001:00091ffb
}

void EtherealZone::Draw()
{
// code at 0001:00092229
}

void EtherealZone::FreeEffectMarker()
{
// code at 0001:00092368
}

void EtherealZoneHandler::InitFromPlanet( Planet & )
{
// code at 0001:000923d5
}

void EtherealZoneHandler::Update()
{
// code at 0001:00092568
}

void EtherealZoneHandler::LightAllActive()
{
// code at 0001:0009288c
}

void EtherealZoneHandler::Draw()
{
// code at 0001:00092960
}

short FindShortDist( char unsigned, char unsigned, char unsigned )
{
// code at 0001:000929d9
}

long FindShortDistance( long, long, long )
{
// code at 0001:00092a77
}

void SetRefreshZones( long, long, long, long, char unsigned )
{
// code at 0001:00092b07
}

char unsigned ActiveRefreshZoneHit( long, long, TbSprite * )
{
// code at 0001:00092c7c
}

char unsigned ActiveRefreshZoneHit( long, long, MyFrame * )
{
// code at 0001:00092deb
}

void SetFrameRefreshZones( long, long, MyFrame *, char unsigned )
{
// code at 0001:00092f28
}

void DrawLineHR( short, short, short, short, char unsigned )
{
// code at 0001:00093075
}

char * ComposeAndLowerCaseString( char *, char *, char * )
{
// code at 0001:00093124
}

char * MakeHelpActionString( char *, char unsigned, Thing * )
{
// code at 0001:00093186
}

void MemDump( char unsigned *, long unsigned )
{
// code at 0001:000932ec
}

void global_x_rotate_points( Point *, Point *, long, long, long unsigned )
{
// code at 0001:00093346
}

void global_y_rotate_points( Point *, Point *, long, long, long unsigned )
{
// code at 0001:000933ec
}

void global_z_rotate_points( Point *, Point *, long, long, long unsigned )
{
// code at 0001:00093491
}

MyFrame * UpdateMyMinSprite2( MySprite *, MyMinSprite * )
{
// code at 0001:00093536
}

void SetPointerAndHotpoint( TbSprite *, long unsigned, long unsigned )
{
// code at 0001:000936ac
}


/******************************************************************************/
