#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000BridgeBreakdownCommand.h"
#include "HbkEm5000NoteTime.h"
#include "HbkEm5000BridgeBreakdownCommandParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeBreakdownCommandParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000BridgeBreakdownCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000NoteTime InputNote;
    
    HIBIKI_API FHbkEm5000BridgeBreakdownCommandParam();
};

