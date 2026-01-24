#pragma once
#include "CoreMinimal.h"
#include "ITInteractionDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FITInteractionDelegate, AActor*, Interactor);

