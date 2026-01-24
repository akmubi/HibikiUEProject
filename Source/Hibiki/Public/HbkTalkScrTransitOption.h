#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkFadeColor.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkTalkScrTransitOption.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkScrTransitOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkScreenTransition TransitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkFadeColor Color;
    
    FHbkTalkScrTransitOption();
};

