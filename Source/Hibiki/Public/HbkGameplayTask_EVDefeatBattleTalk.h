#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkGameplayTask_EVDefeatBattleTalk.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVDefeatBattleTalk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkSessionConf> TalkSessionConfList;
    
    HIBIKI_API FHbkGameplayTask_EVDefeatBattleTalk();
};

