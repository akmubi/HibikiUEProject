#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkGameplayTask_EVDefeatBattleTimeElapsedTalk.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVDefeatBattleTimeElapsedTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf TalkSessionConf;
    
    HIBIKI_API FHbkGameplayTask_EVDefeatBattleTimeElapsedTalk();
};

