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
    ThingIDX prev; // offset=0
    ThingIDX next; // offset=3
    ThingType ttype; // offset=6
    XY loc; // offset=7
  union {
    XY tgt; // offset=11
    SLONG tgtAlt; // offset=11
  };
    SWORD idx; // offset=15
    SLONG baseAlt; // offset=17
    UWORD tflags; // offset=21
    UBYTE shade; // offset=23
    UBYTE player; // offset=24
    UBYTE sprIndex; // offset=25
    MyMinSprite mMs; // offset=26
    MySprite *spr; // offset=31
//internal:
    //void (**__vfptr)(); // offset=35
public:
    BBOOL Valid();
    void Invalidate();
    BBOOL IsNew();
    Player & Player();
    TheBase & Base();
    BBOOL TToggle();
    BBOOL TToggle4();
    ULONG SquareTrueRangeTo(Thing *tng1);
    ULONG TrueRangeTo(Thing *tng1);
    ULONG SquareRangeTo(Thing *tng1);
    ULONG RangeTo(Thing *tng1);
    SWORD DirTo(Thing *tng1);
    BBOOL IsIndy();
    BBOOL IsSamePlayer(Thing *tng1);
    BBOOL IsEnemy(Thing *tng1);
    UBYTE BaseColor();
    BBOOL IsDitheredColor();
    virtual SLONG Altitude();
    virtual SLONG AltAboveGround();
    virtual BBOOL IsMovable();
    virtual BBOOL IsMovingThing();
    virtual BBOOL IsFlying();
    virtual void Draw(XY cor1);
    virtual void Draw(SWORD arg1, SWORD arg2);
    virtual MyFrame * GetFrame();
    virtual BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    virtual void DrawOnMap(SWORD arg1, SWORD arg2);
    virtual void Init(ThingType arg1, XY cor2, UBYTE arg3, SWORD arg4);
    virtual void Discover();
    virtual void Undiscover();
    virtual BBOOL Damage(SLONG arg1, Thing *tng2);
    virtual void StartFightWith(Thing *tng1);
    virtual void Read(SLONG &arg1);
    virtual void Write(SLONG &arg1);
    virtual void Sound(SampleID arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, ULONG arg5);
    virtual void StopSound(SampleID arg1);
    virtual void FadeSound(SampleID arg1, SWORD arg2, UBYTE arg3);
    virtual void FadeOutSound(SampleID arg1, UBYTE arg2);
    virtual BBOOL IsSoundPlaying(SampleID arg1);
    virtual BBOOL IsStasis();
    virtual BBOOL IsIgnoreClutter();
    virtual void Resync() = 0;
    virtual UBYTE Update() = 0;
    virtual BBOOL IsDead() = 0;
    virtual BBOOL IsStaticallyDrawn() = 0;
    BBOOL operator ==(Thing *tng1);
    UBYTE CreateEffectExplosion(EffectType arg1, UBYTE arg2, SLONG arg3, SLONG arg4, UBYTE arg5);
    Vector PredictTargetShot(Thing *tng1, SLONG arg2, SLONG arg3, ULONG arg4);
    //Thing(); -- generate default no-args constructor
    //Thing(Thing const &arg1); -- generate default copy constructor
    Thing & operator =(Thing &arg1);
};

class StaticThing : public Thing { // sizeof=43
protected:
    MyFrame *oldFrame; // offset=39
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual void DrawOnMap(SWORD arg1, SWORD arg2);
    virtual void Resync();
    virtual void DrawNoDraw(SWORD arg1, SWORD arg2);
    virtual BBOOL IsStaticallyDrawn();
    StaticThing();
    //StaticThing(StaticThing const &tng1); -- generate default copy constructor
    StaticThing & operator =(StaticThing &tng1);
};

#endif // BIO_THING_HPP_
/******************************************************************************/
