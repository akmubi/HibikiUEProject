#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CostumeConChangePlayerCostumeKitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCostumeConChangePlayerCostumeKitDelegate, const FGameplayTagContainer&, NewCostumeKitTags);

