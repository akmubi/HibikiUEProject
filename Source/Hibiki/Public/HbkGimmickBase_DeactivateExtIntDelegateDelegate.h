#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_DeactivateExtIntDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkGimmickBase_DeactivateExtIntDelegate, AActor*, Activator, int32, Value);

