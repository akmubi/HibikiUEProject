#pragma once
#include "CoreMinimal.h"
#include "HbkReverbGaugeInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkReverbGaugeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitAccumulatedGauge;
    
    HIBIKI_API FHbkReverbGaugeInfo();
};

