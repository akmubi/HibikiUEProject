#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HbkSkeletalMeshBreakUpComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSkeletalMeshBreakUpComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UHbkSkeletalMeshBreakUpComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const;
    
};

