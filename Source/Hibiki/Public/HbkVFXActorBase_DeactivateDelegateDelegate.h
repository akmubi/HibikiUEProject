#pragma once
#include "CoreMinimal.h"
#include "HbkVFXActorBase_DeactivateDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkVFXActorBase_DeactivateDelegate, AActor*, Activator);

