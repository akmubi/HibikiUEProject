#include "HbkGimmick_CylinderCameraController.h"

AHbkGimmick_CylinderCameraController::AHbkGimmick_CylinderCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BlendInTime = 1.00f;
    this->BlendInFunc = VTBlend_Cubic;
    this->BlendInExp = 0.00f;
    this->bBlendInLockOutgoing = false;
    this->BlendOutTime = 1.00f;
    this->BlendOutFunc = VTBlend_Cubic;
    this->BlendOutExp = 0.00f;
    this->bBlendOutLockOutgoing = false;
}


