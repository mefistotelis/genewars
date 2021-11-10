/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file misc.hpp
 *     Header file for misc.cpp.
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
#ifndef BIO_MISC_HPP_
#define BIO_MISC_HPP_

enum { // type=int8_t
    VIEWER_MODE_NORMAL = 0,
    VIEWER_MODE_HYPERSPACE,
    VIEWER_MODE_MOVING,
    VIEWER_MODE_CONTROL,
    VIEWER_MODE_INFO,
};

enum { // type=int8_t
    BOGUS_SYSTEM = 0,
    BOGUS_SMALLSYSTEM,
    BOGUS_ULTGT,
    BOGUS_LLTGT,
    BOGUS_SPIKES,
    BOGUS_WAVE, // 5
    BOGUS_TARGET,
    BOGUS_PLANET_BOX,
    BOGUS_BIG_GLOBE,
    MAX_BOGUS_ANIMS,
};

enum { // type=int8_t
    MIFC_OPTIONS_MUSIC_SLIDER = 0,
    MIFC_OPTIONS_SFX_SLIDER,
    MIFC_OPTIONS_MUSIC_TOGGLE,
    MIFC_OPTIONS_SFX_TOGGLE,
    MIFC_OPTIONS_LOAD,
    MIFC_OPTIONS_SAVE, // 5
    MIFC_OPTIONS_SLOTS,
    MIFC_OPTIONS_QUIT_TO_DOS,
    MIFC_OPTIONS_ABANDON,
    MIFC_OPTIONS_RESUME,
};

enum { // type=int8_t
    CEDIT_NAME = 0,
    CEDIT_AGGRESSIVE_UP,
    CEDIT_AGGRESSIVE_DOWN,
    CEDIT_RESOLVE_UP,
    CEDIT_RESOLVE_DOWN,
    CEDIT_CRITICAL_UP, // 5
    CEDIT_CRITICAL_DOWN,
    CEDIT_BASES_UP,
    CEDIT_BASES_DOWN,
    CEDIT_MIN_DIST_NMY_UP,
    CEDIT_MIN_DIST_NMY_DOWN, // 10
    CEDIT_MIN_DIST_OWN_UP,
    CEDIT_MIN_DIST_OWN_DOWN,
    CEDIT_LOC_AWARE_UP,
    CEDIT_LOC_AWARE_DOWN,
    CEDIT_PWR_WANTED_UP, // 15
    CEDIT_PWR_WANTED_DOWN,
    CEDIT_UPGRADE_UP,
    CEDIT_UPGRADE_DOWN,
    CEDIT_TIME_IN_BASE_UP,
    CEDIT_TIME_IN_BASE_DOWN, // 20
    CEDIT_MAX_PROBE_STEPS_UP,
    CEDIT_MAX_PROBE_STEPS_DOWN,
    CEDIT_DEFENCE_UP,
    CEDIT_DEFENCE_DOWN,
    CEDIT_MIN_GOOP_FOR_CREATURES_UP, // 25
    CEDIT_MIN_GOOP_FOR_CREATURES_DOWN,
    CEDIT_MAX_AGE_BASE_SCAN_UP,
    CEDIT_MAX_AGE_BASE_SCAN_DOWN,
    CEDIT_CRITICAL_FOREST_UP,
    CEDIT_CRITICAL_FOREST_DOWN, // 30
    CEDIT_BUILDER_RATIO_UP,
    CEDIT_BUILDER_RATIO_DOWN,
    CEDIT_DINO_UP,
    CEDIT_DINO_DOWN,
    CEDIT_CRAB_UP, // 35
    CEDIT_CRAB_DOWN,
    CEDIT_FROG_UP,
    CEDIT_FROG_DOWN,
    CEDIT_BIRD_UP,
    CEDIT_BIRD_DOWN, // 40
    CEDIT_MULE_UP,
    CEDIT_MULE_DOWN,
    CEDIT_FLAG_1,
    CEDIT_FLAG_2,
    CEDIT_FLAG_3, // 45
    CEDIT_FLAG_4,
    CEDIT_FLAG_5,
    CEDIT_FLAG_6,
    CEDIT_FLAG_7,
    CEDIT_FLAG_8, // 50
    CEDIT_PREV_PLAYER,
    CEDIT_NEXT_PLAYER,
    CEDIT_LOAD,
    CEDIT_SAVE,
    CEDIT_LEVEL_EDITOR, // 55
    CEDIT_CREATURE_BAR,
    CEDIT_TESTING,
    CEDIT_TECH_LEVEL_UP,
    CEDIT_TECH_LEVEL_DOWN,
    CEDIT_CR_PERCENTAGE_UP, // 60
    CEDIT_CR_PERCENTAGE_DOWN,
    CEDIT_CR_PERCEPTION_UP,
    CEDIT_CR_PERCEPTION_DOWN,
    CEDIT_NEW_BASE_POINTS_UP,
    CEDIT_NEW_BASE_POINTS_DOWN, // 65
    CEDIT_NEW_BASE_LOOK_RANGE_DOWN,
    CEDIT_NEW_BASE_LOOK_RANGE_UP,
    CEDIT_ATTACK_VOLUME,
    CEDIT_ARCHITECT_UP,
    CEDIT_FARMER_UP, // 70
    CEDIT_SCIENTIST_UP,
    CEDIT_SHEPHERD_UP,
    CEDIT_ARCHITECT_DOWN,
    CEDIT_FARMER_DOWN,
    CEDIT_SCIENTIST_DOWN, // 75
    CEDIT_SHEPHERD_DOWN,
    CEDIT_BUILD_DELAY_UP,
    CEDIT_BUILD_DELAY_DOWN,
    CEDIT_CR_PER_POINT_UP,
    CEDIT_CR_PER_POINT_DOWN, // 80
    CEDIT_DELAY_MAKING_CREATURES_UP,
    CEDIT_DELAY_MAKING_CREATURES_DOWN,
    CEDIT_MAX_CREATURES_UP,
    CEDIT_MAX_CREATURES_DOWN,
    CEDIT_TRIGGER_NUMBER_UP, // 85
    CEDIT_TRIGGER_NUMBER_DOWN,
    CEDIT_TRIGGER_TYPE_UP,
    CEDIT_TRIGGER_TYPE_DOWN,
    CEDIT_TRIGGER_SPECIES_UP,
    CEDIT_TRIGGER_SPECIES_DOWN, // 90
    CEDIT_TRIGGER_AMOUNT_UP,
    CEDIT_TRIGGER_AMOUNT_DOWN,
    CEDIT_TRIGGER_PLAYER_UP,
    CEDIT_TRIGGER_PLAYER_DOWN,
    CEDIT_GO_FOR_SCORE, // 95
    CEDIT_FAV_BUILDING_UP,
    CEDIT_FAV_BUILDING_DOWN,
    CEDIT_FAV_SPEC_UP,
    CEDIT_FAV_SPEC_DOWN,
    CEDIT_ATTACK_DELAY_UP, // 100
    CEDIT_ATTACK_DELAY_DOWN,
};

