/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file event.cpp
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
#include "event.hpp"

Event::Event()
    : Thing()
{
  // code at 0001:000614f4
  // done
}

BBOOL Event::operator ==(Event *arg1)
{
// code at 0001:0004882d
}

BBOOL Event::CreateSphereRing(Point *arg1, BBOOL *arg2, UBYTE arg3)
{
// code at 0001:00047a78
}

Event * Event::Create(UBYTE arg1, XY arg2, UBYTE arg3, Thing *arg4)
{
// code at 0001:00047bce
}

void Event::InitArray()
{
// code at 0001:00047eb6
}

void Event::Resync()
{
// code at 0001:00047f02
}

void Event::Read(SLONG &arg1)
{
// code at 0001:00047f1c
}

void Event::Write(SLONG &arg1)
{
// code at 0001:00047f7b
}

SLONG Event::ReadBuffer(Event **arg1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:00047fbc
}

SLONG Event::WriteBuffer(Event **arg1, SLONG arg2, SLONG arg3, BioGame &game)
{
// code at 0001:0004803b
}

UBYTE Event::Update()
{
// code at 0001:000480ba
}

void Event::UpdateAll()
{
// code at 0001:000486a7
}

void Event::Free()
{
// code at 0001:000490e0
}

BBOOL Event::IsStaticallyDrawn()
{
// code at 0001:000617e8
}

BBOOL Event::IsDead()
{
// code at 0001:000617c4
}

/*Thing * Event::__defarg()
{
// code at 0001:00040650
}*/



/******************************************************************************/
