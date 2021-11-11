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

char * Config::InstalledFile( char * )
{
// code at 0001:000036ac
}

near EtherealTargetScan::EtherealTargetScan( Ethereal &, long unsigned )
{
// code at 0001:00003560
}

void EtherealTargetScan::PerGrid()
{
// code at 0001:00003438
}

char unsigned EventHelp::IsForceDisplay()
{
// code at 0001:00093704
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

void TopoGrid::Invalidate()
{
// code at 0001:00077df8
}

char unsigned TopoGrid::Valid()
{
// code at 0001:00077dbc
}

char unsigned TopoMorpher::TopoGridIDX( TopoGrid * )
{
// code at 0001:00077d8c
}

char unsigned TopoMorpher::IsTopoGridValid( char unsigned )
{
// code at 0001:00077d58
}

void TopoMorpher::AbortTopoGrid( char unsigned )
{
// code at 0001:00077ce8
}

short WeightedAngle( char unsigned )
{
// code at 0001:00077c3c
}

near LumberjackScan::LumberjackScan( PlSpec & )
{
// code at 0001:00077b34
}

void LumberjackScan::PerGrid()
{
// code at 0001:00077aa8
}

near HarvestClearScan::HarvestClearScan( PlSpec &, char unsigned, char unsigned )
{
// code at 0001:00077a20
}

void HarvestClearScan::PerGrid()
{
// code at 0001:000778a0
}

void HarvestClearScan::Do()
{
// code at 0001:000777f8
}

near FarmerPlantingScan::FarmerPlantingScan( PlSpec &, char unsigned )
{
// code at 0001:00077624
}

void FarmerPlantingScan::PerGrid()
{
// code at 0001:000774e8
}

near SurvivalScan::SurvivalScan( PlSpec &, long unsigned )
{
// code at 0001:00077488
}

void SurvivalScan::PerGrid()
{
// code at 0001:000773cc
}

near StudyCreatureScan::StudyCreatureScan( PlSpec & )
{
// code at 0001:00077358
}

void StudyCreatureScan::PerGrid()
{
// code at 0001:00077298
}

near HealCreatureScan::HealCreatureScan( PlSpec & )
{
// code at 0001:00077224
}

void HealCreatureScan::PerGrid()
{
// code at 0001:00077158
}

MyAnimBank * PlSpecLoader::Load( PlayerRace, SpecialistClass )
{
// code at 0001:0007000c
}

char unsigned PlSpecLoader::Load( PlSpec * )
{
// code at 0001:00070089
}

void PlSpecLoader::Free( PlayerRace, SpecialistClass, MyAnimBank * )
{
// code at 0001:00070289
}

void PlSpecLoader::Free( PlSpec * )
{
// code at 0001:00070307
}

void InfoRequester::Invalidate()
{
// code at 0001:00025e8c
}

char unsigned InfoRequester::Valid()
{
// code at 0001:00025e54
}

near PaletteSelector::PaletteSelector()
{
// code at 0001:00025e28
}

near EtherealScope::EtherealScope()
{
// code at 0001:000256dc
}

void EtherealScope::Init()
{
// code at 0001:000256b8
}

void EtherealScope::Draw()
{
// code at 0001:0001f248
}

void TeamCircles::Init()
{
// code at 0001:0001f563
}

void TeamCircles::Update()
{
// code at 0001:0001f5c4
}

void PaletteSelector::SetSelectFilter( char unsigned )
{
// code at 0001:00025434
}

void PaletteSelector::RestoreSelectFilter()
{
// code at 0001:000253fc
}

void TeamCircles::Draw()
{
// code at 0001:0001f612
}

void TeamCircles::StartStatic( char unsigned, char unsigned )
{
// code at 0001:0001f66c
}

void TeamCircles::StopStatic( char unsigned )
{
// code at 0001:0001f7bc
}

void TeamCircles::DrawTeamCircle( char unsigned )
{
// code at 0001:0001f7fd
}

void TeamCircles::SelectCircle( char unsigned )
{
// code at 0001:0001fae8
}

void PaletteSelector::SlideOpen()
{
// code at 0001:0001fbb0
}

void PaletteSelector::SlideClose()
{
// code at 0001:0001fc4f
}

void PaletteSelector::Init()
{
// code at 0001:0001fc70
}

void PaletteSelector::Create( Thing * )
{
// code at 0001:0001fcb2
}

void PaletteSelector::Close()
{
// code at 0001:0001ff11
}

void PaletteSelector::LockPalette()
{
// code at 0001:0001ff54
}

void PaletteSelector::UnlockPalette()
{
// code at 0001:0001ff7d
}

char signed PaletteSelector::GetSelected()
{
// code at 0001:0001ffa6
}

void PaletteSelector::CreateBuildingMenu()
{
// code at 0001:0001fffe
}

void PaletteSelector::CreatePlantMenu()
{
// code at 0001:000200e4
}

void PaletteSelector::CreateShepherdMenu()
{
// code at 0001:0002016c
}

char unsigned PaletteSelector::Update( short )
{
// code at 0001:000201ce
}

void PaletteSelector::Draw()
{
// code at 0001:000206eb
}

char unsigned PaletteSelector::IsSelectActive()
{
// code at 0001:0001d35c
}

void PaletteSelector::ClearSelect()
{
// code at 0001:0001d334
}

void BoundMmsToMySprite( MyMinSprite &, MySprite & )
{
// code at 0001:0001d1f8
}

void TeamCircles::Reset()
{
// code at 0001:0001ce98
}

near CompDebug::CompDebug()
{
// code at 0001:000374ac
}

near BuildPriority::BuildPriority()
{
// code at 0001:00037480
}

void CreatureInfo::Invalidate()
{
// code at 0001:00037458
}

near CompTarget::CompTarget()
{
// code at 0001:0003742c
}

char unsigned CloseTgt::Valid()
{
// code at 0001:000373f4
}

char unsigned BuildPriority::Build( PlSpec *, char unsigned, char unsigned )
{
// code at 0001:000343f8
}

char unsigned BuildPriority::BuildHighestPri( PlSpec * )
{
// code at 0001:00030496
}

char unsigned BuildPriority::Emergency( PlSpec * )
{
// code at 0001:0003057a
}

char unsigned BuildPriority::Basic( PlSpec * )
{
// code at 0001:000307fc
}

char unsigned BuildPriority::BuildingPersonality( PlSpec *, char signed )
{
// code at 0001:00030df6
}

BestBuilding BuildPriority::FindBestLoc( char unsigned, char unsigned )
{
// code at 0001:00030e23
}

char unsigned CompTarget::Valid()
{
// code at 0001:0003429c
}

void CompTarget::Invalidate()
{
// code at 0001:00034270
}

void CompTarget::NewTarget( short, TgtType )
{
// code at 0001:00033bb3
}

void CompTarget::AssignCreatureToThis( short )
{
// code at 0001:00033be8
}

near GPointFlags::GPointFlags()
{
// code at 0001:00033fd8
}

near FindHighestBuildingSite::FindHighestBuildingSite( XY, long unsigned, char unsigned )
{
// code at 0001:00036f98
}

near TestSlice::TestSlice( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036f40
}

void TestSlice::PerGrid()
{
// code at 0001:00036f24
}

near TestEverything::TestEverything( XY, long unsigned, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00036ecc
}

void TestEverything::PerGrid()
{
// code at 0001:00036eb0
}

near ChopTreeScan::ChopTreeScan( XY, long unsigned )
{
// code at 0001:00036e70
}

near BestForestScan::BestForestScan( XY, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00036e00
}

near MineralScan::MineralScan( XY, long unsigned )
{
// code at 0001:00036db4
}

near MineScan::MineScan( XY, long unsigned, char unsigned )
{
// code at 0001:00036d60
}

near PowerScan::PowerScan( XY, long unsigned, char unsigned )
{
// code at 0001:00036d08
}

char unsigned NearestBuildingSite::__defarg()
{
// code at 0001:00036ce8
}

near NearestBuildingSite::NearestBuildingSite( XY, long unsigned, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036c7c
}

near OldPowerTally::OldPowerTally( XY, long unsigned, char unsigned )
{
// code at 0001:00036c1c
}

near NewPowerTally::NewPowerTally( XY, long unsigned )
{
// code at 0001:00036bc8
}

near SatisfyBuildings::SatisfyBuildings( XY, long unsigned, char unsigned, char unsigned, char unsigned )
{
// code at 0001:00036b4c
}

near PointSample::PointSample( XY, long unsigned, long unsigned )
{
// code at 0001:00036ab4
}

near PointSample::PointSample( XY, long unsigned, char unsigned )
{
// code at 0001:000369fc
}

near BestForestSample::BestForestSample( XY, long unsigned, char unsigned, char unsigned, long unsigned )
{
// code at 0001:00036998
}

void FindHighestBuildingSite::PerGrid()
{
// code at 0001:000273ff
}

void FindLowestBuildingSite::PerGrid()
{
// code at 0001:000274aa
}

void ChopTreeScan::PerGrid()
{
// code at 0001:00027570
}

void ForestScan::PerGrid()
{
// code at 0001:00027ab5
}

near ForestScan::ForestScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00027b98
}

