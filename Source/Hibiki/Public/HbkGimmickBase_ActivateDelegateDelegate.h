#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_ActivateDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmickBase_ActivateDelegate, AActor*, Activator);

