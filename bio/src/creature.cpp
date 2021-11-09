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

BBOOL Gene::IsBasicInGene(CreatureBaseSpecies arg1)
{
// code at 0001:00037814
}

MyMinSprite Creature::woodDiskMMs;

MyMinSprite Creature::heartMMs;

MyMinSprite Creature::shepherdedMMs;

MyMinSprite Creature::packLeadersMMs;

MyMinSprite Creature::packMMs;

MyMinSprite Creature::hungryMMs;

MyMinSprite Creature::tiredMMs;

MyMinSprite Creature::scaredMMs;

MyMinSprite Creature::huntingMMs;

/*Creature::Creature()
{
// code at 0001:00061484
}*/

SLONG Creature::Strength()
{
// code at 0001:000844dc
}

SLONG Creature::Defense()
{
// code at 0001:000844a0
}

SLONG Creature::Speed()
{
// code at 0001:00084468
}

SLONG Creature::Health()
{
// code at 0001:00084430
}

SLONG Creature::Energy()
{
// code at 0001:000843f8
}

SLONG Creature::Childhood()
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

char unsigned Creature::IsBones()
{
// code at 0001:0005dcb0
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

char signed Creature::ResearchPercent( char signed )
{
// code at 0001:00082ba0
}

void Creature::UpdateFrozen(GridTile *arg1)
{
    static signed char const dominantFreezeFactor[] = {0}; // size undetermined
    static signed char const recessiveFreezeFactor[] = {0}; // size undetermined
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

Creature * Creature::Create(UBYTE arg1, CreatureSpecies arg2, XY cor3, UBYTE arg4, Creature *arg5)
{
// code at 0001:000791d6
}

void Creature::InitArray()
{
// code at 0001:0007959d
}

void Creature::Read(SLONG &arg1)
{
// code at 0001:00079624
}

void Creature::Write(SLONG &arg1)
{
// code at 0001:00079683
}

SLONG Creature::ReadBuffer(Creature **crtr, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:000796c4
}

SLONG Creature::SpitCost()
{
// code at 0001:00082958
}

SLONG Creature::WriteBuffer(Creature **crtr, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00079743
}

short Creature::MaxMoveSpeed()
{
// code at 0001:000797c2
}

void Creature::SetResting(SLONG arg1, GridTile *arg2)
{
// code at 0001:000797ff
}

BBOOL Creature::BreatheFire(::Thing *tng1)
{
// code at 0001:00079883
}

BBOOL Creature::SpitAt(::Thing *tng1, EffectType arg2)
{
// code at 0001:00079970
}

SLONG Creature::SquareTrueRangeToWhereGoingTo()
{
// code at 0001:00079b35
}

void Creature::VectorToWhereGoingTo(Vector &vec1)
{
// code at 0001:00079c94
}

BBOOL Creature::NeedToAvoid(GridTile *arg1)
{
// code at 0001:00079e28
}

void Creature::NewGridUpdate(GridTile *arg1)
{
// code at 0001:00079fd7
}

void Creature::SetSpeedHandler(Normal &nrm1, SWORD arg2)
{
// code at 0001:0007a161
}

BBOOL Creature::SetHunting(::Thing *tng1, BBOOL arg2)
{
// code at 0001:0007a29b
}

void Creature::ShatterFrozen()
{
// code at 0001:0007a3e7
}

BBOOL Creature::Damage(SLONG arg1, ::Thing *tng2)
{
// code at 0001:0007a4cb
}

BBOOL Creature::AddEnergy(SLONG arg1, UBYTE arg2)
{
// code at 0001:0007ae11
}

void Creature::SetStasis(SWORD arg1)
{
// code at 0001:0007aec3
}

void Creature::StartFightWith(::Thing *arg1)
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

void Creature::Kill(BBOOL arg1)
{
// code at 0001:0007b3f8
}

void Creature::ZeroCR_ORBIT(GridTile *arg1)
{
// code at 0001:000826e4
}

void Creature::ZeroCR_KISSING(GridTile *arg1)
{
// code at 0001:0008210c
}

void Creature::EveryCR_DIVING(GridTile *arg1)
{
// code at 0001:00081f2c
}

void Creature::ZeroCR_DIVING(GridTile *arg1)
{
// code at 0001:00081e6c
}

void Creature::StartPickupThing(::MovingThing *tng1)
{
// code at 0001:0007b601
}

Effect * Creature::SetDragWoodDisk(Building &bldg)
{
// code at 0001:0007b661
}

::MovingThing * Creature::SetDraggingStuff(::Thing &tng1, GridTile *arg2)
{
// code at 0001:0007b6f0
}

void Creature::EveryCR_HUNTING(GridTile *arg1)
{
// code at 0001:00081734
}

void Creature::EveryCR_INLOVE(GridTile *arg1)
{
// code at 0001:00081458
}

void Creature::ZeroCR_CHOPPING(GridTile *arg1)
{
// code at 0001:00081374
}

void Creature::EveryCR_KISSING(GridTile *arg1)
{
// code at 0001:0008127c
}

void Creature::EveryCR_FIGHTING(GridTile *arg1)
{
// code at 0001:0008122c
}

void Creature::EveryCR_NAPALM(GridTile *arg1)
{
// code at 0001:000810e8
}

void Creature::ZeroCR_PICKUP(GridTile *arg1)
{
// code at 0001:00080f80
}

void Creature::ZeroCR_FROZEN(GridTile *arg1)
{
// code at 0001:00080f54
}

void Creature::ZeroCR_BUILDING(GridTile *arg1)
{
// code at 0001:00080d80
}

void Creature::ZeroCR_STUNNED(GridTile *arg1)
{
// code at 0001:00080ba4
}

void Creature::ZeroCR_FIGHTING(GridTile *arg1)
{
// code at 0001:000804f0
}

void Creature::ZeroCR_DYING(GridTile *arg1)
{
// code at 0001:00080484
}

void Creature::ZeroCR_STASIS(GridTile *arg1)
{
// code at 0001:000803d8
}

void Creature::EveryCR_BONES1(GridTile *arg1)
{
// code at 0001:0008034c
}

void Creature::EveryCR_BONES2(GridTile *arg1)
{
// code at 0001:000802e4
}

void Creature::EveryCR_BONES3(GridTile *arg1)
{
// code at 0001:00080274
}

void Creature::EveryCR_EATMEAT(GridTile *arg1)
{
// code at 0001:0007fd5c
}

void Creature::EveryCR_EATBONES(GridTile *arg1)
{
// code at 0001:0007fafc
}

void Creature::EveryCR_EATVEGI(GridTile *arg1)
{
// code at 0001:0007f870
}

BBOOL Creature::Instincts(GridTile *arg1, AwarenessScan &scan)
{
// code at 0001:0007f130
}

BBOOL Creature::CheckJobs(GridTile *arg1, AwarenessScan &scan)
{
// code at 0001:0007efe8
}

void Creature::EveryCR_RESTING(GridTile *arg1)
{
// code at 0001:0007edbc
}

void Creature::ZeroCR_RESTING(GridTile *arg1)
{
// code at 0001:0007eac0
}

void Creature::HandleSpecialsForHunting(::Thing *tng1, SLONG arg2)
{
// code at 0001:0007b8eb
}

BBOOL Creature::IsInRangeOfShepherd(HerdMode arg1, HerdMode arg2, PlSpec **arg3)
{
// code at 0001:0007bb49
}

Building * Creature::ChooseNewDragToBuilding(TheBase &base, Building *arg2, Building *arg3)
{
// code at 0001:0007bc3b
}

BBOOL Creature::ZeroJOB_WORK(GridTile *arg1, AwarenessScan &arg2)
{
// code at 0001:0007de54
}

BBOOL Creature::ZeroJOB_BUILD(GridTile *arg1, AwarenessScan &arg2)
{
// code at 0001:0007db04
}

BBOOL Creature::SetWorkingOn(::Thing *tng1)
{
// code at 0001:0007bd78
}

void Creature::StartAMove(XY cor1)
{
// code at 0001:0007c1a5
}

void Creature::SetPlayerMoveTo(XY cor1)
{
// code at 0001:0007c1e2
}

char unsigned Creature::UpdateCriticalStuff(GridTile *arg1)
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

void Creature::VoidPlTarget(::Thing *tng1, BBOOL arg2)
{
// code at 0001:0007d5ac
}

CreatureUserAction Creature::ActionOn(::Thing *tng1, BBOOL arg2, BBOOL arg3)
{
// code at 0001:0007d632
}

short Creature::IsStasisForHowLong()
{
// code at 0001:000407ec
}

BBOOL Creature::operator ==(Creature *crtr1)
{
// code at 0001:0007d972
}

void Creature::SetMemory( XY )
{
// code at 0001:000377c8
}

BBOOL Creature::IsHungry()
{
// code at 0001:00037788
}

BBOOL Creature::IsScrapping()
{
// code at 0001:0003773c
}

BBOOL Creature::CanChopTrees(::Gene const &gene)
{
// code at 0001:000376ec
}

void Creature::SetTurf( XY )
{
// code at 0001:000376c0
}

BBOOL Creature::CanArmor()
{
// code at 0001:000494e8
}

BBOOL Creature::IsSpecial()
{
// code at 0001:0003676c
}

BBOOL Creature::IsFrozen()
{
// code at 0001:000261d4
}

BBOOL Creature::CanGetOrders()
{
// code at 0001:00026178
}

void Creature::ClearPlayerActive()
{
// code at 0001:00026150
}

SLONG Creature::ViewScale8()
{
// code at 0001:000260d0
}

SLONG Creature::Lifespan()
{
// code at 0001:0001dcbc
}

BBOOL Creature::IsPlayerActive()
{
// code at 0001:0001dc84
}

BBOOL Creature::IsTurfSet()
{
// code at 0001:0001dc44
}

UWORD Creature::TurfRange()
{
// code at 0001:0001dbe8
}

UBYTE Creature::GetYesPitch()
{
// code at 0001:0001dbac
}

SLONG Creature::QualityXlate(SBYTE arg1, SLONG arg2)
{
// code at 0001:0001ce54
}

ASpecies & Creature::Species()
{
// code at 0001:0001ce20
}

Gene & Creature::Gene()
{
// code at 0001:0001cdf0
}

char * Creature::GetName()
{
// code at 0001:0001cdc0
}

SampleID Creature::GetYesSample()
{
// code at 0001:0001cd88
}

void Creature::SoundYesSample()
{
// code at 0001:0001cd28
}

void Creature::SetPlayerActive( CreatureUserAction )
{
// code at 0001:00052bbc
}

void Creature::Free()
{
// code at 0001:00040410
}

void Creature::Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &vec6)
{
// code at 0001:0006195c
}

char unsigned Creature::IsDead()
{
// code at 0001:00061924
}

char unsigned Creature::IsStasis()
{
// code at 0001:000618e8
}

char unsigned Creature::IsDoneMovingToTgt()
{
// code at 0001:000618a8
}

char unsigned Creature::IsStuck()
{
// code at 0001:00061868
}

void Creature::Undiscover()
{
// code at 0001:00061830
}

char unsigned Creature::IsDraggingStuff()
{
// code at 0001:00077fbc
}

void Creature::ClearDraggingStuff()
{
// code at 0001:00077f90
}

SLONG Creature::UseEnergy(SLONG arg1)
{
// code at 0001:00077b9c
}

/*char unsigned Creature::__defarg()
{
// code at 0001:000377f4
}*/

/*@ * Creature::__defarg()
{
// code at 0001:0004082c
}*/

/*char unsigned Creature::__defarg()
{
// code at 0001:0008455c
}*/

/*HerdMode Creature::__defarg()
{
// code at 0001:0008453c
}*/

/*PlSpec * * Creature::__defarg()
{
// code at 0001:00084518
}*/

/*char unsigned * __defarg()
{
// code at 0001:0008415c
}*/

/*char unsigned * __defarg()
{
// code at 0001:00084138
}*/

/******************************************************************************/
