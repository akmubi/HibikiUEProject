#include "TngSoundProceduralMPLData.h"

FTngSoundProceduralMPLData::FTngSoundProceduralMPLData() {
    this->bTargetSMA = false;
    this->bTargetISMC = false;
    this->bTargetFISMC = false;
    this->bTargetUMSMC = false;
    this->AkAuxBus = NULL;
    this->SendValue = 0.00f;
    this->OcclusionCollisionChannel = ECC_WorldStatic;
    this->OcclusionRefreshInterval = 0.00f;
    this->ChangeRoomType = AkChangeRoomType::Always;
    this->bUseGenerationVolume = false;
}

