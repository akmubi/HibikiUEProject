#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerDamageConfirmedDetailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerDamageConfirmedDetailDelegate, const FGameplayTagContainer&, AttackTags, const FGameplayTagContainer&, DamageTags);