enum { // type=int8_t
    COMP_RANGE_DOWN = 0,
    COMP_RANGE_UP,
    COMP_PLAYER_DOWN,
    COMP_PLAYER_UP,
    COMP_POWER_DOWN,
    COMP_POWER_UP, // 5
    COMP_FLAGS_1,
    COMP_FLAGS_2,
    COMP_FLAGS_3,
    COMP_FLAGS_4,
    COMP_FLAGS_5, // 10
    COMP_FLAGS_6,
    COMP_FLAGS_7,
    COMP_FLAGS_8,
    SLICE_FLAGS_1,
    SLICE_FLAGS_2, // 15
    SLICE_FLAGS_3,
    SLICE_FLAGS_4,
    SLICE_FLAGS_5,
    SLICE_FLAGS_6,
    SLICE_FLAGS_7, // 20
    SLICE_FLAGS_8,
    COMP_STUFF_TYPE_UP,
    COMP_STUFF_TYPE_DOWN,
    COMP_POINT_TYPE_UP,
    COMP_POINT_TYPE_DOWN, // 25
    COMP_STUFF_NUM_UP,
    COMP_STUFF_NUM_DOWN,
};

enum { // type=int8_t
    F_WOOD = 0,
    F_FOOD,
};

enum { // type=int8_t
    INSIDE_SHIELD = 1,
    OUTSIDE_SHIELD,
};

enum { // type=int8_t
    EMERGENCY = 1,
    BASIC,
    PERSONALITY,
};

enum { // type=int8_t
    GPOINT_ATTACK = 0,
    GPOINT_STAGE,
    GPOINT_DEFEND,
    GPOINT_BREED,
    GPOINT_WORK,
    GPOINT_SCORE, // 5
    GPOINT_MONOLITH,
    MAX_GPOINT_TYPES,
};

enum { // type=int8_t
    TRIGGER_BUILDINGS = 0,
    TRIGGER_CREATURES,
    TRIGGER_TIME,
    TRIGGER_POINTS,
    MAX_TRIGGER_TYPE,
};

enum { // type=int8_t
    C_JOB_WORK = 0,
    C_JOB_BUILD,
    C_JOB_FIGHT,
    C_JOB_DEFENCE,
    C_JOB_ATTACK,
    C_JOB_MAX, // 5
};

enum { // type=int8_t
    CUSTOM_VICTORY_TOTHEDEATH = 0,
    CUSTOM_VICTORY_RATING,
    CUSTOM_VICTORY_GOOP,
    CUSTOM_ENDVICTORY,
};

enum { // type=int8_t
    CUSTOM_NETWORK = 0,
    CUSTOM_SLOT_1,
    CUSTOM_SLOT_2,
    CUSTOM_SLOT_3,
    CUSTOM_SLOT_4,
    CUSTOM_SLOT_5, // 5
    CUSTOM_SLOT_6,
    CUSTOM_SLOT_7,
    CUSTOM_SLOT_8,
    CUSTOM_SLOT_9,
    CUSTOM_PREV_LEVEL, // 10
    CUSTOM_NEXT_LEVEL,
    CUSTOM_PREV_VICTORY,
    CUSTOM_NEXT_VICTORY,
    CUSTOM_ETHEREAL_1,
    CUSTOM_ETHEREAL_2, // 15
    CUSTOM_ETHEREAL_3,
    CUSTOM_ETHEREAL_4,
    CUSTOM_RACE_1,
    CUSTOM_RACE_2,
    CUSTOM_RACE_3, // 20
    CUSTOM_RACE_4,
    CUSTOM_GO,
    CUSTOM_CREATE,
    CUSTOM_JOIN,
    CUSTOM_LEAVE, // 25
    CUSTOM_CANCEL,
};

