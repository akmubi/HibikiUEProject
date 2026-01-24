#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "GameplayTagContainer.h"
#include "HbkBTTask_BossSelectTagBase.generated.h"

class AAIController;
class APawn;

UCLASS(Blueprintable)
class HIBIKI_API UHbkBTTask_BossSelectTagBase : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UHbkBTTask_BossSelectTagBase();

    UFUNCTION(BlueprintCallable)
    FGameplayTag GetSelectedTag(AAIController* OwnerController, APawn* ControlledPawn);
    
};

