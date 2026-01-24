#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerSpAttackGenerateActorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSpAttackGenerateActorDelegate, const FGameplayTag&, SpAttackTag);