enum { // type=int8_t
    STUFF_LEFT_FAN = 1,
    STUFF_RIGHT_FAN,
    STUFF_UP_FAN,
    STUFF_BONUS_FUEL,
    STUFF_BONUS_POINTS, // 5
    STUFF_ASTEROID,
};

enum { // type=int8_t
    LANDER_INVALID = 0,
    LANDER_ACTIVE,
    LANDER_LANDED,
    LANDER_OUT_OF_BOUNDS,
    LANDER_CRASHED,
};

enum { // type=int8_t
    TITLE_SINGLE_PLAYER = 0,
    TITLE_MULTI_PLAYER,
    TITLE_QUIT,
    TITLE_OPTIONS,
};

enum VictoryCondition { // type=int8_t
    VICTORY_SUMMON_ETHEREALS = 0,
    VICTORY_CURE_DISEASE,
    VICTORY_LEVEL1_SPECIAL_CASE,
    VICTORY_MAX,
};

enum { // type=int8_t
    E_STUFF_MODE_NORMAL = 0,
    E_STUFF_MODE_EDIT,
    E_STUFF_MODE_NEW,
};

enum { // type=int8_t
    EDIT_NAME = 0,
    EDIT_CLASS_DOWN,
    EDIT_CLASS_UP,
    EDIT_SIZE_DOWN,
    EDIT_SIZE_UP,
    EDIT_ORBIT_DOWN, // 5
    EDIT_ORBIT_UP,
    EDIT_GRAVITY_DOWN,
    EDIT_GRAVITY_UP,
    EDIT_SOLAR_DOWN,
    EDIT_SOLAR_UP, // 10
    EDIT_TEMP_DOWN,
    EDIT_TEMP_UP,
    EDIT_SEA_LEVEL_DOWN,
    EDIT_SEA_LEVEL_UP,
    EDIT_FLAGS_1, // 15
    EDIT_FLAGS_2,
    EDIT_FLAGS_3,
    EDIT_FLAGS_4,
    EDIT_FLAGS_5,
    EDIT_FLAGS_6, // 20
    EDIT_FLAGS_7,
    EDIT_FLAGS_8,
    EDIT_PAYMENT_DOWN,
    EDIT_PAYMENT_UP,
    EDIT_SEED_DOWN, // 25
    EDIT_SEED_UP,
    EDIT_START_ALT_DOWN,
    EDIT_START_ALT_UP,
    EDIT_FRAC_DEV_DOWN,
    EDIT_FRAC_DEV_UP, // 30
    EDIT_WEATHER_DOWN,
    EDIT_WEATHER_UP,
    EDIT_TECTONICS_DOWN,
    EDIT_TECTONICS_UP,
    EDIT_GAS_1_DOWN, // 35
    EDIT_GAS_1_UP,
    EDIT_GAS_2_DOWN,
    EDIT_GAS_2_UP,
    EDIT_GAS_3_DOWN,
    EDIT_GAS_3_UP, // 40
    EDIT_GAS_4_DOWN,
    EDIT_GAS_4_UP,
    EDIT_GAS_5_DOWN,
    EDIT_GAS_5_UP,
    EDIT_GAS_6_DOWN, // 45
    EDIT_GAS_6_UP,
    EDIT_LEVEL_DOWN,
    EDIT_LEVEL_UP,
    EDIT_LEVEL_SAVE,
    EDIT_LEVEL_LOAD, // 50
    EDIT_LEVEL_GO,
    EDIT_VICTORY_GOOP_DOWN,
    EDIT_VICTORY_GOOP_UP,
    EDIT_VICTORY_BUILDINGS_DOWN,
    EDIT_VICTORY_BUILDINGS_UP, // 55
    EDIT_VICTORY_BIOMASS_DOWN,
    EDIT_VICTORY_BIOMASS_UP,
    EDIT_PREV_CREATURE,
    EDIT_NEXT_CREATURE,
    EDIT_PREV_COMPUTER_ONE, // 60
    EDIT_NEXT_COMPUTER_ONE,
    EDIT_PREV_COMPUTER_TWO,
    EDIT_NEXT_COMPUTER_TWO,
    EDIT_PREV_COMPUTER_THREE,
    EDIT_NEXT_COMPUTER_THREE, // 65
    EDIT_BAD_DOWN,
    EDIT_BAD_UP,
    EDIT_VISIT_UP,
    EDIT_VISIT_DOWN,
    EDIT_LENGTH_UP, // 70
    EDIT_LENGTH_DOWN,
    EDIT_CREATURES_UP,
    EDIT_CREATURES_DOWN,
    EDIT_STRICTNESS_UP,
    EDIT_STRICTNESS_DOWN, // 75
    EDIT_STUFF_TYPE_UP,
    EDIT_STUFF_TYPE_DOWN,
    EDIT_STUFF_SPECIES_UP,
    EDIT_STUFF_SPECIES_DOWN,
    EDIT_STUFF_SIZE_UP, // 80
    EDIT_STUFF_SIZE_DOWN,
    EDIT_STUFF_SCORE_UP,
    EDIT_STUFF_SCORE_DOWN,
    EDIT_STUFF_EDIT,
    EDIT_STUFF_NEW, // 85
    EDIT_STUFF_PLS,
    EDIT_COMP_START_1_DOWN,
    EDIT_COMP_START_2_DOWN,
    EDIT_COMP_START_3_DOWN,
    EDIT_COMP_START_1_UP, // 90
    EDIT_COMP_START_2_UP,
    EDIT_COMP_START_3_UP,
    EDIT_ARCHITECT_UP,
    EDIT_FARMER_UP,
    EDIT_SCIENTIST_UP, // 95
    EDIT_SHEPHERD_UP,
    EDIT_ARCHITECT_DOWN,
    EDIT_FARMER_DOWN,
    EDIT_SCIENTIST_DOWN,
    EDIT_SHEPHERD_DOWN, // 100
    EDIT_SPECIALIST_FUNCTIONS_ALLOWED,
    EDIT_SPECIALIST_TYPES_ALLOWED,
    EDIT_RESCUED_ON_TURN_UP,
    EDIT_RESCUED_ON_TURN_DOWN,
    EDIT_VICTORY_FLAGS, // 105
    EDIT_CREATURE_PLAYER_UP,
    EDIT_CREATURE_PLAYER_DOWN,
};

