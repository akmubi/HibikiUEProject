#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerSpAttackUsableDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSpAttackUsableDelegate, int32, SlotIndex, const FGameplayTag&, SpAttackTag);

