#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGameplayTask_EVLabLaserTrap.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameplayTask_EVLabLaserTrap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AgentTag;
    
    HIBIKI_API FHbkGameplayTask_EVLabLaserTrap();
};

