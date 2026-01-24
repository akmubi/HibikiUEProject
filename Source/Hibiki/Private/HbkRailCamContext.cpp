#include "HbkRailCamContext.h"

FHbkRailCamContext::FHbkRailCamContext() {
    this->FieldOfView = 0.00f;
    this->AroundType = EHbkRailCamAround::AtKey;
    this->AroundTypeAlpha = 0.00f;
    this->RailDistance = 0.00f;
    this->FollowInterpSpeed = 0.00f;
    this->FollowTargetHeightAlpha = 0.00f;
    this->bDisable = false;
    this->OffsetLocation = FVector(0.0f);
    this->OffsetRotation = FRotator(0.0f);
    this->KeyLocation = FVector(0.0f);
    this->AroundRotation = FRotator(0.0f);
}

