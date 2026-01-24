#include "HbkGimmick_VolcaneEruptionVolcaneBomb.h"

FHbkGimmick_VolcaneEruptionVolcaneBomb::FHbkGimmick_VolcaneEruptionVolcaneBomb() {
    this->SyncNote = EHbkNote::None;
    this->StayCount = 0;
    this->EruptionType = EHbkAHbkGimmick_VolcaneEruptionType::Random;
    this->VolcaneBombType = EHbkAHbkGimmick_VolcaneBombType::Attack;
    this->EruptionPoint = EHbkAHbkGimmick_VolcaneEruptionPoint::Marker;
    this->VolcaneBombMarker = NULL;
}

