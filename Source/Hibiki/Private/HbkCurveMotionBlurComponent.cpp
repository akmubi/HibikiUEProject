#include "HbkCurveMotionBlurComponent.h"

UHbkCurveMotionBlurComponent::UHbkCurveMotionBlurComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NormalDotProductBias = 0.00f;
    this->CameraAngleBias = 45.00f;
    this->BlurFrame = 10;
    this->MeshComp = NULL;
}


