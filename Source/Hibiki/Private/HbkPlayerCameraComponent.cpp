#include "HbkPlayerCameraComponent.h"

UHbkPlayerCameraComponent::UHbkPlayerCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseInCombatArmLength = 75.00f;
    this->InCombatArmLengthMax = 300.00f;
    this->InCombatAddFOVMax = 10.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->CapsuleHalfHight = 50.00f;
    this->CapsuleRadius = 25.00f;
    this->CapsuleHightOffset = 25.00f;
    this->BaseHeight = 200.00f;
    this->BaseDist = 750.00f;
    this->CombatCameraRateHeight = 400.00f;
    this->CameraRectOffsetZ = 300.00f;
    this->bForceCameraHeightOffset = false;
}

void UHbkPlayerCameraComponent::SetPermanentAppendCameraParam(const FHbkCameraAppendParam& AppendParam, FHbkCameraBlendParam BlendIn) {
}

void UHbkPlayerCameraComponent::ResetPermanentAppendCameraParam(FHbkCameraBlendParam BlendOut) {
}


