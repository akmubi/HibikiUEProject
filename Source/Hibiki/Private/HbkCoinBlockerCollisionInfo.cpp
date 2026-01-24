#include "HbkCoinBlockerCollisionInfo.h"

FHbkCoinBlockerCollisionInfo::FHbkCoinBlockerCollisionInfo() {
    this->bAttachRotationYawOnly = false;
    this->bAdjustLanding = false;
    this->FootMargin = 0.00f;
    this->AdjustLandingOffsetZ = 0.00f;
    this->bMoving = false;
    this->bScaling = false;
    this->ScalingValue = 0.00f;
    this->CollisionType = EHbkCoinBlockerCollisionType::None;
    this->CollisionRadius = 0.00f;
    this->CapsuleCollisionHalfHeight = 0.00f;
    this->OffsetLocation = FVector(0.0f);
    this->OffsetRotation = FRotator(0.0f);
    this->OffsetScale = FVector(0.0f);
    this->MovingSpeed = FVector(0.0f);
}

