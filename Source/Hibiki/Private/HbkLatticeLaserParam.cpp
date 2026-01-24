#include "HbkLatticeLaserParam.h"

FHbkLatticeLaserParam::FHbkLatticeLaserParam() {
    this->Type = EHbkLatticeLaserType::None;
    this->Index = 0;
    this->LocationIndex = 0;
    this->NewLocationIndex = 0;
    this->LocalLocation = FVector(0.0f);
}

