#include "TngSoundProceduralSAVData.h"

FTngSoundProceduralSAVData::FTngSoundProceduralSAVData() {
    this->EnableRoom = false;
    this->Priority = 0.00f;
    this->WallOcclusion = 0.00f;
    this->IgnoreEnvEvents = false;
    this->EnvEventsFadeOutTime = 0.00f;
    this->EnvEvent_0 = NULL;
    this->EnvEvent_1 = NULL;
    this->InEvent_0 = NULL;
    this->OutEvent_0 = NULL;
    this->EnableLateReverb = false;
    this->AuxBus = NULL;
    this->SendLevel = 0.00f;
    this->FadeRate = 0.00f;
    this->EnableVolumeSpeaker = false;
    this->SphereTickInterval = 0.00f;
    this->SphereEvent_0 = NULL;
}

