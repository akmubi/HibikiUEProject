#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "HbkCostumeOnPostApplyCostumeWithParamsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkCostumeOnPostApplyCostumeWithParams, EHbkCostumePart, ApplyPart, const FGameplayTag, ApplyTag);

