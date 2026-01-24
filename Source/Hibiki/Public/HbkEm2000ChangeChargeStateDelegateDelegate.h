#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000ChargeState.h"
#include "HbkEm2000ChangeChargeStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm2000ChangeChargeStateDelegate, EHbkEm2000ChargeState, ChargeState);

