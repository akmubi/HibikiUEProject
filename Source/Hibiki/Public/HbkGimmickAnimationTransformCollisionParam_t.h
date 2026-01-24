#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationTransformParam_t.h"
#include "HbkGimmickAnimationTransformCollisionParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationTransformCollisionParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> TransformParamArray;
    
    HIBIKI_API FHbkGimmickAnimationTransformCollisionParam_t();
};