enum { // type=int8_t
    MAPTYPE_CONQUEST = 0,
    MAPTYPE_CUSTOM,
};

enum { // type=int8_t
    PI_SPR_WRECK = 0,
    PI_SPR_PELLETS,
    PI_SPR_BUILD,
    PI_SPR_STUDY,
    PI_SPR_HEAL,
    PI_SPR_ATTACK, // 5
    PI_SPR_BURN,
    PI_SPR_RECYCLE,
    PI_SPR_STUN,
    PI_SPR_CHOP,
    PI_SPR_HARVEST, // 10
    PI_SPR_PLANT,
    PI_SPR_PICKUP,
    PI_SPR_COLLECT,
    PI_SPR_UPGRADE,
    PI_SPR_LIFTOFF, // 15
};

enum { // type=int8_t
    PNSPR_EDGE = 1,
    PNSPR_SHEPHERDICONS = 3,
    PNSPR_TEAMEDGEMASKS = 6,
    PNSPR_GOODTRI = 11,
    PNSPR_BADTRI,
    PNSPR_TEAMCIRCLEMASK = 14,
    PNSPR_PLANETS, // 15
    PNSPR_STATIC = 20,
    PNSPR_PALETTE = 24,
    PNSPR_PLANTTERRAIN = 34,
    PNSPR_BUILDINGS = 39,
    PNSPR_NOPELLETS = 53,
    PNSPR_VIEWEREDGEMASK,
    PNSPR_SPECICONS, // 55
    PNSPR_SEEDS = 59,
    PNSPR_BPELLETS, // 60
    PNSPR_BLDGICONS,
    PNSPR_WATER = 64,
    PNSPR_WOOD, // 65
    PNSPR_GOOP,
    PNSPR_WEAPON,
    PNSPR_MINERALS,
    PNSPR_FULLDOT,
    PNSPR_MAPEDGEMASK = 73,
    PNSPR_MAPHITMASK,
    PNSPR_SWITCHOFF, // 75
    PNSPR_HELP,
    PNSPR_PALSEED,
    PNSPR_PALTRI = 79,
    PNSPR_PALSQUARE = 91,
};

enum { // type=int8_t
    PN_SPR_EDGE1 = 0,
    PN_SPR_EDGE2,
    PN_SPR_STATIC,
    PN_SPR_NOPELLETS,
    PN_SPR_PUP,
    PN_SPR_PDOWN, // 5
    PN_SPR_PFRAME,
    PN_SPR_PEDGE,
    PN_SPR_PLANTTERRAIN,
    PN_SPR_PLANET,
    PN_SPR_REQPANEL, // 10
};

enum { // type=int8_t
    PLGD_CIRCLES = 0,
    PLGD_MAP = 5,
    PLGD_POWERGRAPH,
    PLGD_ONOFF,
    PLGD_LMAKE,
    PLGD_LLEFT,
    PLGD_LRIGHT, // 10
    PLGD_BARS,
    PLGD_BSHIELD = 14,
    PLGD_GOOPOMETER, // 15
    PLGD_GOOPDOT,
    PLGD_BADOMETER,
    PLGD_BIGMAP,
    PLGD_PUP,
    PLGD_PDOWN, // 20
    PLGD_PPALETTE,
    PLGD_VIEWPORT,
    PLGD_CCLOSE,
    PLGD_CADD,
    PLGD_CREMOVE, // 25
    PLGD_CLAUNCH,
    PLGD_HELP,
    PLGD_ESCOPE,
    PLGD_EDGE,
};

enum { // type=int8_t
    MIFC_LLEFT = 0,
    MIFC_LRIGHT,
    MIFC_LMAKE,
};

enum { // type=int8_t
    MIFC_BLPADUPGRADE = 1,
    MIFC_BLPADSLIDER,
};

enum { // type=int8_t
    MIFC_PGO = 0,
    MIFC_PUP,
    MIFC_PDOWN,
    MIFC_PPALETTE,
};

enum { // type=int8_t
    MIFC_PNCIRCLES = 0,
    MIFC_PNBIGMAP = 5,
    MIFC_PNBARS,
    MIFC_PNBADOMETER = 9,
    MIFC_PNGOOPOMETER, // 10
    MIFC_PNGOOPDOT,
    MIFC_PNPOWERGRAPH,
    MIFC_PNONOFF,
    MIFC_PNHELP,
    MIFC_PNVIEWPORT, // 15
    MIFC_PNSPECIALLINK,
    MIFC_PNESCOPE,
    MIFC_PNTOPEDGE,
    MIFC_PNBOTTOMEDGE,
};

