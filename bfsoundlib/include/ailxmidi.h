/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ailxmidi.h
 *     Header file for ailxmidi.c.
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
#ifndef BFSOUNDLIB_AILXMIDI_H_
#define BFSOUNDLIB_AILXMIDI_H_

#ifdef __cplusplus
extern "C" {
#endif

int AILXMIDI_start();
int _AIL_API_install_MDI_driver_file();
int _AIL_API_install_MDI_driver_image();
int _AIL_API_install_MDI_INI();
int _AIL_API_uninstall_MDI_driver();
int _AIL_API_MDI_driver_type();
int _AIL_API_set_GTL_filename_prefix();
int _AIL_API_allocate_sequence_handle();
int _AIL_API_release_sequence_handle();
int _AIL_API_init_sequence();
int _AIL_API_start_sequence();
int _AIL_API_stop_sequence();
int _AIL_API_resume_sequence();
int _AIL_API_end_sequence();
int _AIL_API_set_sequence_loop_count();
int _AIL_API_set_sequence_tempo();
int _AIL_API_set_sequence_volume();
int _AIL_API_sequence_status();
int _AIL_API_sequence_loop_count();
int _AIL_API_sequence_tempo();
int _AIL_API_sequence_volume();
int _AIL_API_set_XMIDI_master_volume();
int _AIL_API_XMIDI_master_volume();
int _AIL_API_timbre_status();
int _AIL_API_install_timbre();
int _AIL_API_protect_timbre();
int _AIL_API_unprotect_timbre();
int _AIL_API_active_sequence_count();
int _AIL_API_controller_value();
int _AIL_API_channel_notes();
int _AIL_API_sequence_position();
int _AIL_API_branch_index();
int _AIL_API_register_prefix_callback();
int _AIL_API_register_trigger_callback();
int _AIL_API_register_sequence_callback();
int _AIL_API_register_beat_callback();
int _AIL_API_register_event_callback();
int _AIL_API_register_timbre_callback();
int _AIL_API_set_sequence_user_data();
int _AIL_API_sequence_user_data();
int _AIL_API_register_ICA_array();
int _AIL_API_lock_channel();
int _AIL_API_release_channel();
int _AIL_API_map_sequence_channel();
int _AIL_API_true_sequence_channel();
int _AIL_API_send_channel_voice_message();
int _AIL_API_send_sysex_message();
int AILXMIDI_end();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AILXMIDI_H_
/******************************************************************************/
