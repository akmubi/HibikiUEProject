#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationFlickParam_t.h"
#include "HbkGimmickAnimationFlickCollisionParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationFlickCollisionParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> FlickParamArray;
    
    HIBIKI_API FHbkGimmickAnimationFlickCollisionParam_t();
};

