#pragma once
#include "CoreMinimal.h"
#include "Components/SkinnedMeshComponent.h"
#include "HbkGimmickTransAnimData_t.h"
#include "HbkGimmickBoneTransAnimData_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneTransAnimData_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneSpaces::Type> BoneSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransAnimData_t boneTransData;
    
    HIBIKI_API FHbkGimmickBoneTransAnimData_t();
};

