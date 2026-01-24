#pragma once
#include "CoreMinimal.h"
#include "Components/SkinnedMeshComponent.h"
#include "HbkGimmickScaleAnimData_t.h"
#include "HbkGimmickBoneScaleAnimData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneScaleAnimData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneSpaces::Type> BoneSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickScaleAnimData_t boneScaleData;
    
    HIBIKI_API FHbkGimmickBoneScaleAnimData_t();
};