void BestForestScan::PerGrid()
{
// code at 0001:00027c5f
}

near NearestPoweredBuildingSite::NearestPoweredBuildingSite( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036504
}

near NearestLand::NearestLand( XY, long unsigned )
{
// code at 0001:000364c0
}

void HarvestScan::PerGrid()
{
// code at 0001:00027d1c
}

void MineralScan::PerGrid()
{
// code at 0001:00027dae
}

void MineScan::PerGrid()
{
// code at 0001:00027dd9
}

void PowerScan::PerGrid()
{
// code at 0001:00027e58
}

void NearestBuildingSite::PerGrid()
{
// code at 0001:00027fa8
}

void NearestPoweredBuildingSite::PerGrid()
{
// code at 0001:0002804d
}

void NearestLand::PerGrid()
{
// code at 0001:00028107
}

void OldPowerTally::PerGrid()
{
// code at 0001:0002814d
}

void NewPowerTally::PerGrid()
{
// code at 0001:000281cc
}

near PowerStationScan::PowerStationScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00028204
}

void PowerStationScan::PerGrid()
{
// code at 0001:0002827e
}

void SatisfyBuildings::Do()
{
// code at 0001:0002835e
}

near SiteScore::SiteScore( XY, long unsigned )
{
// code at 0001:00036474
}

