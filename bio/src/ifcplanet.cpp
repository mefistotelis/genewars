/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifcplanet.cpp
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
#include "ifcplanet.hpp"

void TeamCircles::Init()
{
// code at 0001:0001f563
}

void TeamCircles::Update()
{
// code at 0001:0001f5c4
}

void TeamCircles::Draw()
{
// code at 0001:0001f612
}

void TeamCircles::StartStatic(UBYTE arg1, BBOOL arg2)
{
// code at 0001:0001f66c
}

void TeamCircles::StopStatic(UBYTE arg1)
{
// code at 0001:0001f7bc
}

void TeamCircles::DrawTeamCircle(UBYTE arg1)
{
// code at 0001:0001f7fd
}

void TeamCircles::SelectCircle(UBYTE arg1)
{
// code at 0001:0001fae8
}

void TeamCircles::Reset()
{
// code at 0001:0001ce98
}

IFCPlanetside::IFCPlanetside(MyGadget *gads)
    : winPad(actionPalette), creaturePad(actionPalette) // constructor params uncertain
{
// code at 0001:00020daa
}

void IFCPlanetside::SetOnOffSwitch(BBOOL arg1)
{
// code at 0001:000169c4
}

void IFCPlanetside::CyanFlicker(UBYTE arg1)
{
// code at 0001:00020f45
}

void IFCPlanetside::TgtFlagEffect(XY arg1, Thing *tng2)
{
// code at 0001:00020fdc
}

void IFCPlanetside::DisableAllCircles()
{
// code at 0001:0002107f
}

void IFCPlanetside::EnableAllCircles()
{
// code at 0001:000210b8
}

void IFCPlanetside::PlugIn()
{
// code at 0001:000210f1
}

void IFCPlanetside::PullOut()
{
// code at 0001:000214ed
}

void IFCPlanetside::ClearInterfaceReferencesTo(Thing *tng1)
{
// code at 0001:000215ec
}

void IFCPlanetside::JumpToNextBuilding()
{
// code at 0001:00021681
}

void IFCPlanetside::Update()
{
// code at 0001:00021743
}

void IFCPlanetside::DrawTgtFlag()
{
// code at 0001:0002332f
}

void IFCPlanetside::Draw()
{
// code at 0001:000233fb
}

void IFCPlanetside::DrawBadBar(UBYTE arg1)
{
// code at 0001:00025294
}

void IFCPlanetside::DrawGameMap()
{
// code at 0001:0002395f
}

void IFCPlanetside::DrawBadOMeter()
{
// code at 0001:00023da6
}

void IFCPlanetside::DrawGoopMeter()
{
// code at 0001:00023fa3
}

void IFCPlanetside::DrawAllBottomControls()
{
// code at 0001:0002410a
}

void IFCPlanetside::ResetForNewGame()
{
// code at 0001:0002416c
}

void IFCPlanetside::CircleHelp(MyGadget *gad1)
{
// code at 0001:000241c2
}

void IFCPlanetside::GeneralGadgetHelp(MyGadget *gad1)
{
// code at 0001:000242fc
}

void IFCPlanetside::BarHelp(MyGadget *gad1)
{
// code at 0001:000245ba
}

void IFCPlanetside::MapHelp(MyGadget *gad1)
{
// code at 0001:000249a5
}

void IFCPlanetside::SetBarsRefresh(UBYTE arg1)
{
// code at 0001:0001ccec
}

BBOOL IFCPlanetside::IsThingSelectedInPad(Thing *tng1)
{
// code at 0001:0004052c
}

void IFCPlanetside::CloseActivePad()
{
// code at 0001:000404dc
}


/******************************************************************************/
