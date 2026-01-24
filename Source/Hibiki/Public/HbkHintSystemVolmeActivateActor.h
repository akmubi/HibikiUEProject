#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHintSystemVolmeActivate.h"
#include "HbkHintSystemVolmeActivateActor.generated.h"

USTRUCT(BlueprintType)
struct FHbkHintSystemVolmeActivateActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHintSystemVolmeActivate Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    HIBIKI_API FHbkHintSystemVolmeActivateActor();
};

