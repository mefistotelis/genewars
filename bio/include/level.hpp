/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file level.hpp
 *     Header file for level.cpp.
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
#ifndef BIO_LEVEL_HPP_
#define BIO_LEVEL_HPP_

class PlanetBody { // sizeof=14
    UBYTE size; // offset=0
    UBYTE type; // offset=1
    SLONG angle; // offset=2
    SLONG distance; // offset=6
    SLONG speed; // offset=10
};

typedef class PlanetBody PlanetBody;

typedef class Player Player;


class SoundRequest { // sizeof=23
    BBOOL Valid();
    void Invalidate();
    SampleInfo *sampleInfo; // offset=0
    Thing *thing; // offset=4
    ULONG id; // offset=8
    ULONG pitch; // offset=12
    SampleID sampleNum; // offset=16
    UBYTE volume; // offset=18
    SBYTE loop; // offset=19
    UBYTE type; // offset=20
    UBYTE pan; // offset=21
    BBOOL makeSoft; // offset=22
};

typedef class SoundRequest SoundRequest;

class SampleBufferQueue { // sizeof=94
    void Reset();
    char * GetNext(SoundRequest *arg1);
    BBOOL Add(char *arg1, SoundRequest *arg2);
    UBYTE size;
    UBYTE first;
    char names[3][63];
    SoundRequest req[3];
};

typedef class SampleBufferQueue SampleBufferQueue;

class SoundManager { // sizeof=159
    class SoundManager * SoundManager(class SoundManager *arg1);
    BBOOL CanSamplePlay(ULONG arg1, SampleID arg2, UBYTE arg3);
    UBYTE ComputePan(XY arg1);
    UBYTE ComputeVolume(XY arg1, UBYTE arg2);
    SoundRequest * GetSoundReq(Thing *arg1, SoundRequest *arg2, BBOOL arg3);
    SampleInfo * GetSampleInfo(ULONG arg1, SampleID arg2);
    void SubmitBufferedSound(char *arg1, SoundRequest *arg2);
    void SubmitSoundRequest(SoundRequest *arg1);
    void FreeRequest(SoundRequest *arg1);
    void StopSpeech();
    void StartSpeech(SoundRequest *arg1);
    void FadeOutAmbient(SoundRequest *arg1);
    void StopOldAndEstablishAmbient();
    void EstablishAmbient();
    UBYTE GetCDTrackPlaying();
    BBOOL IsCDPlaying();
    BBOOL IsNarratorSpeaking();
    UBYTE NumRequests();
    SoundRequest * GetSoundReq(Thing *arg1);
    SoundRequest * GetNextSoundReq(Thing *arg1, SoundRequest *arg2);
    SoundRequest * GetSoundReq(ULONG arg1, SampleID arg2);
    void KillAllSounds();
    void CloseAllSpeech();
    void StopCD();
    void PlayCDTrack(UBYTE arg1);
    void StopSound(UBYTE arg1, SampleID arg2);
    void RegisterFreedThing(Thing *arg1);
    void ProcessSounds();
    void Sound(UBYTE arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7, UBYTE arg8);
    void Sound(Thing *arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7);
    void Sound(UBYTE arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6, UBYTE arg7);
    void Sound(Thing *arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6);
    void ChangeAmbientVolume(UBYTE arg1);
    void SilenceAmbientSample();
    void ChangeAmbientSample(SampleID arg1);
    class SoundManager * SoundManager(XY arg1);
    SpeechFileStatus speech[17];
    UBYTE playingCDTrack;
    BBOOL narratorSpeaking;
    SBYTE samplesPlaying[93];
    SampleBufferQueue bufferQueue;
    char sampleToLoadInBuffer[63];
    UBYTE sampleBuffer[255];
    SoundRequest *bufferReq;
    UBYTE numRequests;
    UBYTE ambientSampleVolume;
    SampleID ambientSampleNum;
    SoundTag bumpTags[8];
    SoundRequest requests[8];
    XY origin;
};



typedef struct MyGadget MyGadget;

struct cPoint { // sizeof=12
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG Z; // offset=8
};

typedef struct cPoint cPoint;

struct SpaceBody { // sizeof=33
    UWORD centreRef; // offset=0
    UWORD size; // offset=2
    UBYTE type; // offset=4
    UWORD hostObject; // offset=5
    UWORD angleToSun; // offset=7
    SLONG distanceFromSun; // offset=9
    SWORD orbitSpeed; // offset=13
    SWORD zOffset; // offset=15
    UWORD rotateAngle; // offset=17
    SWORD freeSpeed; // offset=19
    cPoint moveVector; // offset=21
};

typedef struct SpaceBody SpaceBody;

