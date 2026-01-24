#include "HbkToonMaskingParamData.h"

FHbkToonMaskingParamData::FHbkToonMaskingParamData() {
    this->bHideOccludingActors = false;
    this->bHideOccludingActorsUsingCustomVisibility = false;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->SphereSweepRadius = 0.00f;
    this->SphereSweepEndOffset = 0.00f;
    this->bUseLineTraceMultiByObjectType = false;
    this->bEndToonMaskingForSequencer = false;
    this->bUseDepthPriorityGroupInsteadOfSphereTracing = false;
    this->bIsStealTheShowPatch = false;
}