enum { // type=int8_t
    MIFC_LINK = 0,
    MIFC_MAP,
    MIFC_LAST,
    NUM_MIFC_GAD,
};

enum { // type=int8_t
    CLSPR_BUTTONPRESSED = 1,
    CLSPR_LIGHTON,
    CLSPR_LAUNCHMASK,
    CLSPR_ROCKET,
    CLSPR_PLANET, // 5
    CLSPR_CORNER_BIG,
    CLSPR_CORNER_SMALL,
};

enum { // type=int8_t
    GLSPR_MAKEMASK = 1,
    GLSPR_ARROWSNORMAL,
    GLSPR_ARROWSPRESSED = 4,
    GLSPR_BUTTONPRESSED = 6,
    GLSPR_LIGHTON,
    GLSPR_MAINEDGEMASK,
    GLSPR_LISTEDGEMASK,
};

enum { // type=int8_t
    GL_SPR_EDGE = 0,
    GL_SPR_MAKEBUTTON,
    GL_SPR_BOTTOMEDGE,
};


enum { // type=int8_t
    CHEAT_MORE_GOOP = 0,
    CHEAT_PLANT_TREE,
    CHEAT_BUILDINGS,
    CHEAT_GRENADE,
    CHEAT_FIRE,
    CHEAT_RNR, // 5
    CHEAT_FORCE_ETHEREAL,
    CHEAT_BPELLETS,
    CHEAT_DAMAGE,
    CHEAT_DRAIN,
    CHEAT_UPTECH, // 10
};

enum { // type=int8_t
    ETSPR_PUTT = 0,
    ETSPR_SAUCER = 8,
};

enum { // type=int8_t
    EMODE_DESCENDING = 0,
    EMODE_SEARCHING,
    EMODE_MOVING,
    EMODE_LEAVING,
};

enum { // type=int8_t
    POD_FIRE = 0,
    POD_SMALL_EXPLOSION,
    POD_BIG_EXPLOSION,
    POD_HUGE_EXPLOSION,
    POD_SMALL_GOOP,
    POD_MED_GOOP, // 5
    POD_LARGE_GOOP,
    POD_RANDOM_GOOP,
    POD_RESTORE_HEALTH,
    POD_PELLETS,
};

enum { // type=int8_t
    EF_SHADOW_SMALL = 64,
    EF_SHADOW_MEDIUM, // 65
    EF_SHADOW_LARGE,
};

typedef enum PlsError PlsError;

enum { // type=int8_t
    BLDOBJ_FORCECONE = 0,
    BLDOBJ_HBRIDGE,
    BLDOBJ_FOUNDATION,
};

enum { // type=int8_t
    BPHASE_START = 0,
    BPHASE_FLATTEN,
    BPHASE_FLATTEN2,
    BPHASE_MOVETOTOSS,
    BPHASE_TOSSING,
    BPHASE_FOUNDATIONDONE, // 5
};

enum { // type=int8_t
    SPECBASEA_ARCHITECT = 0,
    SPECBASEA_FARMER = 5,
    SPECBASEA_SCIENTIST = 8,
    SPECBASEA_SHEPHERD = 10,
    PLSOM_LIFTOFF = 14,
    MAX_SPECBASEA, // 15
};

enum { // type=int8_t
    PLSOM_MOVETOHEX = 0,
    PLSOM_MOVETOSPECIAL,
    PLSOM_MOVETOSPEC,
    PLSOM_MOVEINDIR,
    PLSOM_MOVETOTHING,
    PLSOM_MOVEAWAYFROMTHING, // 5
    PLSOM_MOVETOBUILDING,
};

enum { // type=int8_t
    STATUS_LOW_POWER = 0,
    STATUS_UNDER_ATTACK,
    STATUS_ETHEREAL_APPROACH,
    STATUS_LOW_STORAGE,
    STATUS_LOW_GOOP,
    STATUS_ALARM, // 5
};

enum { // type=int8_t
    CR_SPR_DIR = 0,
    CR_SPR_ATTACK = 8,
    CR_SPR_STUN = 16,
    CR_SPR_DIE,
    CR_SPR_BONES,
    CR_SPR_EAT,
    CR_SPR_CHOP, // 20
    CR_SPR_BUILD,
    CR_SPR_KISS,
    CR_SPR_EXTRA,
};

enum DragThing { // type=int8_t
    DRAG_NOTHING = 0,
    DRAG_PLANT,
    DRAG_CREATURE,
    DRAG_WOODDISK,
};

typedef enum DragThing DragThing;

enum { // type=int8_t
    JOB_WORK = 0,
    JOB_BUILD,
    JOB_FIGHT,
};

enum { // type=int8_t
    FOOD_MEAT = 0,
    FOOD_VEGI,
    FOOD_BONES,
    FOOD_SPECIAL,
};

enum { // type=int8_t
    INDI_PLANT_TYPE_GRASS = 0,
    INDI_PLANT_TYPE_DESERT,
    INDI_PLANT_TYPE_SNOW,
};

