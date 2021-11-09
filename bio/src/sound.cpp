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

char unsigned SoundTag::IsNewSample()
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

char unsigned SoundRequest::Valid()
{
// code at 0001:000392c4
}

void SpeechFileStatus::Invalidate()
{
// code at 0001:000392a0
}

char unsigned SpeechFileStatus::Valid()
{
// code at 0001:00039268
}

char unsigned MapDisplay::IsExploredTerrainInView()
{
// code at 0001:0003923c
}

char unsigned IFCBase::IsCurrent()
{
// code at 0001:00039204
}

void SoundManager::StopSpeech()
{
// code at 0001:00039138
}

void SoundManager::FreeRequest( SoundRequest * )
{
// code at 0001:000390e8
}

near SoundManager::SoundManager( XY & )
{
// code at 0001:00037a58
}

void SoundManager::PlayCDTrack( char unsigned )
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

void SoundManager::StopSound( char unsigned, SampleID )
{
// code at 0001:00038043
}

SampleInfo * SoundManager::GetSampleInfo( long unsigned, SampleID )
{
// code at 0001:000380a3
}

SoundRequest * SoundManager::GetSoundReq( long unsigned, SampleID )
{
// code at 0001:0003810a
}

SoundRequest * SoundManager::GetSoundReq( Thing *, SoundRequest *, char unsigned )
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

void SoundManager::ChangeAmbientVolume( char unsigned )
{
// code at 0001:000382fd
}

char unsigned SoundManager::ComputeVolume( XY, char unsigned )
{
// code at 0001:00038355
}

char unsigned SoundManager::ComputePan( XY )
{
// code at 0001:000383fa
}

void SoundManager::ProcessSounds()
{
// code at 0001:000384da
}

void SoundManager::SubmitSoundRequest( SoundRequest & )
{
// code at 0001:000388fa
}

char unsigned SoundManager::CanSamplePlay( long unsigned, SampleID, char unsigned )
{
// code at 0001:00038b71
}

void SoundManager::Sound( Thing *, SampleID, char unsigned, char unsigned, char unsigned, long unsigned )
{
// code at 0001:00038c07
}

void SoundManager::Sound( char unsigned, SampleID, char unsigned, char unsigned, char unsigned, long unsigned, char unsigned )
{
// code at 0001:00038c9e
}

void SoundManager::Sound( Thing *, char *, BufferSubmitMode, char unsigned, char unsigned, char unsigned, long unsigned )
{
// code at 0001:00038d34
}

void SoundManager::Sound( char unsigned, char *, BufferSubmitMode, char unsigned, char unsigned, char unsigned, long unsigned, char unsigned )
{
// code at 0001:00038e28
}

void SoundManager::SubmitBufferedSound( char *, SoundRequest & )
{
// code at 0001:00038f20
}

char unsigned SampleBufferQueue::Add( char *, SoundRequest & )
{
// code at 0001:00038f74
}

char * SampleBufferQueue::GetNext( SoundRequest & )
{
// code at 0001:0003900d
}

char unsigned SoundManager::IsNarratorSpeaking()
{
// code at 0001:000780a4
}

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
