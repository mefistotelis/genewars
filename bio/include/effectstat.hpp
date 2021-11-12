/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file effectstat.hpp
 *     EffectStats struct and related enums.
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
#ifndef BIO_EFFECTSTAT_HPP_
#define BIO_EFFECTSTAT_HPP_

#include "bftypes.h"

enum EffectStatType { // type=int8_t
    ET_PLAYONCE = 0,
    ET_COLLIDE,
    ET_TIMED,
    ET_BUBBLE,
    ET_COLLIDETIMED,
    ET_INDEFINITE, // 5
    ET_PERMANENT,
};

enum EffectType { // type=uint8_t
    EF_EXPLOSION_1 = 0,
    EF_EXPLOSION_2,
    EF_EXPLOSION_3,
    EF_EXPLOSION_4,
    EF_EXPLOSION_5,
    EF_EXPLOSION_6, // 5
    EF_TURBO,
    EF_CHOP,
    EF_TIMBER,
    EF_RADIATION,
    EF_TELEPORT, // 10
    EF_LASER,
    EF_LASER_TAIL,
    EF_METEOR,
    EF_SHARD_1,
    EF_SHARD_2, // 15
    EF_SHARD_3,
    EF_FIRE,
    EF_GRENADE,
    EF_BOLT,
    EF_BOLT_BLAST, // 20
    EF_BUBBLE,
    EF_RIPPLE,
    EF_TURRET_SHOT_1,
    EF_TURRET_SHOT_2,
    EF_TURRET_SHOT_3, // 25
    EF_ETHEREAL,
    EF_DEBRIS_1,
    EF_DEBRIS_2,
    EF_DEBRIS_3,
    EF_DEBRIS_4, // 30
    EF_DEBRIS_5,
    EF_BLOOD,
    EF_SPARK,
    EF_FLAME_BREATH,
    EF_STUN, // 35
    EF_DRAGWOODDISK,
    EF_GUNSHOT1,
    EF_GUNSHOT2,
    EF_GUNSHOT3,
    EF_GUNSHOT4, // 40
    EF_STASISSHOT1,
    EF_STASISSHOT2,
    EF_STASISSHOT3,
    EF_PELLETPOOF,
    EF_POD, // 45
    EF_SMOKE,
    EF_SPARKLE,
    EF_SPLASH,
    EF_SMUGGLER,
    EF_DEMO_CHARGE, // 50
    EF_DEMO_EXPLOSION,
    EF_SPIT,
    EF_SPIT_HIT,
    EF_ETHEREAL_LEAVE,
    EF_CHUNK_1, // 55
    EF_CHUNK_2,
    EF_CHUNK_3,
    EF_CHUNK_4,
    EF_MONOLITH,
    EF_GOODSPARKLE, // 60
    EF_BADSPARKLE,
    EF_FIRE_SPIT,
    EF_NAPALM,
    EF_ZONEMARKER,
    EF_SHIELDHITARC, // 65
    EF_SHIELDFLICKER,
    EF_DRAGTREE,
    EF_FREEDRAGTREE,
    EF_DEADSPECIALIST,
    EF_SOUNDTAG, // 70
    EF_END,
    EF_LAST_SPRITE_EFFECT,
    EF_NULL = 255,
};

struct EffectStats { // sizeof=6
    EffectStatType type; // offset=0
    BBOOL gravity; // offset=1
    UBYTE priority; // offset=2
    EffectType makes; // offset=3
    BBOOL movable; // offset=4
    BBOOL splash; // offset=5
};

#endif // BIO_EFFECTSTAT_HPP_
/******************************************************************************/
