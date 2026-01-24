#include "TngAnimNode_TwoBoneFootIK.h"

FTngAnimNode_TwoBoneFootIK::FTngAnimNode_TwoBoneFootIK() {
    this->bEnableAdjustShapeMode = false;
    this->bEnableDrawCollisionShape = false;
    this->bEnableDrawCollisionQuery = false;
    this->PelvisZ_LowFootAlpha = 0.00f;
    this->PelvisZ_UpslopeMultiplier = 0.00f;
    this->PelvisZ_DownslopeMultiplier = 0.00f;
    this->MaxHipToFootLengthRatio = 0.00f;
    this->LeftKneeForwardAxis = ETngTwoBoneAxis::PositiveX;
    this->RightKneeForwardAxis = ETngTwoBoneAxis::PositiveX;
    this->LeftSoleZ = 0.00f;
    this->RightSoleZ = 0.00f;
    this->bEnableSmoothing = false;
    this->FootMaxVelocityZ = 0.00f;
    this->PelvisMaxVelocityZ = 0.00f;
    this->FootZ_InterpSpeed = 0.00f;
    this->PelvisZ_InterpSpeed = 0.00f;
    this->TeleportVelocityZ_Threshold = 0.00f;
    this->FootMaxRotVelocity = 0.00f;
    this->bTraceComplexOnly = false;
    this->TraceChannel = ECC_WorldStatic;
    this->Shape = ETngTwoBoneFootIKQueryShape::Line;
    this->bUseSocketForLeftQuery = false;
    this->LeftOffsetZ = 0.00f;
    this->LeftOffsetX_Axis = ETngTwoBoneAxis::PositiveX;
    this->bUseSocketForRightQuery = false;
    this->RightOffsetZ = 0.00f;
    this->RightOffsetX_Axis = ETngTwoBoneAxis::PositiveX;
    this->TraceStartOffset = 0.00f;
    this->TraceEndOffset = 0.00f;
    this->NormalDotThreshold = 0.00f;
    this->TraceMaxXY_Radius = 0.00f;
    this->MovementComponent = NULL;
    this->LeftHalfExtent = FVector(0.0f);
    this->LeftOffsetXY = FVector2D(0.0f);
    this->RightHalfExtent = FVector(0.0f);
    this->RightOffsetXY = FVector2D (0.0f);
}

