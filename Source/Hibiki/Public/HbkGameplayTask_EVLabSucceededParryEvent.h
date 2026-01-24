#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVLabActivate.h"
#include "HbkGameplayTask_EVLabTalk.h"
#include "HbkGameplayTask_EVLabSucceededParryEvent.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabSucceededParryEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabActivate Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabTalk TalkPerfect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabTalk TalkNice;
    
    HIBIKI_API FHbkGameplayTask_EVLabSucceededParryEvent();
};