enum { // type=int8_t
    STUFF_NOTHING = 0,
    STUFF_FOREST,
    STUFF_HERD,
    STUFF_CRATER,
    STUFF_MINERALS,
    STUFF_BUILDING, // 5
    STUFF_COMP_GPOINT,
    STUFF_EZBIOMASS,
    STUFF_EZDINO,
    STUFF_EZCRAB,
    STUFF_EZFROG, // 10
    STUFF_EZBIRD,
    STUFF_EZMULE,
    STUFF_EZTEMPLE,
    MAX_STUFF_TYPES,
};

enum { // type=int8_t
    VICTORY_TOTHEDEATH = 0,
    VICTORY_WORLDSHAPER,
    VICTORY_GOOP,
    MAX_VICTORIES,
};

enum { // type=int8_t
    WE_CLOUD_APPEAR = 0,
    WE_CLOUD,
    WE_LIGHTNING,
    WE_CLOUD_DISAPPEAR,
    WE_METEOR,
};

enum { // type=int8_t
    XYFNDERR_TOOCLOSE = 1,
    XYFNDERR_WATER,
    XYFNDERR_TREES,
    XYFNDERR_MINE,
};

enum { // type=int8_t
    E_OVERALLS_1 = 0,
    E_OVERALLS_2,
    E_OVERALLS_3,
    E_VACCSUIT,
    E_STRUGGLESEAL,
    E_DENSESEAL, // 5
    E_GRAVPACK,
    E_SURFBOARD,
    E_ROLLERBLADES,
    E_SPLICER_1,
    E_SPLICER_2, // 10
    E_SPLICER_3,
    E_SPLICER_4,
    E_GUN_1,
    E_GUN_2,
    E_GUN_3, // 15
    E_GUN_4,
    E_STASIS_1,
    E_STASIS_2,
    E_STASIS_3,
    E_SAW_1, // 20
    E_SAW_2,
    E_SAW_3,
    E_STAFF_1,
    E_STAFF_2,
    E_STAFF_3, // 25
    E_STAFF_4,
    E_PLANTER_1,
    E_PLANTER_2,
    E_PLANTER_3,
    E_PLANTER_4, // 30
    E_POUCH_1,
    E_POUCH_2,
    E_POUCH_3,
    E_MULE_1,
    E_MULE_2, // 35
    E_MULE_3,
    E_MULE_4,
    E_BUILDER_1,
    E_BUILDER_2,
    E_BUILDER_3, // 40
    E_BUILDER_4,
    E_WRECKER_1,
    E_WRECKER_2,
    E_WRECKER_3,
    E_MEDICAL_1, // 45
    E_MEDICAL_2,
    E_MEDICAL_3,
    E_MEDICAL_4,
    E_STEROID_1,
    E_STEROID_2, // 50
    E_STEROID_3,
    E_MAX_EQUIPMENT,
    E_NOTHING = 255,
};

enum { // type=int8_t
    S_ENTERING = 1,
    S_LEAVING,
    S_WAITING,
    S_DROPPING,
};

enum { // type=int8_t
    MOTHER_NEXT_SPECIALIST = 0,
    MOTHER_PREV_SPECIALIST,
    MOTHER_SPEC_TO_TUBE,
    MOTHER_LAUNCH_TUBES,
    MOTHER_MOBILITY,
    MOTHER_ARMOR, // 5
    MOTHER_TOOL1,
    MOTHER_TOOL2,
    MOTHER_TOPOGRAPHY,
    MOTHER_LIFEFORMS,
    MOTHER_ENERGY, // 10
    MOTHER_RADIATION,
    MOTHER_SEEDS,
    MOTHER_DROP_LAB,
    MOTHER_BLANK2,
    MOTHER_DROP_SITE, // 15
    MOTHER_SPEC_PAD,
    MOTHER_TAC_PAD,
    MOTHER_TUBE_1,
    MOTHER_TUBE_2,
    MOTHER_TUBE_3, // 20
    MOTHER_TUBE_4,
    MOTHER_TUBE_5,
};

enum { // type=int8_t
    LV_NEXT_PLANET = 0,
    LV_PREV_PLANET,
    LV_SELECT_PLANET,
};

enum { // type=int8_t
    S_ACTIVE = 1,
    S_COMPLETE,
    S_FAILED,
};

enum { // type=int8_t
    PLSPR_HEART = 0,
    PLSPR_WOODDISK = 2,
    PLSPR_HAMMER = 6,
    PLSPR_REPAIR,
    PLSPR_OFF,
    PLSPR_UPGRADE,
    PLSPR_ZAP, // 10
    PLSPR_UNPOWERED,
    PLSPR_FLAGS,
    PLSPR_DOT = 21,
    PLSPR_PACKLEADERS,
    PLSPR_PACKS = 26,
    PLSPR_DOT2 = 30,
    PLSPR_SELECT,
    PLSPR_THUMBSUP,
    PLSPR_X,
    PLSPR_TGTS,
    PLSPR_HUNGRY = 38,
    PLSPR_TIRED,
    PLSPR_SCARED, // 40
    PLSPR_HUNTING,
};

enum { // type=int8_t
    POINTER_SPR_MAIN = 1,
    POINTER_SPR_TGT = 5,
};

