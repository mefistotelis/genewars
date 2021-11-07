/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file creature.cpp
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
#include "creature.hpp"

near WeightedRangeScanner::WeightedRangeScanner( XY &, long unsigned, XY *, long )
{
// code at 0001:00084770
}

near WeightedTgtRangeScanner::WeightedTgtRangeScanner( XY &, long unsigned )
{
// code at 0001:00084708
}

near WeightedTgtRangeScanner::WeightedTgtRangeScanner( XY &, long unsigned, XY *, long )
{
// code at 0001:00084698
}

char unsigned Thing::IsDitheredColor()
{
// code at 0001:00084658
}

char unsigned SmartMovingThing::IsAvoidWaiting()
{
// code at 0001:00084618
}

void SmartMovingThing::ClearIsFlying()
{
// code at 0001:000845f0
}

void SmartMovingThing::SetIsFlying()
{
// code at 0001:000845bc
}

void SmartMovingThing::SetMoveToTgtWithDir( XY )
{
// code at 0001:0008457c
}

char unsigned Creature::__defarg()
{
// code at 0001:0008455c
}

HerdMode Creature::__defarg()
{
// code at 0001:0008453c
}

PlSpec * * Creature::__defarg()
{
// code at 0001:00084518
}

long Creature::Strength()
{
// code at 0001:000844dc
}

long Creature::Defense()
{
// code at 0001:000844a0
}

long Creature::Speed()
{
// code at 0001:00084468
}

long Creature::Health()
{
// code at 0001:00084430
}

long Creature::Energy()
{
// code at 0001:000843f8
}

long Creature::Childhood()
{
// code at 0001:000843cc
}

void Creature::InvalidateMemory()
{
// code at 0001:000843a8
}

char unsigned Creature::IsMemoryValid()
{
// code at 0001:00084370
}

char unsigned Creature::IsAdult()
{
// code at 0001:00084330
}

char unsigned Creature::IsBeingEaten()
{
// code at 0001:000842f0
}

void Creature::SetBeingEaten()
{
// code at 0001:000842cc
}

void Creature::ClearBeingEaten()
{
// code at 0001:000842a8
}

char unsigned Creature::CanSpit()
{
// code at 0001:00084264
}

char unsigned Creature::CanDive()
{
// code at 0001:00084228
}

void Plant::SetBeingEaten()
{
// code at 0001:00084204
}

char unsigned Plant::IsBeingEaten()
{
// code at 0001:000841c8
}

void Plant::ClearBeingEaten()
{
// code at 0001:000841a4
}

GridTile * Effect::__defarg()
{
// code at 0001:00084180
}

char unsigned * __defarg()
{
// code at 0001:0008415c
}

char unsigned * __defarg()
{
// code at 0001:00084138
}

void SmartMovingThing::SetMoveToBuilding( Building * )
{
// code at 0001:00084100
}

char unsigned SmartMovingThing::SetMoveToTgtTest( XY )
{
// code at 0001:00084078
}

char unsigned Creature::AdultScale8()
{
// code at 0001:00083f4c
}

char unsigned Creature::CanFly()
{
// code at 0001:00083f10
}

void Creature::SetupMove( short )
{
// code at 0001:00083ec4
}

near AwarenessScan::AwarenessScan( Creature & )
{
// code at 0001:00083c1c
}

void AwarenessScan::PerGrid()
{
// code at 0001:00083440
}

void AwarenessScan::Do()
{
// code at 0001:00083208
}

near ChopperScan::ChopperScan( Creature & )
{
// code at 0001:000831b8
}

void ChopperScan::PerGrid()
{
// code at 0001:000830f0
}

near CollectorScan::CollectorScan( Creature &, char unsigned, char unsigned )
{
// code at 0001:00082f1c
}

void CollectorScan::PerGrid()
{
// code at 0001:00082cd0
}

near BuilderTreeScan::BuilderTreeScan( Creature & )
{
// code at 0001:00082c6c
}

void BuilderTreeScan::PerGrid()
{
// code at 0001:00082c08
}

char signed const Creature::void UpdateFrozen( GridTile * )::.0::dominantFreezeFactor[];

