#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkGameplayTask_EVLabTalk.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkSessionConf> TalkSessionConfList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopLastTalk;
    
    HIBIKI_API FHbkGameplayTask_EVLabTalk();
};

