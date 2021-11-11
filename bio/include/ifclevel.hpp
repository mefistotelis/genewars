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

class IFCLevel : public IFCBase { // sizeof=203
public:
    //IFCLevel(IFCLevel *arg1);
    void DrawBriefing();
    void DrawPlanet();
    void DrawLockOn();
    void DrawGizmoBox();
    void DrawSystem();
    void DrawLines();
    void DrawCornerCircles();
    void DrawVLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawHLine(SLONG arg1, SLONG arg2, SLONG arg3, UBYTE arg4);
    void DrawRefreshedBox(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    void calculate_view_to_target_vector_deviation(cPoint *arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void local_rotate_on_arbitrary_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, SLONG arg7);
    UBYTE auto_pilot_MK2();
    void UpdateSystem();
    SLONG align_vertical(ULONG arg1);
    void init_view_axes();
    void normalise_axes(cPoint *arg1, cPoint *arg2);
    void global_z_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void global_y_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void global_x_rotate_points(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, ULONG arg5);
    void local_rotate_on_axis(cPoint *arg1, cPoint *arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    void move_view_position(cPoint *arg1, cPoint *arg2, cPoint *arg3, SLONG *arg4);
    void slow_down(SLONG *arg1);
    void speed_up(SLONG *arg1);
    void damping();
    void keys();
    void draw_points(ULONG arg1, ScreenPoint *arg2);
    void calculate_clipping_window(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    void calulate_2d_x_and_y_of_points(ULONG arg1, cPoint *arg2, ScreenPoint *arg3);
    void rotate_universe_around_viewpos(cPoint *arg1, cPoint *arg2);
    void init_start_points();
    void DrawCrossHair();
    UBYTE FindPlanet(UWORD arg1, UWORD arg2);
    void MakeOrbitTrack(UWORD arg1);
    int SortCheck(void const *arg1, void const *arg2);
    void SortStars();
    UBYTE IsAtSystemView();
    void DrawGalaxy();
    void MoveViewer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    //IFCLevel();
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    BBOOL startLevel;
    SLONG planetNameTraverse;
    UBYTE systemGizmoFrames[5];
    UBYTE numBoxGizmosOn;
    UBYTE numSystemGizmosOn;
    UBYTE autopilotStatus;
    LevelDrawPhase phase;
    TurnPrintInfo nameTpi;
    TurnPrintInfo tpi;
    MyAnimBank *anb; // offset=4
    MyGadget *gad; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    IFCBase *previousIFC; // offset=20
    UBYTE *planetBlocks; // offset=24
    cPoint target; // offset=28
    char *briefingBuffer; // offset=29
    Info info; // offset=32
    SpaceBody *spaceBodies; // offset=33
    UWORD *drawOrder; // offset=36
    cPoint targetpos; // offset=40
    UWORD currentPlanet; // offset=41
    UWORD pointsThisTurn; // offset=42
    UWORD galaxyAngle; // offset=44
    UBYTE viewerMode; // offset=46
    XY crossHair; // offset=47
    UBYTE cMode; // offset=51
    cPoint targetvelocity; // offset=52
    MyMinSprite bogusMMs[8]; // offset=53
    cPoint *startpoints; // offset=64
    cPoint *workingpoints; // offset=68
    ScreenPoint *outputpoints; // offset=72
    Viewer viewer[7]; // offset=76
    AutoPilot autopilot; // offset=88
    LevelHeader currentLevel; // offset=97
    ULONG qstars; // offset=121
    SLONG mag; // offset=125
    SLONG scaledmag; // offset=129
    SLONG xyaspectratio; // offset=133
    SLONG vrx; // offset=137
    SLONG vry; // offset=141
    SLONG vrz; // offset=145
    cPoint orbitOffset; // offset=149
    Axes workingaxes[0]; // offset=180
    Axes referenceaxes; // offset=216
    Axes universeaxes; // offset=252
};


#endif // BIO_IFCLEVEL_HPP_
/******************************************************************************/
