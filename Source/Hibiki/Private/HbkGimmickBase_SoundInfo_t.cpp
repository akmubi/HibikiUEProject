#include "HbkGimmickBase_SoundInfo_t.h"

FHbkGimmickBase_SoundInfo_t::FHbkGimmickBase_SoundInfo_t() {
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->AttenuationScalingFactor = 0.00f;
    this->bUseReverbVolumes = false;
    this->SetComponentTickEnabledWhenPlayingOnly = false;
    this->RoomComponentRefreshInterval = 0.00f;
    this->ChangeRoomType = AkChangeRoomType::Always;
    this->OcclusionCollisionChannel = ECC_WorldStatic;
    this->OcclusionRefreshInterval = 0.00f;
    this->Location = FVector(0.0f);
}

