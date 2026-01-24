#pragma once
#include "CoreMinimal.h"
#include "HbkRDbg0730_VendingMachineDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHbkRDbg0730_VendingMachine, const int32, Index, const AActor*, Causer, AActor*, Victim);

