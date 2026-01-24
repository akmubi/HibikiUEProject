#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkInteractTutorialParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkInteractTutorialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    HIBIKI_API FHbkInteractTutorialParam();
};

