/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file aila.h
 *     Header file for aila.asm.
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
#ifndef BFSOUNDLIB_AILA_H_
#define BFSOUNDLIB_AILA_H_

#ifdef __cplusplus
extern "C" {
#endif

int _AILA_shutdown();
int _AIL_API_set_timer_user();
int _AIL_API_start_timer();
int _AIL_API_disable_interrupts();
int _set_PIT_divisor();
int _AIL_API_delay();
int _AIL_API_restore_USE16_ISR();
int _AIL_API_interrupt_divisor();
int _AIL_API_stop_all_timers();
int _API_timer();
int _AILA_VMM_lock();
int _AIL_API_register_timer();
int _AIL_API_set_timer_period();
int _AIL_restore_stack();
int _AIL_switch_stack();
int _AIL_API_release_timer_handle();
int _AIL_API_call_driver();
int _AIL_API_release_all_timers();
int _AILA_startup();
int _AIL_API_set_timer_divisor();
int _set_PIT_period();
int _program_timers();
int _AIL_API_restore_interrupts();
int _thunk_proc();
int _AIL_API_unlock();
int _AIL_API_set_timer_frequency();
int _AIL_API_stop_timer();
int _AIL_API_start_all_timers();
int _AIL_API_lock();
int _AIL_API_set_real_vect();
int _AIL_API_get_real_vect();
int _AIL_API_background();
int _AIL_API_set_USE16_ISR();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AILA_H_
/******************************************************************************/
