/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file eventstat.hpp
 *     Header file for eventstat.cpp.
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
#ifndef BIO_EVENTSTAT_HPP_
#define BIO_EVENTSTAT_HPP_

#include "bftypes.h"

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

class EventHelp { // sizeof=150
public:
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

#endif // BIO_EVENTSTAT_HPP_
/******************************************************************************/
