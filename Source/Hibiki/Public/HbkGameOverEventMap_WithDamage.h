#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkGameOverEventType.h"
#include "HbkGameOverEventMap_WithDamage.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameOverEventMap_WithDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EHbkGameOverEventType> GameOverTypeMap;
    
    HIBIKI_API FHbkGameOverEventMap_WithDamage();
};

