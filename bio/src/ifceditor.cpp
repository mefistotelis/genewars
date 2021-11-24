/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifceditor.cpp
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
#include "ifceditor.hpp"

#include "data.hpp"

TbLoadFiles editorGfx = {"data/ifeditor.anb", (void **)&ifcEditor.anb, 0, 0, 0, 0};

IFCEditor::IFCEditor(MyGadget *arg1)
{
// code at 0001:0005e94c
}

void IFCEditor::PlugIn()
{
// code at 0001:00005c0c
}

void IFCEditor::PullOut()
{
// code at 0001:00005da7
}

void IFCEditor::Update()
{
// code at 0001:00005e26
}

void IFCEditor::Draw()
{
// code at 0001:00008105
}

void IFCEditor::DrawDropSites()
{
// code at 0001:000089d6
}

void IFCEditor::DrawLimits()
{
// code at 0001:00008b92
}

void IFCEditor::DrawKeyboardHelp()
{
// code at 0001:00008ce2
}

void IFCEditor::ReadCompPlayer(UBYTE arg1, UBYTE arg2)
{
// code at 0001:00008e75
}

void IFCEditor::RemoveStuff()
{
// code at 0001:00008f28
}

void IFCEditor::FindClosestStuff()
{
// code at 0001:00008f82
}

void IFCEditor::DrawStuff()
{
// code at 0001:00009053
}

void IFCEditor::DrawBuilding(XY arg1, UBYTE arg2, UBYTE arg3)
{
// code at 0001:00009e82
}

BBOOL IFCEditor::IsMouseOnMap()
{
// code at 0001:0000a064
}

BBOOL IFCEditor::IsCircular(UBYTE arg1)
{
// code at 0001:0000a0b0
}

int IFCEditor::TotalNumberOfSpecs()
{
// code at 0001:0000a178
}

VictoryCondition IFCEditor::FindVictoryCondition(BBOOL &arg1)
{
// code at 0001:0000a1c7
}

SpecialistClass IFCEditor::FindSpecialistClass(BBOOL &arg1)
{
// code at 0001:0000a248
}

int IFCEditor::FindSpecFunctionNumber(BBOOL &arg1)
{
// code at 0001:0000a2cb
}

void IFCEditor::VictoryHelp(MyGadget *arg1)
{
// code at 0001:0000a34e
}

void IFCEditor::SpecialistTypeHelp(MyGadget *arg1)
{
// code at 0001:0000a3ad
}

void IFCEditor::SpecialistFuncHelp(MyGadget *arg1)
{
// code at 0001:0000a40c
}

void IFCEditor::SaveLevel()
{
// code at 0001:0000a486
}

BBOOL IFCEditor::SaveMap()
{
// code at 0001:0000a6d4
}

BBOOL IFCEditor::LoadMap()
{
// code at 0001:0000a78a
}

void IFCEditor::LoadLevel()
{
// code at 0001:0000a89e
}

void IFCEditor::UpdateHeader(LevelHeader *arg1)
{
// code at 0001:0000ab06
}

void IFCEditor::GoPlanet()
{
// code at 0001:0000b5f4
}

void IFCEditor::UpdateLevel(LevelHeader *arg1)
{
// code at 0001:0000ab8b
}

void IFCEditor::TranslateAllHeaders()
{
// code at 0001:0000abda
}

void IFCEditor::PrintHeadersToFile()
{
// code at 0001:0000ac5f
}

void IFCEditor::UpdateAllLevels()
{
// code at 0001:0000afd1
}


/******************************************************************************/
