#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000BridgeBasicParameter.h"
#include "HbkEm5000BridgeBreakdownCommandList.h"
#include "HbkEm5000BridgeParameter.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000BridgeBasicParameter Basic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BridgeBreakdownCommandList> CommandList;
    
    HIBIKI_API FHbkEm5000BridgeParameter();
};

