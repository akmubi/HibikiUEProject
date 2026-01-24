#pragma once
#include "CoreMinimal.h"
#include "Components/SkinnedMeshComponent.h"
#include "HbkGimmickRotateAnimData_t.h"
#include "HbkGimmickBoneRotateAnimData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneRotateAnimData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneSpaces::Type> BoneSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotateAnimData_t boneRotateData;
    
    HIBIKI_API FHbkGimmickBoneRotateAnimData_t();
};

