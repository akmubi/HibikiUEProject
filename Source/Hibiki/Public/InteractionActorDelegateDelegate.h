#pragma once
#include "CoreMinimal.h"
#include "InteractionActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionActorDelegate, AActor*, Interactor);