enum { // type=int8_t
    GLSPR_HEART = 0,
    GLSPR_POWEROK,
    GLSPR_UNPOWERED,
    GLSPR_ZONEDOT,
    GLSPR_TGTARROW,
    GLSPR_POWERDOT, // 5
    GLSPR_BUILDOK,
    GLSPR_NOPOWER,
    GLSPR_NOBUILD,
    GLSPR_TGT,
    GLSPR_FLAG, // 10
    GLSPR_DISABLED,
    GLSPR_UPGRADE,
    GLSPR_DAMAGED,
    GLSPR_ICE,
    GLSPR_MEMBERS = 17,
    GLSPR_HUNGRY = 21,
    GLSPR_TIRED,
    GLSPR_SCARED,
    GLSPR_HUNTING,
    GLSPR_DRONE, // 25
    GLSPR_DRONEACTIVE,
    GLSPR_DRONEBOOM,
    GLSPR_ZONES,
    GLSPR_STAR = 35,
    GLSPR_CRU,
};

enum { // type=int8_t
    B_SPR_FRAMEWORK = 0,
    B_SPR_BUILT,
    B_SPR_BUSTED = 4,
    B_SPR_CONTENTS, // 5
};

enum { // type=int8_t
    SPC8_SPR_DIR = 0,
    SPC8_SPR_WAIT = 8,
    SPC8_SPR_DIE,
    SPC8_SPR_STUN, // 10
    SPC8_SPR_LOOKUP,
    SPC8_SPR_PICKUP,
    SPC8_SPR_SPECIAL,
};

enum { // type=int8_t
    PLT_SPR_LIVE = 0,
    PLT_SPR_FALLEN = 3,
    PLT_SPR_DEAD = 6,
};

enum { // type=int8_t
    PA_NULL = 0,
    PA_QUIT,
    PA_STARTGAME,
    PA_MOVE_TO,
    PA_ABORT_MOVE,
    PA_IFC_GO, // 5
    PA_BUILDING_ACTIVATE,
    PA_ADD_TEAM_MEMBER,
    PA_REMOVE_TEAM_MEMBER,
    PA_SET_DROP_ZONE,
    PA_LANDING, // 10
    PA_QUIT_ALL,
    PA_CREATE_A_CREATURE,
    PA_ADD_PLANT,
    PA_RANDOM_SEED,
    PA_CHEAT, // 15
    PA_IFC_MOVE_GO,
    PA_SET_SENTINEL_ZONE,
    PA_GROUP,
    PA_UPGRADE_BUILDING,
    PA_ACTIVATE_BUILDING, // 20
    PA_IFC_ABORT_SPECIAL,
    PA_MESSAGE,
    PA_SET_SHEPHERD_THING,
    PA_SET_SHIELD_MODE,
    PA_CREATURE_ACTION, // 25
    PA_JOINSESSION,
    PA_LEAVESESSION,
    PA_SESSIONPERMISSION,
    PA_SETUPSTUFF,
    PA_SESSIONINFOREQUEST, // 30
    PA_PAUSE,
    PA_LEAVE_STAT_SCREEN,
    PA_WIN_LEVEL,
};

enum { // type=int8_t
    _PATH_RIGHT = 0,
    _PATH_LEFT,
    _PATH_UP,
    _PATH_DOWN,
};

enum { // type=int8_t
    _TOP = 1,
    _CAP,
    _HALF,
    _BASE,
    _BOTTOM, // 5
};

enum { // type=int8_t
    _NORMAL = 0,
    _LEFT,
    _CENTER,
    _RIGHT,
};

enum { // type=int8_t
    _GWRAPOFF = 0,
    _GWRAPON,
};

enum { // type=int8_t
    _GCURSOROFF = 0,
    _GCURSORON,
};

enum { // type=int8_t
    _GOR = 0,
    _GAND,
    _GPRESET,
    _GPSET,
    _GXOR,
};



enum { // type=int16_t
    INTR_OF = 0,
    INTR_DF,
    INTR_IF,
    INTR_TF,
    INTR_PF,
    INTR_CF, // 5
    INTR_AF = 16,
    INTR_ZF = 64,
    INTR_SF = 128,
};

typedef uint32_t clock_t;

typedef char *va_list[0];

typedef int32_t fpos_t;

typedef void (*onexit_t)();

typedef char *__va_list[0];

typedef int32_t off_t;

typedef int dev_t;

typedef unsigned int ino_t;

typedef unsigned int size_t;

typedef uint32_t time_t;

typedef uint16_t wchar_t;

enum TopoType { // type=int8_t
    TOPO_MOUNTAIN = 0,
    TOPO_CRATER,
};

typedef enum TopoType TopoType;

typedef class Player Player;

struct OriBlock { // sizeof=9
    UBYTE Count; // offset=0
    UBYTE Block[3]; // offset=1
    UBYTE Orient[3]; // offset=5
};

typedef struct OriBlock OriBlock;




class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

typedef class EventHelp EventHelp;


class SoundConfig { // sizeof=10
    void Set();
    void Write(char *arg1);
    void Read(char *arg1);
    SLONG sfxVolume; // offset=0
    SLONG musicVolume; // offset=4
    BBOOL sfxOn; // offset=8
    BBOOL musicOn; // offset=9
};

typedef class SoundConfig SoundConfig;


enum { // type=int8_t
    MAKE_NOTREADY = 0,
    MAKE_READYPRESSED,
    MAKE_READY,
};

enum { // type=int8_t
    OPTSPR_LS = 0,
    OPTSPR_EXIT,
    OPTSPR_RS,
    OPTSPR_SM,
    OPTSPR_PICKER,
};

