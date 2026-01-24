#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVDefeatBattleTimeElapsedTalk.h"
#include "HbkGameplayTask_EVDefeatBattleTimeElapsedEvent.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVDefeatBattleTimeElapsedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGameplayTask_EVDefeatBattleTimeElapsedTalk> TimeElapsedTalkList;
    
    HIBIKI_API FHbkGameplayTask_EVDefeatBattleTimeElapsedEvent();
};

