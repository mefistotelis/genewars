/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file effect.hpp
 *     Header file for effect.cpp.
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
#ifndef BIO_EFFECT_HPP_
#define BIO_EFFECT_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "sndsample.hpp"
#include "effectstat.hpp"
#include "mvthing.hpp"

class BioGame;
class Specialist;
class Vector;
class EtherealZone;

class Effect : public MovingThing { // sizeof=81
public:
    EffectType type; // offset=69
    SBYTE state; // offset=70
    ThingIDX thing; // offset=71
    SWORD pixCount; // offset=74
    UBYTE power; // offset=76
    MyAnimBank *anb; // offset=77
    static MyMinSprite ezStarMMs;
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual void Read(SLONG &arg1);
    virtual void Write(SLONG &arg1);
    virtual void Resync();
    virtual UBYTE Update();
    virtual BBOOL IsDead();
    virtual void DrawOnMap(SWORD arg1, SWORD arg2);
    virtual BBOOL IsASplasher();
    virtual BBOOL IsMovable();
    virtual BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    BBOOL IsChunkyDeath();
    void Free();
    BBOOL IsPackSpecValid();
    void PackSpec(Specialist &spec1);
    void UnpackSpec(Specialist &spec1);
    EtherealZone & GetEZone();
    Plant * StripDragTree(GridTile *gtile1);
    Effect * Create(EffectType arg1, XY cor2, SLONG arg3, Vector const &vec4, UWORD arg5, UBYTE arg6, SBYTE arg7, Thing *tng8);
    void InitArray();
    void UpdateAll();
    SLONG ReadBuffer(Effect **eff1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG WriteBuffer(Effect **eff1, SLONG arg2, SLONG arg3, BioGame &game);
    void KillSoundOffTag(XY cor1, SampleID arg2, BBOOL arg3);
    BBOOL operator ==(Effect *arg1);
private:
    UBYTE CreateNewEffectFromOld(EffectStats const &effsta);
    UBYTE MakeFire(GridTile *gtile1, SLONG arg2);
    void DrawZoneMarker(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
public:
    //Effect(); -- generate default no-args constructor
    //Effect(Effect &eff1); -- generate default copy constructor
    Effect & operator =(Effect &eff1);
};

#endif // BIO_EFFECT_HPP_
/******************************************************************************/
