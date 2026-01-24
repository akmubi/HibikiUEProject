#pragma once
#include "CoreMinimal.h"
#include "EHbkEm1000DamageState.h"
#include "Qa1milChangePartsStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQa1milChangePartsStateDelegate, EHbkEm1000DamageState, LeftArmReaction, EHbkEm1000DamageState, RightArmReaction);

