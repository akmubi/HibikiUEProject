#pragma once
#include "CoreMinimal.h"
#include "HbkMultipleToughParam.h"
#include "MultipleToughDeactivateDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMultipleToughDeactivateDelegate, int32, Index, const FHbkMultipleToughParam&, ToughParam, AActor*, DamageCauser);

