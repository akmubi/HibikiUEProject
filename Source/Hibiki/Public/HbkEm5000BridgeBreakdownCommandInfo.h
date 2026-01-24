#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000BridgeBreakdownCommandParam.h"
#include "HbkEm5000BridgeBreakdownCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeBreakdownCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000BridgeBreakdownCommandParam Command;
    
    HIBIKI_API FHbkEm5000BridgeBreakdownCommandInfo();
};

