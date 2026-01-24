#include "TngSoundProceduralCSData.h"

FTngSoundProceduralCSData::FTngSoundProceduralCSData() {
    this->ListSelectMode = TngSoundCandidateListSelectionMode::CoordinateDirection;
    this->PositionSelectMode = TngSoundCandidatePositionSelectionMode::NearestOnly;
    this->AkAudioEvent = NULL;
    this->AutoPost = false;
    this->ListDistance = 0.00f;
    this->ListUpdateInterval = 0.00f;
    this->TickInterval = 0.00f;
    this->FarestOnceProhibitionDistance = 0.00f;
    this->OcclusionCollisionChannel = ECC_WorldStatic;
    this->ChangeRoomType = AkChangeRoomType::Always;
    this->bUseGenerationVolume = false;
}

