#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkTalkScreenTransitAction.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkScreenTransitAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkScreenTransition ScreenTransit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FHbkTalkScreenTransitAction();
};

