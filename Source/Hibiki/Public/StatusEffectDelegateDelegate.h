#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StatusEffectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatusEffectDelegate, FGameplayTag, StatusEffectTag);

