#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerSpAttackSetupDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSpAttackSetupDelegate, int32, SlotIndex, const TArray<FGameplayTag>&, SpAttackTagList);

