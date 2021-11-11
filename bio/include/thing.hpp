/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file thing.hpp
 *     Header file for thing.cpp.
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
#ifndef BIO_THING_HPP_
#define BIO_THING_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "xy.hpp"
#include "cvector.hpp"
#include "thingidx.hpp"
#include "effectstat.hpp"
#include "sndsample.hpp"

class MyFrame;
class TheBase;
class Player;

class Thing { // sizeof=39
public:
    Thing * operator =(Thing *arg1);
    //Thing(Thing *arg1); -- generate default copy constructor
    //Thing(); -- generate default no-arg constructor
    Vector PredictTargetShot(Thing *arg1, SLONG arg2, SLONG arg3, ULONG arg4);
    UBYTE CreateEffectExplosion(EffectType arg1, UBYTE arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    BBOOL operator ==(Thing *arg1);
    BBOOL IsStaticallyDrawn();
    BBOOL IsDead();
    UBYTE Update();
    void Resync();
    BBOOL IsIgnoreClutter();
    BBOOL IsStasis();
    BBOOL IsSoundPlaying(SampleID arg1);
    void FadeOutSound(SampleID arg1, UBYTE arg2);
    void FadeSound(SampleID arg1, SWORD arg2, UBYTE arg3);
    void StopSound(SampleID arg1);
    void Sound(SampleID arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, ULONG arg5);
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    void StartFightWith(Thing *arg1);
    BBOOL Damage(SLONG arg1, Thing *arg2);
    void Undiscover();
    void Discover();
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    MyFrame * GetFrame();
    void Draw(SWORD arg1, SWORD arg2);
    void Draw(XY arg1);
    BBOOL IsFlying();
    BBOOL IsMovingThing();
    BBOOL IsMovable();
    SLONG AltAboveGround();
    SLONG Altitude();
    BBOOL IsDitheredColor();
    UBYTE BaseColor();
    BBOOL IsEnemy(Thing *tng1);
    BBOOL IsSamePlayer(Thing *tng1);
    BBOOL IsIndy();
    SWORD DirTo(Thing *tng1);
    ULONG RangeTo(Thing *tng1);
    ULONG SquareRangeTo(Thing *tng1);
    ULONG TrueRangeTo(Thing *tng1);
    ULONG SquareTrueRangeTo(Thing *tng1);
    BBOOL TToggle4();
    BBOOL TToggle();
    TheBase & Base();
    Player & Player();
    BBOOL IsNew();
    void Invalidate();
    BBOOL Valid();
    /* void (**__vfptr)(); */
    ThingIDX prev; // offset=0
    ThingIDX next; // offset=3
    ThingType ttype; // offset=6
    XY loc; // offset=7
    SLONG tgtAlt; // offset=11
    XY tgt; // offset=12
    SWORD idx; // offset=15
    SLONG baseAlt; // offset=17
    UWORD tflags; // offset=21
    UBYTE shade; // offset=23
    UBYTE player; // offset=24
    UBYTE sprIndex; // offset=25
    MyMinSprite mMs; // offset=26
    MySprite *spr; // offset=31
};

class StaticThing : public Thing { // sizeof=43
public:
    class StaticThing * operator=(class StaticThing *tng1);
    //StaticThing(StaticThing *tng1); -- generate default copy constructor
    //StaticThing(); -- generate default no-args constructor
    BBOOL IsStaticallyDrawn();
    void DrawNoDraw(SWORD arg1, SWORD arg2);
    void Resync();
    void DrawOnMap(SWORD arg1, SWORD arg2);
    /* void (**__vfptr)(); */
    MyFrame *oldFrame;
};

#endif // BIO_THING_HPP_
/******************************************************************************/
