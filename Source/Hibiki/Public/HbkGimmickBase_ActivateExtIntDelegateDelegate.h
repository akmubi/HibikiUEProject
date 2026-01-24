#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_ActivateExtIntDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkGimmickBase_ActivateExtIntDelegate, AActor*, Activator, int32, Value);

