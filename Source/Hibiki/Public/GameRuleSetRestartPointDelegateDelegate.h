#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameRuleSetRestartPointDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameRuleSetRestartPointDelegate, const FGameplayTagContainer&, AgentTags);

