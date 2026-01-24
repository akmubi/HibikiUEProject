#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkTalkTriggerDelay.h"
#include "HbkTalkTriggerTalk.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkTriggerTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf TalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkTriggerDelay Delay;
    
    FHbkTalkTriggerTalk();
};

