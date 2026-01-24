#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBattleTriggerActorActivate.generated.h"

USTRUCT(BlueprintType)
struct FHbkBattleTriggerActorActivate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName activateCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeactivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName deactivateCallSign;
    
    HIBIKI_API FHbkBattleTriggerActorActivate();
};

