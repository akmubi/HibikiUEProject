#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimationFlickParam_t.h"
#include "HbkGimmickAnimationFlickExtIntParam_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimationFlickExtIntParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickParam_t> FlickParamArray;
    
    HIBIKI_API FHbkGimmickAnimationFlickExtIntParam_t();
};