near NewBaseScan::NewBaseScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:00036410
}

void SatisfyBuildings::PerGrid()
{
// code at 0001:000283d1
}

void PointSample::Do()
{
// code at 0001:00028485
}

void SiteScore::PerGrid()
{
// code at 0001:000285b4
}

void NewBaseScan::PerGrid()
{
// code at 0001:00028625
}

void PlantScan::PerGrid()
{
// code at 0001:00028892
}

near PlantScan::PlantScan( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:000289b3
}

near ClosestTree::ClosestTree( XY &, long unsigned )
{
// code at 0001:000363b8
}

near ClosestDeadCreature::ClosestDeadCreature( XY, long unsigned )
{
// code at 0001:00036360
}

near CountTrees::CountTrees( XY, long unsigned )
{
// code at 0001:00036314
}

near GuardPointImportance::GuardPointImportance( XY, long unsigned )
{
// code at 0001:000362c8
}

near ClosestTargets::ClosestTargets( XY, long unsigned, char unsigned, char unsigned )
{
// code at 0001:000361dc
}

void BestForestSample::PerGrid()
{
// code at 0001:00028a6c
}

void ClosestTree::PerGrid()
{
// code at 0001:00028af0
}

void ClosestDeadCreature::PerGrid()
{
// code at 0001:00028b8c
}

void ClosestEnemy::PerGrid()
{
// code at 0001:00028c90
}

void CountTrees::PerGrid()
{
// code at 0001:00028e7a
}

void GuardPointImportance::PerGrid()
{
// code at 0001:00028f01
}

void ClosestTargets::PerGrid()
{
// code at 0001:00028fd9
}


char * stuffCreatures[];

char * stuffBuildings[];

char * gPTypes[];

void GPointFlags::operator =(GPointFlags *arg1)
{
// code at 0001:0003401f
}

void FlickerStuff::Invalidate()
{
// code at 0001:000489fc
}

char unsigned FlickerStuff::Valid()
{
// code at 0001:000489d0
}

void FlickerHandler::Free( char unsigned )
{
// code at 0001:000489a0
}




/******************************************************************************/
