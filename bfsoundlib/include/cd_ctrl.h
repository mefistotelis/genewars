/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file cd_ctrl.hpp
 *     Header file for cd_ctrl.cpp.
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
#ifndef BFSOUNDLIB_CD_CTRL_H_
#define BFSOUNDLIB_CD_CTRL_H_

#ifdef __cplusplus
extern "C" {
#endif

struct s_HeadLocationInfo { // sizeof=unknown
    int a1;
};

typedef struct s_HeadLocationInfo s_HeadLocationInfo;

struct s_DeviceStatusInfo { // sizeof=unknown
    int a1;
};

typedef struct s_DeviceStatusInfo s_DeviceStatusInfo;

struct s_AudioDiscInfo { // sizeof=unknown
    int a1;
};

typedef struct s_AudioDiscInfo s_AudioDiscInfo;

struct s_AudioTrackInfo { // sizeof=unknown
    int a1;
};

typedef struct s_AudioTrackInfo s_AudioTrackInfo;

struct s_AudioQChannelInfo { // sizeof=unknown
    int a1;
};

typedef struct s_AudioQChannelInfo s_AudioQChannelInfo;

struct s_AudioStatusInfo { // sizeof=unknown
    int a1;
};

typedef struct s_AudioStatusInfo s_AudioStatusInfo;

struct s_IOCTLI { // sizeof=unknown
    int a1;
};

typedef struct s_IOCTLI s_IOCTLI;

struct s_SeekReq { // sizeof=unknown
    int a1;
};

typedef struct s_SeekReq s_SeekReq;

struct s_PlayReq { // sizeof=unknown
    int a1;
};

typedef struct s_PlayReq s_PlayReq;

struct s_StopReq { // sizeof=unknown
    int a1;
};

typedef struct s_StopReq s_StopReq;

struct s_ResumeReq { // sizeof=unknown
    int a1;
};

typedef struct s_ResumeReq s_ResumeReq;


extern char line[];
extern long unsigned sector;
extern short unsigned c;
extern short unsigned status;
extern short unsigned current_da_track;
extern short unsigned sample_number;
extern char unsigned min;
extern char unsigned sec;
extern char unsigned frame;
extern long unsigned da_sample_time;
extern long unsigned sample_da_time;
extern long unsigned track_start_sector[];
extern long unsigned track_lengths[];
extern char unsigned is_da_track[];
extern char unsigned cd_lowest_track;
extern char unsigned cd_highest_track;
extern char signed CD_Audio_Playing;
extern char unsigned InitialCDVolume;
extern long unsigned cd_ioctli_low_mem;
extern long unsigned cd_data_low_mem;
extern short unsigned cd_total;
extern short unsigned cd_first;
extern s_HeadLocationInfo HeadLocationInfo;
extern s_DeviceStatusInfo DeviceStatusInfo;
extern s_AudioDiscInfo AudioDiscInfo;
extern s_AudioTrackInfo AudioTrackInfo;
extern s_AudioQChannelInfo AudioQChannelInfo;
extern s_AudioStatusInfo AudioStatusInfo;
extern s_IOCTLI IOCTLI;
extern s_SeekReq SeekReq;
extern s_PlayReq PlayReq;
extern s_StopReq StopReq;
extern s_ResumeReq ResumeReq;
extern s_IOCTLI VolumeReq;
extern long unsigned control_real;
int GetCDTrackLength();
int GetCDTrackStartSector();
int is_daudio_track();
long unsigned mmssff_to_sector( long unsigned );
short unsigned cd_mem_init();
long unsigned cd_check();
short unsigned cd_getheadlocationinfo( short unsigned );
int cd_getdevicestatus();
short unsigned cd_getaudiodiscinfo( short unsigned );
short unsigned cd_getaudiotrackinfo( short unsigned, short unsigned );
short unsigned cd_getqchannelinfo( short unsigned );
long unsigned mscdex_version();
short unsigned cd_getaudiostatusinfo( short unsigned );
short unsigned cd_seek( short unsigned, long unsigned );
int cd_play();
int cd_stop();
int cd_resume();
int cd_init();
void list_cd_tracks();
int GetCDTracks();
int cd_start_da_play();
void usage();
void report_cd_head_location();
void prompt();
int GetCDFirst();
int start_cd_track( char unsigned );
int FreeCDAudio();
int SetCDAudioVolume();
int GetCDAudioVolume();
extern char * cd_errors[];
extern long unsigned control_selector;
extern char unsigned * control_prot;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_CD_CTRL_H_
/******************************************************************************/
