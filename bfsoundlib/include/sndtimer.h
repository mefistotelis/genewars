/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file sndtimer.hpp
 *     Header file for sndtimer.cpp.
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
#ifndef BFSOUNDLIB_SNDTIMER_H_
#define BFSOUNDLIB_SNDTIMER_H_

#ifdef __cplusplus
extern "C" {
#endif

struct sound_timer_inf { // sizeof=unknown
    int a1;
};

typedef struct sound_timer_inf sound_timer_inf;

int InitAllBullfrogSoundTimers();
int SetupBullfrogSoundTimer();
int ReleaseBullfrogSoundTimer();
extern sound_timer_inf sound_timer[];

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_SNDTIMER_H_
/******************************************************************************/