enum { // type=int8_t
    OPTIONS_MUSIC_SLIDER = 0,
    OPTIONS_MUSIC_TOGGLE,
    OPTIONS_SFX_SLIDER,
    OPTIONS_SFX_TOGGLE,
    OPTIONS_LOAD,
    OPTIONS_SAVE, // 5
    OPTIONS_SLOTS,
    OPTIONS_QUIT_TO_DOS,
    OPTIONS_ABANDON,
    OPTIONS_RESUME,
};

typedef void *CALLBACK;

typedef uint32_t BOOL;

typedef uint32_t clock_t;

typedef void (*onexit_t)();

typedef unsigned int ino_t;

typedef unsigned int size_t;

typedef uint32_t time_t;

typedef uint16_t wchar_t;


class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

class GunSpec { // sizeof=7
    SWORD shotSpeed; // offset=0
    SWORD shotLifeInTurns; // offset=2
    SWORD reloadTime; // offset=4
    UBYTE shotEffect; // offset=6
};

class SpeechFileStatus { // sizeof=8
    BBOOL Valid();
    void Invalidate();
    TbFileHandle handle; // offset=0
    SLONG numSamples; // offset=4
};


class CreatureInfo { // sizeof=2
    class CreatureInfo * CreatureInfo(class CreatureInfo *arg1);
    void Invalidate();
    class CreatureInfo * CreatureInfo();
    uint8_t baseNo; // offset=0
    SBYTE guardPoint; // offset=1
    uint8_t space; // offset=2
    uint8_t movingToPoint; // offset=3
    uint8_t job; // offset=4
};

struct SinglePoint { // sizeof=7
    SWORD X; // offset=0
    SWORD Y; // offset=2
    SWORD Z; // offset=4
    UBYTE Flags; // offset=6
};

typedef struct SinglePoint SinglePoint;

class Recording { // sizeof=6
    void Decode();
    void Encode();
    XY mouse; // offset=0
    uint8_t keyDown; // offset=4
    UBYTE key; // offset=5
    uint8_t alt; // offset=6
    uint8_t ctrl; // offset=7
    uint8_t shift; // offset=8
    uint8_t mRight; // offset=9
    uint8_t mLeft; // offset=10
};

typedef class Recording Recording;

class Recorder { // sizeof=17
    void Playback();
    void Store();
    void ReadBuffer();
    void Flush();
    void Close();
    BBOOL Init(char *arg1, BBOOL arg2);
    Recording *records; // offset=0
    ULONG activeRecord; // offset=4
    TbFileHandle fileHandle; // offset=8
    BBOOL playback; // offset=12
    SLONG bufferSize; // offset=13
};

typedef struct MyGadget MyGadget;

class HelpDraw { // sizeof=26
    void GenericHelpDraw(MyGadget *arg1, char *arg2);
    void Draw(MyGadget *arg1, char *arg2);
    void SetColors(UBYTE arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4);
    void DislodgeAndReset();
    void Dislodge();
    SWORD hx; // offset=0
    SWORD hy; // offset=2
    SWORD hWidth; // offset=4
    SLONG turn; // offset=6
    SLONG length; // offset=10
    ULONG id; // offset=14
    UBYTE pen; // offset=18
    UBYTE outline; // offset=19
    UBYTE fill; // offset=20
    UBYTE boxOutline; // offset=21
    MyGadget *gad; // offset=22
};

class GunSpec { // sizeof=7
    SWORD shotSpeed; // offset=0
    SWORD shotLifeInTurns; // offset=2
    SWORD reloadTime; // offset=4
    UBYTE shotEffect; // offset=6
};






class EtherealTargetScan : RangeScanner { // sizeof=118
    class EtherealTargetScan * EtherealTargetScan(class EtherealTargetScan *arg1);
    void PerGrid();
    class EtherealTargetScan * EtherealTargetScan(Ethereal arg1, ULONG arg2);
    //void (**__vfptr)();
    ULONG bestRanges[8];
    Ethereal saucer;
    Thing *tgtThings[8]; // offset=41
    UBYTE numTargets; // offset=77
};

struct PolyPoint { // sizeof=20
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG U; // offset=8
    SLONG V; // offset=12
    SLONG S; // offset=16
};


void BoundMmsToMySprite( MyMinSprite &, MySprite & );


short FindShortDist( char unsigned, char unsigned, char unsigned );
long FindShortDistance( long, long, long );
void SetRefreshZones( long, long, long, long, char unsigned );
char unsigned ActiveRefreshZoneHit( long, long, TbSprite * );
char unsigned ActiveRefreshZoneHit( long, long, MyFrame * );
void SetFrameRefreshZones( long, long, MyFrame *, char unsigned );
void DrawLineHR( short, short, short, short, char unsigned );
char * ComposeAndLowerCaseString( char *, char *, char * );
char * MakeHelpActionString( char *, char unsigned, Thing * );
void MemDump( char unsigned *, long unsigned );
void global_x_rotate_points( Point *, Point *, long, long, long unsigned );
void global_y_rotate_points( Point *, Point *, long, long, long unsigned );
void global_z_rotate_points( Point *, Point *, long, long, long unsigned );
MyFrame * UpdateMyMinSprite2( MySprite *, MyMinSprite * );
void SetPointerAndHotpoint( TbSprite *, long unsigned, long unsigned );

#endif // BIO_MISC_HPP_
/******************************************************************************/
