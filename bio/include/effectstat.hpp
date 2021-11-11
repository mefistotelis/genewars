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

enum EventHelpType { // type=int8_t
    EVH_NULL = 0,
    EVH_EXTRACTOR,
    EVH_FIRST_STAGE_DISTRIBUTOR,
    EVH_SECOND_STAGE_DISTRIBUTOR,
    EVH_THIRD_STAGE_DISTRIBUTOR,
    EVH_PHOTON_PROCESSOR, // 5
    EVH_SPECTRAL_SPONGE,
    EVH_EM_TRAP,
    EVH_LANDING_PAD,
    EVH_ROTATOR,
    EVH_WIND_PROCESSOR, // 10
    EVH_ATMOSPHERIC_GENERATOR,
    EVH_PULPER,
    EVH_PULVERISER,
    EVH_MASS_PULVERISER,
    EVH_RECYCLING_PLANT, // 15
    EVH_RECYCLOTRON,
    EVH_GOOP_FACTORY,
    EVH_TECH_FACILITY,
    EVH_FUSION_BATTERY,
    EVH_FUSION_GENERATOR, // 20
    EVH_SHIELD_GENERATOR,
    EVH_SANCTUARY_GENERATOR,
    EVH_DENIAL_DOME,
    EVH_ETHEREAL_DETECTOR,
    EVH_ETHEREAL_SCOPE, // 25
    EVH_ETHEREAL_OBSERVATORY,
    EVH_STUNNER_TURRET,
    EVH_ZAP_TURRET,
    EVH_BLASTER_TURRET,
    EVH_GOOP_VAT, // 30
    EVH_GENE_POD,
    EVH_GENE_MACHINE,
    EVH_GENE_LAB,
    EVH_ARCHITECT,
    EVH_FARMER, // 35
    EVH_SCIENTIST,
    EVH_SHEPHERD,
    EVH_DINO,
    EVH_CRAB,
    EVH_FROG, // 40
    EVH_BIRD,
    EVH_MULE,
    EVH_HYBRID_RESTRICTION,
    EVH_PLANTS,
    EVH_ESCOPE = 56,
    EVH_MONOLITH,
    EVH_SPECIALISTMONO,
    EVH_CREATUREMONO,
    EVH_DRAG, // 60
    EVH_HELP,
    EVH_POWERGRAPH,
    EVH_GOOPMETER,
    EVH_SPECPANEL,
    EVH_BUILDINGPANEL, // 65
    EVH_CREATUREPANEL,
    EVH_HERDEAT,
    EVH_HERDFIGHT,
    EVH_HERDBREED,
    EVH_YOUAREBAD, // 70
    EVH_ACTIVATE,
    EVH_UPGRADE,
    EVH_BADOMETER,
    EVH_SCOREORAMA,
    EVH_SELECTTEAM, // 75
    EVH_BIOMASSZONE,
    EVH_MULEZONE,
    EVH_CRABZONE,
    EVH_DINOZONE,
    EVH_FROGZONE, // 80
    EVH_BIRDZONE,
    EVH_TEMPLEZONE,
    EVH_HYBRID,
    MAX_EVH,
};

enum EventType { // type=int8_t
    EV_DROP_LAB = 0,
    EV_ETHEREAL,
    EV_METEOR_STORM,
    EV_BIG_BANG,
    EV_SHIELDARCUP,
    EV_SHIELDARCDOWN, // 5
    EV_ETHEREAL_SCOUT,
    EV_LASER_BLAST,
    EV_SMUGGLER,
};

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

class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

#endif // BIO_EFFECTSTAT_HPP_
/******************************************************************************/
