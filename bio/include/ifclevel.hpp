/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifclevel.hpp
 *     Header file for ifclevel.cpp.
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
#ifndef BIO_IFCLEVEL_HPP_
#define BIO_IFCLEVEL_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"
#include "printinfo.hpp"
#include "iface.hpp"
#include "planet.hpp"
#include "level.hpp"

class MyGadget;

class IFCLevel : public IFCBase { // sizeof=2507
    MyAnimBank *anb; // offset=4
    MyGadget *gad; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    IFCBase *previousIFC; // offset=20
    UBYTE *planetBlocks; // offset=24
    char *briefingBuffer; // offset=28
    SpaceBody *spaceBodies; // offset=32
    UWORD *drawOrder; // offset=36
    UWORD currentPlanet; // offset=40
    UWORD pointsThisTurn; // offset=42
    UWORD galaxyAngle; // offset=44
    UBYTE viewerMode; // offset=46
    XY crossHair; // offset=47
    UBYTE cMode; // offset=51
    MyMinSprite bogusMMs[9]; // offset=52
    LevelHeader currentLevel; // offset=97
    cPoint target; // offset=796
    cPoint targetpos; // offset=808
    cPoint targetvelocity; // offset=820
    cPoint *startpoints; // offset=832
    cPoint *workingpoints; // offset=836
    ScreenPoint *outputpoints; // offset=840
    Viewer viewer[8]; // offset=844
    Axes workingaxes[1]; // offset=2228
    Axes referenceaxes; // offset=2264
    Axes universeaxes; // offset=2300
    Info info; // offset=2336
    AutoPilot autopilot; // offset=2392
    ULONG qstars; // offset=2425
    SLONG mag; // offset=2429
    SLONG scaledmag; // offset=2433
    SLONG xyaspectratio; // offset=2437
    SLONG vrx; // offset=2441
    SLONG vry; // offset=2445
    SLONG vrz; // offset=2449
    cPoint orbitOffset; // offset=2453
    TurnPrintInfo tpi;
    TurnPrintInfo nameTpi;
    LevelDrawPhase phase; // offset=2473
    UBYTE autopilotStatus; // offset=2474
    UBYTE numSystemGizmosOn; // offset=2475
    UBYTE numBoxGizmosOn; // offset=2476
    UBYTE systemGizmoFrames[6]; // offset=2477
    SLONG planetNameTraverse; // offset=2483
    BBOOL startLevel; // offset=2487
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=2488
public:
    //IFCLevel(); -- generate default no-args constructor
    void PlugIn();
    void PullOut();
    void Draw();
    void Update();
    void MoveViewer();
    void DrawGalaxy();
    UBYTE IsAtSystemView();
    void SortStars();
    int SortCheck(const void *arg1, const void *arg2);
    void MakeOrbitTrack(UWORD arg1);
    UBYTE FindPlanet(UWORD arg1, UWORD arg2);
    void DrawCrossHair();
private:
    void init_start_points();
    void rotate_universe_around_viewpos(cPoint *arg1, cPoint *arg2);
    void calulate_2d_x_and_y_of_points(ULONG arg1, cPoint *arg2, ScreenPoint *arg3);
    void calculate_clipping_window(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void draw_points(ULONG arg1, ScreenPoint *arg2);
    void keys();
    void damping();
    void speed_up(SLONG *arg1);
    void slow_down(SLONG *arg1);
    void move_view_position(cPoint *arg1, cPoint *arg2, cPoint *arg3, SLONG *arg4);
    void local_rotate_on_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    void global_x_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void global_y_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void global_z_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void normalise_axes(cPoint *arg1, cPoint *arg2);
    void init_view_axes();
    SLONG align_vertical(ULONG arg1);
    void UpdateSystem();
    UBYTE auto_pilot_MK2();
    void local_rotate_on_arbitrary_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, SLONG arg7);
    void calculate_view_to_target_vector_deviation(cPoint *arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void DrawRefreshedBox(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    void DrawHLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawVLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawCornerCircles();
    void DrawLines();
    void DrawSystem();
    void DrawGizmoBox();
    void DrawLockOn();
    void DrawPlanet();
    void DrawBriefing();
//public:
    //IFCLevel(IFCLevel &arg1); -- generate default copy constructor
};

#endif // BIO_IFCLEVEL_HPP_
/******************************************************************************/
