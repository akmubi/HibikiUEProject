#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableActivateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkableActivate, AActor*, Activator);

