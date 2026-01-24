#pragma once
#include "CoreMinimal.h"
#include "HbkReverbGaugeOverChargeInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkReverbGaugeOverChargeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StockNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccmulateGaugeNum;
    
    HIBIKI_API FHbkReverbGaugeOverChargeInfo();
};

