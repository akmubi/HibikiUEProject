#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkTriggerExecType.h"
#include "HbkTalkTriggerDelay.h"
#include "HbkTalkTriggerType.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkTriggerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkTriggerExecType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkTriggerDelay WaitTime;
    
    FHbkTalkTriggerType();
};

