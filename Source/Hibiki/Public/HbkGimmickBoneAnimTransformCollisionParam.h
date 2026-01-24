#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBoneAnimTransformParam.h"
#include "HbkGimmickBoneAnimTransformCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneAnimTransformCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformParam> TransformParams;
    
    HIBIKI_API FHbkGimmickBoneAnimTransformCollisionParam();
};

