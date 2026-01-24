#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_DeactivateDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBase_DeactivateDelegate, AActor*, Activator);

