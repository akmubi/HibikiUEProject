#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.h"
#include "HbkEm5000BridgeBreakdownCommandParam.h"
#include "HbkEm5000BridgeBreakdownCommandInput.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeBreakdownCommandInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000BridgeBreakdownCommandParam Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBossCommandBattleResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    HIBIKI_API FHbkEm5000BridgeBreakdownCommandInput();
};

