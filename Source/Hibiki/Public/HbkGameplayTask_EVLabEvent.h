#pragma once
#include "CoreMinimal.h"
#include "HbkGameplayTask_EVLabActivate.h"
#include "HbkGameplayTask_EVLabTalk.h"
#include "HbkGameplayTask_EVLabEvent.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabActivate Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabTalk Talk;
    
    HIBIKI_API FHbkGameplayTask_EVLabEvent();
};

