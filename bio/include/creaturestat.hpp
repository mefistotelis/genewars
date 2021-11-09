/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file creaturestat.hpp
 *     Creature related data types.
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
#ifndef BIO_CREATURESTAT_HPP_
#define BIO_CREATURESTAT_HPP_

enum CreatureUserAction { // type=int8_t
    CRU_NOTHING = 0,
    CRU_ATTACK,
    CRU_BURN,
    CRU_PICKUP,
    CRU_COLLECT,
    CRU_CHOP, // 5
    CRU_BUILD,
    CRU_PATROL,
    MAX_CRU,
};

enum CreatureMode { // type=int8_t
    CRM_NOTHING = 0,
    CRM_WORK,
    CRM_BUILD,
    MAX_CRMS,
};

enum CreatureSpecies { // type=int8_t
    CRS_DINO = 0,
    CRS_CRAB,
    CRS_FROG,
    CRS_BIRD,
    CRS_MULE,
    CRS_DINOCRAB, // 5
    CRS_DINOFROG,
    CRS_DINOBIRD,
    CRS_DINOMULE,
    CRS_CRABBOFROG,
    CRS_CRABBOBIRD, // 10
    CRS_CRABBOMULE,
    CRS_FROGGOBIRD,
    CRS_FROGGOMULE,
    CRS_BIRDDOMULE,
    CRS_CRABBOSAUR, // 15
    CRS_FROGGOSAUR,
    CRS_FROGGOCRAB,
    CRS_BIRDDOSAUR,
    CRS_BIRDDOCRAB,
    CRS_BIRDDOFROG, // 20
    CRS_MULEOSAUR,
    CRS_MULEOCRAB,
    CRS_MULEOFROG,
    CRS_MULEOBIRD,
    MAX_CRS, // 25
};

enum CreatureBaseSpecies { // type=int8_t
    CRB_DINO = 0,
    CRB_CRAB,
    CRB_FROG,
    CRB_BIRD,
    CRB_MULE,
    MAX_CRB, // 5
};

enum CreatureState { // type=int8_t
    CR_MOVING = 0,
    CR_HUNTING,
    CR_PICKUP,
    CR_INLOVE,
    CR_EATBONES,
    CR_EATMEAT, // 5
    CR_EATSPECIALIST,
    CR_EATVEGI,
    CR_RESTING,
    CR_NURSING,
    CR_KISSING, // 10
    CR_CHOPPING,
    CR_DRINKING,
    CR_BUILDING,
    CR_NAPALM,
    CR_FROZEN, // 15
    CR_KICKING,
    CR_DIVING,
    CR_STASIS,
    CR_ORBIT,
    CR_STUNNED, // 20
    CR_FIGHTING,
    CR_ATTACKBUILDING,
    CR_ATTACKSPECIALIST,
    CR_DYING,
    CR_BONES1, // 25
    CR_BONES2,
    CR_BONES3,
};

#endif // BIO_CREATURESTAT_HPP_
/******************************************************************************/
