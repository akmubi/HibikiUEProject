#pragma once
#include "CoreMinimal.h"
#include "PlayerJustActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerJustActionDelegate, float, Time);