char signed Creature::ResearchPercent( char signed )
{
// code at 0001:00082ba0
}

void Creature::UpdateFrozen( GridTile * )
{
// code at 0001:00082994
}

void Creature::Discover()
{
// code at 0001:0007820c
}

void Creature::Draw( short, short )
{
// code at 0001:0007839f
}

void Creature::DrawOnMap( short, short )
{
// code at 0001:000783e3
}

char unsigned Creature::IsVectorable()
{
// code at 0001:0007909f
}

char unsigned Creature::IsScreenPointInside( short, short, short, short )
{
// code at 0001:000790dc
}

void Creature::Resync()
{
// code at 0001:0007915d
}

Creature * Creature::Create( char unsigned, CreatureSpecies, XY, char unsigned, Creature * )
{
// code at 0001:000791d6
}

void Creature::InitArray()
{
// code at 0001:0007959d
}

void Creature::Read( long & )
{
// code at 0001:00079624
}

void Creature::Write( long & )
{
// code at 0001:00079683
}

long Creature::ReadBuffer( Creature * *, long, long, BioGame & )
{
// code at 0001:000796c4
}

long Creature::SpitCost()
{
// code at 0001:00082958
}

long Creature::WriteBuffer( Creature * *, long, long, BioGame & )
{
// code at 0001:00079743
}

short Creature::MaxMoveSpeed()
{
// code at 0001:000797c2
}

void Creature::SetResting( long, GridTile * )
{
// code at 0001:000797ff
}

char unsigned Creature::BreatheFire( Thing * )
{
// code at 0001:00079883
}

char unsigned Creature::SpitAt( Thing *, EffectType )
{
// code at 0001:00079970
}

long Creature::SquareTrueRangeToWhereGoingTo()
{
// code at 0001:00079b35
}

void Creature::VectorToWhereGoingTo( Vector & )
{
// code at 0001:00079c94
}

char unsigned Creature::NeedToAvoid( GridTile * )
{
// code at 0001:00079e28
}

void Creature::NewGridUpdate( GridTile * )
{
// code at 0001:00079fd7
}

void Creature::SetSpeedHandler( Normal &, short )
{
// code at 0001:0007a161
}

char unsigned Creature::SetHunting( Thing *, char unsigned )
{
// code at 0001:0007a29b
}

void Creature::ShatterFrozen()
{
// code at 0001:0007a3e7
}

char unsigned Creature::Damage( long, Thing * )
{
// code at 0001:0007a4cb
}

char unsigned Creature::AddEnergy( long, char unsigned )
{
// code at 0001:0007ae11
}

void Creature::SetStasis( short )
{
// code at 0001:0007aec3
}

void Creature::StartFightWith( Thing * )
{
// code at 0001:0007af56
}

void Creature::DropWhateverYouWereDragging()
{
// code at 0001:0007b076
}

void Creature::StopWhateverYouWereDoing()
{
// code at 0001:0007b29f
}

void Creature::Kill( char unsigned )
{
// code at 0001:0007b3f8
}

void Creature::ZeroCR_ORBIT( GridTile * )
{
// code at 0001:000826e4
}

void Creature::ZeroCR_KISSING( GridTile * )
{
// code at 0001:0008210c
}

void Creature::EveryCR_DIVING( GridTile * )
{
// code at 0001:00081f2c
}

void Creature::ZeroCR_DIVING( GridTile * )
{
// code at 0001:00081e6c
}

void Creature::StartPickupThing( MovingThing * )
{
// code at 0001:0007b601
}

Effect * Creature::SetDragWoodDisk( Building & )
{
// code at 0001:0007b661
}

MovingThing * Creature::SetDraggingStuff( Thing &, GridTile * )
{
// code at 0001:0007b6f0
}

void Creature::EveryCR_HUNTING( GridTile * )
{
// code at 0001:00081734
}

void Creature::EveryCR_INLOVE( GridTile * )
{
// code at 0001:00081458
}

void Creature::ZeroCR_CHOPPING( GridTile * )
{
// code at 0001:00081374
}

void Creature::EveryCR_KISSING( GridTile * )
{
// code at 0001:0008127c
}

