#include "TngAnimNode_TwoBoneCollisionIK.h"

FTngAnimNode_TwoBoneCollisionIK::FTngAnimNode_TwoBoneCollisionIK() {
    this->bMaintainEffectorRelRot = false;
    this->bAllowTwist = false;
    this->bLimitTransOneFrame = false;
    this->MaxTransOneFrame = 0.00f;
    this->DurationFrame = 0;
    this->TraceChannel = ECC_WorldStatic;
    this->SphereRadius = 0.00f;
    this->TraceStartOffset = 0.00f;
    this->TraceEndOffset = 0.00f;
    this->bEnableDebugDraw = false;
}

