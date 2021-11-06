/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file cd_ctrl.cpp
 *     Implementation of related functions.
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
#include "cd_ctrl.h"

struct dostime_t { // from Watcom - TO BE REPLACED
        unsigned char hour;     /* 0-23 */
        unsigned char minute;   /* 0-59 */
        unsigned char second;   /* 0-59 */
        unsigned char hsecond;  /* 1/100 second; 0-99 */
};

char line[2]; // size TBD

unsigned long sector;

unsigned short c;

unsigned short status;

unsigned short current_da_track;

unsigned short sample_number;

char unsigned min;

char unsigned sec;

char unsigned frame;

unsigned long da_sample_time;

unsigned long sample_da_time;

dostime_t start_time;

dostime_t stop_time;

unsigned long track_start_sector[2]; // size TBD

unsigned long track_lengths[2]; // size TBD

char unsigned is_da_track[2]; // size TBD

char unsigned cd_lowest_track;

char unsigned cd_highest_track;

char signed CD_Audio_Playing;

char unsigned InitialCDVolume;

unsigned long cd_ioctli_low_mem;

unsigned long cd_data_low_mem;

unsigned short cd_total;

unsigned short cd_first;

s_HeadLocationInfo HeadLocationInfo;

s_DeviceStatusInfo DeviceStatusInfo;

s_AudioDiscInfo AudioDiscInfo;

s_AudioTrackInfo AudioTrackInfo;

s_AudioQChannelInfo AudioQChannelInfo;

s_AudioStatusInfo AudioStatusInfo;

s_IOCTLI IOCTLI;

s_SeekReq SeekReq;

s_PlayReq PlayReq;

s_StopReq StopReq;

s_ResumeReq ResumeReq;

s_IOCTLI VolumeReq;

unsigned long control_real;

int GetCDTrackLength()
{
// code at 0001:000bdfb0
}

int GetCDTrackStartSector()
{
// code at 0001:000bdfc0
}

int is_daudio_track()
{
// code at 0001:000bdfd0
}

unsigned long mmssff_to_sector( unsigned long )
{
// code at 0001:000bdfe0
}

unsigned short cd_mem_init()
{
// code at 0001:000be050
}

unsigned long cd_check()
{
// code at 0001:000be090
}

unsigned short cd_getheadlocationinfo( unsigned short )
{
// code at 0001:000be110
}

int cd_getdevicestatus()
{
// code at 0001:000be200
}

unsigned short cd_getaudiodiscinfo( unsigned short )
{
// code at 0001:000be2f0
}

unsigned short cd_getaudiotrackinfo( unsigned short, unsigned short )
{
// code at 0001:000be3f0
}

unsigned short cd_getqchannelinfo( unsigned short )
{
// code at 0001:000be4e0
}

unsigned long mscdex_version()
{
// code at 0001:000be5d0
}

unsigned short cd_getaudiostatusinfo( unsigned short )
{
// code at 0001:000be630
}

unsigned short cd_seek( unsigned short, unsigned long )
{
// code at 0001:000be720
}

int cd_play()
{
// code at 0001:000be7f0
}

int cd_stop()
{
// code at 0001:000be8e0
}

int cd_resume()
{
// code at 0001:000be9a0
}

int cd_init()
{
// code at 0001:000bea60
}

void list_cd_tracks()
{
// code at 0001:000becf0
}

int GetCDTracks()
{
// code at 0001:000bed00
}

int cd_start_da_play()
{
// code at 0001:000bed10
}

void usage()
{
// code at 0001:000bed60
}

void report_cd_head_location()
{
// code at 0001:000bed70
}

void prompt()
{
// code at 0001:000bed70
}

unsigned long time_diff( dostime_t, dostime_t )
{
// code at 0001:000bee20
}

int GetCDFirst()
{
// code at 0001:000beeb0
}

int start_cd_track( char unsigned )
{
// code at 0001:000beec0
}

int FreeCDAudio()
{
// code at 0001:000bef20
}

int SetCDAudioVolume()
{
// code at 0001:000bef80
}

int GetCDAudioVolume()
{
// code at 0001:000bf0d0
}

char * cd_errors[2]; // size TBD

unsigned long control_selector;

char unsigned * control_prot;


/******************************************************************************/
