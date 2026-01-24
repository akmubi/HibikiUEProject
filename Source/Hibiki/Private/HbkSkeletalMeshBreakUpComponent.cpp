#include "HbkSkeletalMeshBreakUpComponent.h"

UHbkSkeletalMeshBreakUpComponent::UHbkSkeletalMeshBreakUpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FTransform UHbkSkeletalMeshBreakUpComponent::GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const {
    return FTransform{};
}

FRotator UHbkSkeletalMeshBreakUpComponent::GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const {
    return FRotator{};
}

FVector UHbkSkeletalMeshBreakUpComponent::GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const {
    return FVector{};
}


