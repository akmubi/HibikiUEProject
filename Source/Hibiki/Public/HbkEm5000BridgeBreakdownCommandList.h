#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000BridgeBreakdownCommandParam.h"
#include "HbkEm5000BridgeBreakdownCommandList.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeBreakdownCommandList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownCommandParam> Commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopularityUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopularityDown;
    
    HIBIKI_API FHbkEm5000BridgeBreakdownCommandList();
};

