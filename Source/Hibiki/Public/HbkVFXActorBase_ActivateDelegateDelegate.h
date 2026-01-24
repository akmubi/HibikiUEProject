#pragma once
#include "CoreMinimal.h"
#include "HbkVFXActorBase_ActivateDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkVFXActorBase_ActivateDelegate, AActor*, Activator);

