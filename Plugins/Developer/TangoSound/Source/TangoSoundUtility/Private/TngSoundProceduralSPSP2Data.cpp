#include "TngSoundProceduralSPSP2Data.h"

FTngSoundProceduralSPSP2Data::FTngSoundProceduralSPSP2Data() {
    this->bTargetSMA = false;
    this->bTargetISMC = false;
    this->bTargetFISMC = false;
    this->bTargetUMSMC = false;
    this->TickInterval = 0.00f;
    this->AkEvent = NULL;
    this->AttenuationScalingFactor = 0.00f;
    this->OcclusionRefleshInterval = 0.00f;
    this->OcclusionCollisionChannel = ECC_WorldStatic;
    this->bUseGenerationVolume = false;
}

