#include "HbkGimmick_BreakBase_GimmickSoundInfo_t.h"

FHbkGimmick_BreakBase_GimmickSoundInfo_t::FHbkGimmick_BreakBase_GimmickSoundInfo_t() {
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

