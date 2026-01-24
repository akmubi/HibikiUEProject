#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickAnimRateParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickAnimRateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseLodMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DistanceFactorThesholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> LODToFrameSkipMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEvalRateForInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseNonRenderedUpdateRate;
    
    HIBIKI_API FHbkGimmickAnimRateParam();
};

