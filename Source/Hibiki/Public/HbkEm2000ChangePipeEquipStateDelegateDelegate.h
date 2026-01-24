#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000PipeEquipState.h"
#include "HbkEm2000ChangePipeEquipStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkEm2000ChangePipeEquipStateDelegate, EHbkEm2000PipeEquipState, PipeEquipState);

