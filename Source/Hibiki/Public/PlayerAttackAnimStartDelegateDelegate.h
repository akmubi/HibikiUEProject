#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerAttackAnimStartDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerAttackAnimStartDelegate, const FGameplayTag&, AttackTag, int32, ComboCount);

