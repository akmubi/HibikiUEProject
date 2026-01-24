#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableActivateExtIntDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkTalkableActivateExtInt, AActor*, Activator, int32, Value);