class LevelHeader { // sizeof=187
    void TranslatePlanet();
    BBOOL LoadHeader(UBYTE arg1, UBYTE arg2);
    BBOOL SaveHeader(UBYTE arg1, UBYTE arg2);
    UBYTE compPlayers[2]; // offset=0
    UBYTE valid; // offset=3
    UBYTE date[11]; // offset=4
    UBYTE time[11]; // offset=16
    ULONG version; // offset=28
    Planet planet; // offset=32
    ULONG roomForMoreStuff[6]; // offset=159
};

typedef class LevelHeader LevelHeader;

struct ScreenPoint { // sizeof=20
    SLONG SX; // offset=0
    SLONG SY; // offset=4
    SLONG SIZEX; // offset=8
    SLONG SIZEY; // offset=12
    UBYTE LessThanZeroZ; // offset=16
    UBYTE OnScreen; // offset=17
    UBYTE Extra1; // offset=18
    UBYTE Extra2; // offset=19
};

typedef struct ScreenPoint ScreenPoint;

struct Axes { // sizeof=36
    cPoint vector[2]; // offset=0
};

typedef struct Axes Axes;

struct Viewer { // sizeof=173
    Axes axes[3]; // offset=0
    cPoint velocity; // offset=144
    cPoint position; // offset=156
    SLONG speed; // offset=168
    UBYTE thrust; // offset=172
};

typedef struct Viewer Viewer;

struct AutoPilot { // sizeof=33
    UBYTE flightstate; // offset=0
    ULONG currentplanet; // offset=1
    SLONG targetdistance; // offset=5
    SLONG relx; // offset=9
    SLONG rely; // offset=13
    SLONG relz; // offset=17
    SLONG retx; // offset=21
    SLONG rety; // offset=25
    SLONG retz; // offset=29
};

typedef struct AutoPilot AutoPilot;

class IFCLevel : IFCBase { // sizeof=203
    class IFCLevel * IFCLevel(class IFCLevel *arg1);
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
    int SortCheck(void *arg1, void *arg2);
    void SortStars();
    UBYTE IsAtSystemView();
    void DrawGalaxy();
    void MoveViewer();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCLevel * IFCLevel();
    void (**__vfptr)();
    unsigned int *__vbptr;
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

void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCBase::__vfthunk();
void IFCLevel::DrawRefreshedBox( long, long, long, long, char unsigned );
near IFCLevel::IFCLevel();
void IFCLevel::PlugIn();
void IFCLevel::PullOut();
void IFCLevel::DrawHLine( long, long, long, char unsigned );
void IFCLevel::DrawVLine( long, long, long, char unsigned );
void IFCLevel::DrawCornerCircles();
void IFCLevel::DrawLines();
void IFCLevel::DrawSystem();
void IFCLevel::DrawGizmoBox();
void IFCLevel::DrawLockOn();
void IFCLevel::DrawPlanet();
void IFCLevel::DrawBriefing();
void IFCLevel::Draw();
void IFCLevel::Update();
void IFCLevel::UpdateSystem();
void IFCLevel::MoveViewer();
void IFCLevel::DrawGalaxy();
char unsigned IFCLevel::IsAtSystemView();
void IFCLevel::SortStars();
int IFCLevel::SortCheck( void const *, void const * );
void IFCLevel::MakeOrbitTrack( short unsigned );
char unsigned IFCLevel::FindPlanet( short unsigned, short unsigned );
void IFCLevel::DrawCrossHair();
void IFCLevel::init_start_points();
void IFCLevel::rotate_universe_around_viewpos( cPoint *, cPoint * );
void IFCLevel::calulate_2d_x_and_y_of_points( long unsigned, cPoint *, ScreenPoint * );
void IFCLevel::draw_points( long unsigned, ScreenPoint * );
void IFCLevel::calculate_clipping_window( long, long, long, long );
void IFCLevel::keys();
void IFCLevel::damping();
void IFCLevel::speed_up( long * );
void IFCLevel::slow_down( long * );
void IFCLevel::move_view_position( cPoint *, cPoint *, cPoint *, long * );
void IFCLevel::local_rotate_on_axis( cPoint *, cPoint *, long, long, char unsigned );
void IFCLevel::global_x_rotate_points( cPoint *, cPoint *, long, long, long unsigned );
void IFCLevel::global_y_rotate_points( cPoint *, cPoint *, long, long, long unsigned );
void IFCLevel::global_z_rotate_points( cPoint *, cPoint *, long, long, long unsigned );
void IFCLevel::normalise_axes( cPoint *, cPoint * );
void IFCLevel::init_view_axes();
void IFCLevel::calculate_view_to_target_vector_deviation( cPoint *, long, long, long );
extern int unsigned const __vbtbl[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
near IFCBase::IFCBase();
void IFCLevel::local_rotate_on_arbitrary_axis( cPoint *, cPoint *, long, long, long, long, long );
char unsigned IFCLevel::auto_pilot_MK2();
long IFCLevel::align_vertical( long unsigned );
extern void (near * const __vftbl[])();

#endif // BIO_LEVEL_HPP_
/******************************************************************************/