void Creature::EveryCR_FIGHTING( GridTile * )
{
// code at 0001:0008122c
}

void Creature::EveryCR_NAPALM( GridTile * )
{
// code at 0001:000810e8
}

void Creature::ZeroCR_PICKUP( GridTile * )
{
// code at 0001:00080f80
}

void Creature::ZeroCR_FROZEN( GridTile * )
{
// code at 0001:00080f54
}

void Creature::ZeroCR_BUILDING( GridTile * )
{
// code at 0001:00080d80
}

void Creature::ZeroCR_STUNNED( GridTile * )
{
// code at 0001:00080ba4
}

void Creature::ZeroCR_FIGHTING( GridTile * )
{
// code at 0001:000804f0
}

void Creature::ZeroCR_DYING( GridTile * )
{
// code at 0001:00080484
}

void Creature::ZeroCR_STASIS( GridTile * )
{
// code at 0001:000803d8
}

void Creature::EveryCR_BONES1( GridTile * )
{
// code at 0001:0008034c
}

void Creature::EveryCR_BONES2( GridTile * )
{
// code at 0001:000802e4
}

void Creature::EveryCR_BONES3( GridTile * )
{
// code at 0001:00080274
}

void Creature::EveryCR_EATMEAT( GridTile * )
{
// code at 0001:0007fd5c
}

void Creature::EveryCR_EATBONES( GridTile * )
{
// code at 0001:0007fafc
}

void Creature::EveryCR_EATVEGI( GridTile * )
{
// code at 0001:0007f870
}

char unsigned Creature::Instincts( GridTile *, AwarenessScan & )
{
// code at 0001:0007f130
}

char unsigned Creature::CheckJobs( GridTile *, AwarenessScan & )
{
// code at 0001:0007efe8
}

void Creature::EveryCR_RESTING( GridTile * )
{
// code at 0001:0007edbc
}

void Creature::ZeroCR_RESTING( GridTile * )
{
// code at 0001:0007eac0
}

void Creature::HandleSpecialsForHunting( Thing *, long )
{
// code at 0001:0007b8eb
}

char unsigned Creature::IsInRangeOfShepherd( HerdMode, HerdMode, PlSpec * * )
{
// code at 0001:0007bb49
}

Building * Creature::ChooseNewDragToBuilding( TheBase &, Building *, Building * )
{
// code at 0001:0007bc3b
}

char unsigned Creature::ZeroJOB_WORK( GridTile *, AwarenessScan & )
{
// code at 0001:0007de54
}

char unsigned Creature::ZeroJOB_BUILD( GridTile *, AwarenessScan & )
{
// code at 0001:0007db04
}

char unsigned Creature::SetWorkingOn( Thing * )
{
// code at 0001:0007bd78
}

void Creature::StartAMove( XY )
{
// code at 0001:0007c1a5
}

void Creature::SetPlayerMoveTo( XY )
{
// code at 0001:0007c1e2
}

char unsigned Creature::UpdateCriticalStuff( GridTile * )
{
// code at 0001:0007c2df
}

void Creature::AssignAnim()
{
// code at 0001:0007c577
}

void Creature::UpdateGrowth()
{
// code at 0001:0007d9cc
}

void Creature::AnimUpdate()
{
// code at 0001:0007ccf0
}

void Creature::EndUpdateCheck()
{
// code at 0001:0007cd50
}

char unsigned Creature::Update()
{
// code at 0001:0007cf08
}

void Creature::UpdateAll()
{
// code at 0001:0007d34f
}

void Creature::VoidPlTarget( Thing *, char unsigned )
{
// code at 0001:0007d5ac
}

CreatureUserAction Creature::ActionOn( Thing *, char unsigned, char unsigned )
{
// code at 0001:0007d632
}

void (near * const __vftbl[])();

char signed const Creature::void UpdateFrozen( GridTile * )::.0::recessiveFreezeFactor[];

void (near * const __vftbl[])();

void (near * const __vftbl[])();

void (near * const __vftbl[])();

char unsigned Creature::operator ==( Creature * )
{
// code at 0001:0007d972
}

void (near * const __vftbl[])();


/******************************************************************************/
