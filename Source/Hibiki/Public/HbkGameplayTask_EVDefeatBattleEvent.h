#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVDefeatBattleTalk.h"
#include "HbkGameplayTask_EVDefeatBattleEvent.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVDefeatBattleEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVDefeatBattleTalk Talk;
    
    HIBIKI_API FHbkGameplayTask_EVDefeatBattleEvent();
};

