/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file sound.cpp
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
#include "sound.hpp"

SoundManager::SoundManager(XY cor1)
{
  // code at 0001:00037a58
  this->origin = cor1;
  for (int i = 0; i < 18; i++)
    this->speech[i].Invalidate();
}

BBOOL SoundTag::IsNewSample()
{
// code at 0001:00039344
}

void SoundTag::SetNewSample()
{
// code at 0001:00039320
}

void SoundRequest::Invalidate()
{
// code at 0001:000392fc
}

BBOOL SoundRequest::Valid()
{
// code at 0001:000392c4
}

void SpeechFileStatus::Invalidate()
{
// code at 0001:000392a0
}

BBOOL SpeechFileStatus::Valid()
{
// code at 0001:00039268
}

void SoundManager::StopSpeech()
{
// code at 0001:00039138
}

void SoundManager::FreeRequest( SoundRequest * )
{
// code at 0001:000390e8
}

void SoundManager::PlayCDTrack(UBYTE arg1)
{
// code at 0001:00037aae
}

void SoundManager::StopCD()
{
// code at 0001:00037ae9
}

void SoundManager::StartSpeech( SoundRequest * )
{
// code at 0001:00037b1c
}

void SoundManager::CloseAllSpeech()
{
// code at 0001:00037f6e
}

void SoundManager::KillAllSounds()
{
// code at 0001:00037fdf
}

void SoundManager::StopSound(UBYTE arg1, SampleID arg2)
{
// code at 0001:00038043
}

SampleInfo * SoundManager::GetSampleInfo(ULONG arg1, SampleID arg2)
{
// code at 0001:000380a3
}

SoundRequest * SoundManager::GetSoundReq(ULONG arg1, SampleID arg2)
{
// code at 0001:0003810a
}

SoundRequest * SoundManager::GetSoundReq(Thing *arg1, SoundRequest *arg2, BBOOL arg3)
{
// code at 0001:00038173
}

void SoundManager::RegisterFreedThing( Thing * )
{
// code at 0001:0003820d
}

void SoundManager::ChangeAmbientSample( SampleID )
{
// code at 0001:0003825e
}

void SoundManager::SilenceAmbientSample()
{
// code at 0001:000382a9
}

void SoundManager::ChangeAmbientVolume(UBYTE arg1)
{
// code at 0001:000382fd
}

UBYTE SoundManager::ComputeVolume(XY arg1, UBYTE arg2)
{
// code at 0001:00038355
}

UBYTE SoundManager::ComputePan(XY arg1)
{
// code at 0001:000383fa
}

void SoundManager::ProcessSounds()
{
// code at 0001:000384da
}

void SoundManager::SubmitSoundRequest(SoundRequest &arg1)
{
// code at 0001:000388fa
}

BBOOL SoundManager::CanSamplePlay(ULONG arg1, SampleID arg2, UBYTE arg3)
{
// code at 0001:00038b71
}

void SoundManager::Sound(Thing *tng1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6)
{
// code at 0001:00038c07
}

void SoundManager::Sound(UBYTE arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6, UBYTE arg7)
{
// code at 0001:00038c9e
}

void SoundManager::Sound(Thing *tng1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7)
{
// code at 0001:00038d34
}

void SoundManager::Sound(UBYTE arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7, UBYTE arg8)
{
// code at 0001:00038e28
}

void SoundManager::SubmitBufferedSound(char *arg1, SoundRequest &arg2)
{
// code at 0001:00038f20
}

char unsigned SampleBufferQueue::Add(char *arg1, SoundRequest &arg2)
{
// code at 0001:00038f74
}

char * SampleBufferQueue::GetNext(SoundRequest &arg1)
{
// code at 0001:0003900d
}

BBOOL SoundManager::IsNarratorSpeaking()
{
// code at 0001:000780a4
}

SoundRequest * SoundManager::GetSoundReq(Thing *tng1)
{
// code at 0001:00049ae8
}

BBOOL SoundManager::IsCDPlaying()
{
// code at 0001:0001909c
}

UBYTE SoundManager::NumRequests()
{
// code at 0001:0005f3f0
}

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00049b24
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00078134
}

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00078114
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:000780f4
}*/

/*long unsigned SoundManager::__defarg()
{
// code at 0001:000780d0
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00004a54
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00004a34
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00004a14
}*/

/*long unsigned SoundManager::__defarg()
{
// code at 0001:000049f0
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:000049d0
}*/

/*BufferSubmitMode SoundManager::__defarg()
{
// code at 0001:000049b0
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00004990
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00004970
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:00004950
}*/

/*long unsigned SoundManager::__defarg()
{
// code at 0001:0000492c
}*/

/*char unsigned SoundManager::__defarg()
{
// code at 0001:0000490c
}*/


/******************************************************************************/
