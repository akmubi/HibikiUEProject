#include "HbkGimmickVfxRangeInfo_t.h"

FHbkGimmickVfxRangeInfo_t::FHbkGimmickVfxRangeInfo_t() {
    this->ParticleNum = 0;
    this->RangeType = EHbkGimmickVfxRange::None;
    this->Radius = 0.00f;
    this->Height = 0.00f;
    this->BoxExtent = FVector(0.0f);
    this->RelativeLocation = FVector(0.0f);
}

