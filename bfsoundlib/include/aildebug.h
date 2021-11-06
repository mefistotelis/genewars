/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file aildebug.h
 *     Header file for aildebug.c.
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
#ifndef BFSOUNDLIB_AILDEBUG_H_
#define BFSOUNDLIB_AILDEBUG_H_

#ifdef __cplusplus
extern "C" {
#endif

int AILDEBUG_start();
int _TIME_callback();
int TIME_write();
int _AIL_startup();
int _AIL_shutdown();
int _AIL_set_preference();
int _AIL_lock();
int _AIL_unlock();
int _AIL_get_real_vect();
int _AIL_set_real_vect();
int _AIL_set_USE16_ISR();
int _AIL_restore_USE16_ISR();
int _AIL_disable_interrupts();
int _AIL_restore_interrupts();
int _AIL_call_driver();
int _AIL_delay();
int _AIL_background();
int _AIL_read_INI();
int _AIL_register_timer();
int _AIL_set_timer_user();
int _AIL_set_timer_period();
int _AIL_set_timer_frequency();
int _AIL_set_timer_divisor();
int _AIL_interrupt_divisor();
int _AIL_start_timer();
int _AIL_start_all_timers();
int _AIL_stop_timer();
int _AIL_stop_all_timers();
int _AIL_release_timer_handle();
int _AIL_release_all_timers();
int _AIL_get_IO_environment();
int _AIL_install_driver();
int _AIL_uninstall_driver();
int _AIL_install_DIG_INI();
int _AIL_install_DIG_driver_file();
int _AIL_uninstall_DIG_driver();
int _AIL_allocate_sample_handle();
int _AIL_allocate_file_sample();
int _AIL_release_sample_handle();
int _AIL_init_sample();
int _AIL_set_sample_file();
int _AIL_set_sample_address();
int _AIL_set_sample_type();
int _AIL_start_sample();
int _AIL_stop_sample();
int _AIL_resume_sample();
int _AIL_end_sample();
int _AIL_set_sample_playback_rate();
int _AIL_set_sample_volume();
int _AIL_set_sample_pan();
int _AIL_set_sample_loop_count();
int _AIL_sample_status();
int _AIL_sample_playback_rate();
int _AIL_sample_volume();
int _AIL_sample_pan();
int _AIL_sample_loop_count();
int _AIL_set_digital_master_volume();
int _AIL_digital_master_volume();
int _AIL_install_DIG_driver_image();
int _AIL_minimum_sample_buffer_size();
int _AIL_sample_buffer_ready();
int _AIL_load_sample_buffer();
int _AIL_set_sample_position();
int _AIL_sample_position();
int _AIL_register_SOB_callback();
int _AIL_register_EOB_callback();
int _AIL_register_EOS_callback();
int _AIL_register_EOF_callback();
int _AIL_set_sample_user_data();
int _AIL_sample_user_data();
int _AIL_active_sample_count();
int _AIL_install_MDI_INI();
int _AIL_install_MDI_driver_file();
int _AIL_uninstall_MDI_driver();
int _AIL_allocate_sequence_handle();
int _AIL_release_sequence_handle();
int _AIL_init_sequence();
int _AIL_start_sequence();
int _AIL_stop_sequence();
int _AIL_resume_sequence();
int _AIL_end_sequence();
int _AIL_set_sequence_tempo();
int _AIL_set_sequence_volume();
int _AIL_set_sequence_loop_count();
int _AIL_sequence_status();
int _AIL_sequence_tempo();
int _AIL_sequence_volume();
int _AIL_sequence_loop_count();
int _AIL_set_XMIDI_master_volume();
int _AIL_XMIDI_master_volume();
int _AIL_install_MDI_driver_image();
int _AIL_MDI_driver_type();
int _AIL_set_GTL_filename_prefix();
int _AIL_timbre_status();
int _AIL_install_timbre();
int _AIL_protect_timbre();
int _AIL_unprotect_timbre();
int _AIL_active_sequence_count();
int _AIL_controller_value();
int _AIL_channel_notes();
int _AIL_sequence_position();
int _AIL_branch_index();
int _AIL_register_prefix_callback();
int _AIL_register_trigger_callback();
int _AIL_register_sequence_callback();
int _AIL_register_beat_callback();
int _AIL_register_event_callback();
int _AIL_register_timbre_callback();
int _AIL_set_sequence_user_data();
int _AIL_sequence_user_data();
int _AIL_register_ICA_array();
int _AIL_lock_channel();
int _AIL_release_channel();
int _AIL_map_sequence_channel();
int _AIL_true_sequence_channel();
int _AIL_send_channel_voice_message();
int _AIL_send_sysex_message();
int _AIL_create_wave_synthesizer();
int _AIL_destroy_wave_synthesizer();
int AILDEBUG_end();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AILDEBUG_H_
/******************************************************************************/
