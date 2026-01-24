#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationTransformParam_t.h"
#include "HbkGimmickAnimationTransformExtIntParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationTransformExtIntParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformParam_t> TransformParamArray;
    
    HIBIKI_API FHbkGimmickAnimationTransformExtIntParam_t();
};

