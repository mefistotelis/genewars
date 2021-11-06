/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file listsamp.hpp
 *     Header file for listsamp.cpp.
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
#ifndef BFSOUNDLIB_LISTSAMP_H_
#define BFSOUNDLIB_LISTSAMP_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct __1th3moDIG_DDT DIG_DDT;

struct __3n9rjlDIG_DST { // sizeof=10
    REALFAR DMA_buffer_A; // offset=0
    REALFAR DMA_buffer_B; // offset=4
    WORD active_buffer; // offset=8
};

typedef struct __3n9rjlDIG_DST DIG_DST;

struct __1se9k3IO_PARMS { // sizeof=24
    WORD IO; // offset=0
    WORD IRQ; // offset=2
    WORD DMA_8_bit; // offset=4
    WORD DMA_16_bit; // offset=6
    LONG IO_reserved[3]; // offset=8
};

typedef struct __1se9k3IO_PARMS IO_PARMS;

struct __24e741VDI_HDR { // sizeof=10
    BYTE ID[7]; // offset=0
    ULONG driver_version; // offset=8
    REALFAR common_IO_configurations; // offset=12
    UWORD num_IO_configurations; // offset=16
    REALFAR environment_string; // offset=18
    IO_PARMS IO; // offset=22
    WORD service_rate; // offset=46
    UWORD busy; // offset=48
    UWORD driver_num; // offset=50
    UWORD this_ISR; // offset=52
    REALFAR prev_ISR; // offset=54
    BYTE scratch[127]; // offset=58
    BYTE dev_name[79]; // offset=186
};

typedef struct __24e741VDI_HDR VDI_HDR;

struct __3f9o8oAIL_DRIVER { // sizeof=44
    REALFAR seg; // offset=0
    ULONG sel; // offset=4
    void *buf; // offset=8
    ULONG size; // offset=12
    VDI_HDR *VHDR; // offset=16
    LONG type; // offset=20
    LONG initialized; // offset=24
    LONG PM_ISR; // offset=28
    HTIMER server; // offset=32
    void (*destructor)(void *arg1); // offset=36
    void *descriptor; // offset=40
};

typedef struct __3f9o8oAIL_DRIVER AIL_DRIVER;

typedef struct _SAMPLE SAMPLE;

struct _DIG_DRIVER { // sizeof=140
    AIL_DRIVER *drvr; // offset=0
    DIG_DDT *DDT; // offset=4
    DIG_DST *DST; // offset=8
    HTIMER timer; // offset=12
    LONG half_buffer_size; // offset=16
    LONG DMA_rate; // offset=20
    LONG hw_format; // offset=24
    ULONG hw_mode_flags; // offset=28
    REALFAR DMA_seg; // offset=32
    ULONG DMA_sel; // offset=36
    void *DMA_buf; // offset=40
    void *DMA[1]; // offset=44
    WORD *buffer_flag; // offset=52
    LONG last_buffer; // offset=56
    LONG channels_per_sample; // offset=60
    LONG bytes_per_channel; // offset=64
    LONG channels_per_buffer; // offset=68
    LONG samples_per_buffer; // offset=72
    LONG build_size; // offset=76
    LONG *build_buffer; // offset=80
    LONG playing; // offset=84
    LONG quiet; // offset=88
    SAMPLE *samples; // offset=92
    LONG n_samples; // offset=96
    LONG n_active_samples; // offset=100
    LONG master_volume; // offset=104
    LONG system_data[7]; // offset=108
};

typedef struct _DIG_DRIVER _DIG_DRIVER;

struct _SAMPLE { // sizeof=148
    _DIG_DRIVER *driver; // offset=0
    ULONG status; // offset=4
    void *start[1]; // offset=8
    ULONG len[1]; // offset=16
    ULONG pos[1]; // offset=24
    ULONG done[1]; // offset=32
    LONG current_buffer; // offset=40
    LONG last_buffer; // offset=44
    LONG loop_count; // offset=48
    LONG format; // offset=52
    ULONG flags; // offset=56
    LONG playback_rate; // offset=60
    LONG volume; // offset=64
    LONG pan; // offset=68
    CALLBACK SOB; // offset=72
    LONG vol_scale[1][255]; // offset=73
    CALLBACK EOB; // offset=76
    CALLBACK EOS; // offset=80
    LONG user_data[7]; // offset=84
    LONG system_data[7]; // offset=116
};

typedef SAMPLE *HSAMPLE;

void cb_sample_queue_callback( _SAMPLE * );
int PlaySampleList();
int StopSampleQueueList();
extern char unsigned sample_queue_handle_stopped;
extern long unsigned volatile current_sample_queue_count;
extern char unsigned sample_queue_handle_initiated;
extern _SAMPLE * sample_queue_handle;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_LISTSAMP_H_
/******************************************************************************/
