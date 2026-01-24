#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerSpAttackSelectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSpAttackSelectDelegate, int32, SlotIndex, const FGameplayTag&, SpAttackTag);

