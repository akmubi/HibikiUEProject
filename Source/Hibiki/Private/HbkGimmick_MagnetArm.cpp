#include "HbkGimmick_MagnetArm.h"

AHbkGimmick_MagnetArm::AHbkGimmick_MagnetArm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Type = EHbkGimmick_MagnetArmType::MagnetArm;
    this->HoldActorAdjuster = 0.00f;
    this->bAngleMoved = false;
    this->bArmMoved = false;
    this->ArmMoveSeRef = NULL;
}


