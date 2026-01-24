#pragma once
#include "CoreMinimal.h"
#include "HbkBarrierCompInitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkBarrierCompInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierRecoveryTime;
    
    HIBIKI_API FHbkBarrierCompInitParam();
};

