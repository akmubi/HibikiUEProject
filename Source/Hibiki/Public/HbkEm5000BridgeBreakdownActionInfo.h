#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000BridgeBreakdownAction.h"
#include "HbkEm5000BridgeBreakdownActionInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeBreakdownActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000BridgeBreakdownAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    HIBIKI_API FHbkEm5000BridgeBreakdownActionInfo();
};

