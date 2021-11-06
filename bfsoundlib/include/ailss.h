/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ailss.h
 *     Header file for ailss.c.
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
#ifndef BFSOUNDLIB_AILSS_H_
#define BFSOUNDLIB_AILSS_H_

#ifdef __cplusplus
extern "C" {
#endif

int AILSS_start();
int _AIL_API_install_DIG_driver_file();
int _AIL_API_install_DIG_driver_image();
int _AIL_API_install_DIG_INI();
int _AIL_API_uninstall_DIG_driver();
int _AIL_API_active_sample_count();
int _AIL_API_allocate_sample_handle();
int _AIL_API_release_sample_handle();
int _AIL_API_init_sample();
int _AIL_API_sample_status();
int _AIL_API_set_sample_address();
int _AIL_API_set_sample_type();
int _AIL_API_sample_playback_rate();
int _AIL_API_set_sample_playback_rate();
int _AIL_API_sample_volume();
int _AIL_API_set_sample_volume();
int _AIL_API_sample_pan();
int _AIL_API_set_sample_pan();
int _AIL_API_sample_position();
int _AIL_API_set_sample_position();
int _AIL_API_sample_loop_count();
int _AIL_API_set_sample_loop_count();
int _AIL_API_start_sample();
int _AIL_API_stop_sample();
int _AIL_API_resume_sample();
int _AIL_API_end_sample();
int _AIL_API_register_SOB_callback();
int _AIL_API_register_EOB_callback();
int _AIL_API_register_EOS_callback();
int _AIL_API_set_sample_user_data();
int _AIL_API_sample_user_data();
int _AIL_API_set_digital_master_volume();
int _AIL_API_digital_master_volume();
int _AIL_API_minimum_sample_buffer_size();
int _AIL_API_load_sample_buffer();
int _AIL_API_sample_buffer_ready();
int AILSS_end();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AILSS_H_
/******************************************************************************/
