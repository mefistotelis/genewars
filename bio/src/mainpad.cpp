/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file mainpad.cpp
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
#include "mainpad.hpp"

Thing *MainInterfacePad::activeThing;
MainInterfacePad *MainInterfacePad::previousPad;
BBOOL MainInterfacePad::go;
MyMinSprite MainInterfacePad::pointerMMs;
SWORD MainInterfacePad::pointerDisplacement;
MyMinSprite MainInterfacePad::userPointerMMs;
MySprite *MainInterfacePad::userPointer;
ULONG *MainInterfacePad::padBmps[3];

/*MainInterfacePad::MainInterfacePad()
{
// code at 0001:0001822c
}*/

void MainInterfacePad::ClearUserPointer()
{
// code at 0001:0001d2c8
}

void MainInterfacePad::NullUserPointer()
{
// code at 0001:0001d2a0
}

void MainInterfacePad::SetViewerClip()
{
// code at 0001:0001d26c
}

void MainInterfacePad::Init(Thing *tng1)
{
// code at 0001:000190dc
}

void MainInterfacePad::Close()
{
// code at 0001:00019170
}

BBOOL MainInterfacePad::Update(SWORD arg1)
{
// code at 0001:000191b1
}

void MainInterfacePad::SetPointerToFrame()
{
// code at 0001:0001922a
}

void MainInterfacePad::SetUserPointer(SBYTE arg1)
{
// code at 0001:0001927e
}

void MainInterfacePad::SetNormalPad()
{
// code at 0001:0001932f
}

void MainInterfacePad::LoadBitmap(PadBmp arg1)
{
// code at 0001:00019396
    static char const *panelNames[] = {
        "data/mainpanl.dat",
        "data/genepanl.dat",
        "data/lpanel.dat",
    };
}

void MainInterfacePad::DrawMainPanelBmp(ULONG *arg1)
{
// code at 0001:00019473
}

void MainInterfacePad::DrawMainPanelEdge()
{
// code at 0001:000194fb
}

void MainInterfacePad::DrawStatic(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4)
{
// code at 0001:00019546
}

void MainInterfacePad::DrawBuildingStats(Building *arg1)
{
// code at 0001:000195ed
}

void MainInterfacePad::DrawBottomPanelText(char *arg1)
{
// code at 0001:000198e6
}

void MainInterfacePad::DrawPointerOverThing()
{
// code at 0001:0001996b
}

void MainInterfacePad::FinishViewerClip()
{
// code at 0001:0001cca8
}

void MainInterfacePad::MapDraw()
{
// code at 0001:000199fc
}

void MainInterfacePad::StartStaticNoise()
{
// code at 0001:00018158
}

void MainInterfacePad::StopStaticNoise()
{
// code at 0001:000180f8
}

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:00004344
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:00004308
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:000042d0
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:0000429c
}*/

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:00004264
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:00004228
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:000041f0
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:000041bc
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00004188
}*/

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:00004150
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:00004114
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:000040dc
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:000040a8
}*/

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:00004070
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:00004034
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:00003ffc
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00003fc8
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00003f94
}*/

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:00003f5c
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:00003f20
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:00003ee8
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00003eb4
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00003e80
}*/

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:0001cc70
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:0001cc34
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:0001cbfc
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:0001cbc8
}*/

/*void MainInterfacePad::__vfthunk( Thing * )
{
// code at 0001:000180c0
}*/

/*char unsigned MainInterfacePad::__vfthunk( short )
{
// code at 0001:00018084
}*/

/*void MainInterfacePad::__vfthunk( char signed )
{
// code at 0001:0001804c
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00018018
}*/

/*void MainInterfacePad::__vfthunk()
{
// code at 0001:00017fe4
}*/


/******************************************************************************/
