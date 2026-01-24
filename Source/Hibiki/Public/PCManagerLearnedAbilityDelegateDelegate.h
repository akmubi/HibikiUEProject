#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAppendAbilityType.h"
#include "PCManagerLearnedAbilityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPCManagerLearnedAbilityDelegate, EHbkPlayerAppendAbilityType, NewAbilityType);

