#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CostumeConChangePlayerCostumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCostumeConChangePlayerCostumeDelegate, const FGameplayTag&, NewCostumeTag);

