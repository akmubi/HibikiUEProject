#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerType.h"
#include "CostumeConChangePartnerCostumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCostumeConChangePartnerCostumeDelegate, EHbkPartnerType, PartnerType, const FGameplayTag&, NewCostumeTag);

