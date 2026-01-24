#include "HbkEm6000_StageHatchComponent.h"

UHbkEm6000_StageHatchComponent::UHbkEm6000_StageHatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockingVolumeOffsetForLatticeLaserOn = 300.00f;
    this->BlockingVolumeOffsetForLatticeLaserOff = 500.00f;
}

void UHbkEm6000_StageHatchComponent::ToggleCurrentHatchType() {
}

void UHbkEm6000_StageHatchComponent::SetSystemEnable(bool bIsEnable) {
}

void UHbkEm6000_StageHatchComponent::SetCurrentHatchType(EHbkEm6000_HatchType HatchType) {
}

void UHbkEm6000_StageHatchComponent::SetActivatedLatticeLaser(bool bIsActivated) {
}

void UHbkEm6000_StageHatchComponent::OpenHatch(EHbkEm6000_HatchType HatchType) {
}

void UHbkEm6000_StageHatchComponent::OpenCurrentHatch() {
}

bool UHbkEm6000_StageHatchComponent::IsSystemEnabled() const {
    return false;
}

bool UHbkEm6000_StageHatchComponent::IsPlayerEnteredCurrentHatchSide() const {
    return false;
}

bool UHbkEm6000_StageHatchComponent::IsActivatedLatticeLaser() const {
    return false;
}

EHbkEm6000_HatchType UHbkEm6000_StageHatchComponent::GetInverseHatchType(EHbkEm6000_HatchType HatchType) const {
    return EHbkEm6000_HatchType::North;
}

FVector UHbkEm6000_StageHatchComponent::GetHatchToCenterVector(EHbkEm6000_HatchType HatchType) const {
    return FVector{};
}

FVector UHbkEm6000_StageHatchComponent::GetHatchLocation(EHbkEm6000_HatchType HatchType) const {
    return FVector{};
}

AHbkGimmick_bg0180* UHbkEm6000_StageHatchComponent::GetHatchActor(EHbkEm6000_HatchType HatchType) const {
    return NULL;
}

EHbkEm6000_HatchType UHbkEm6000_StageHatchComponent::GetCurrentHatchType() const {
    return EHbkEm6000_HatchType::North;
}

FVector UHbkEm6000_StageHatchComponent::GetCurrentHatchToCenterVector() const {
    return FVector{};
}

FVector UHbkEm6000_StageHatchComponent::GetCurrentHatchLocation() const {
    return FVector{};
}

AHbkGimmick_bg0180* UHbkEm6000_StageHatchComponent::GetCurrentHatchActor() const {
    return NULL;
}


