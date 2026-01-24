#pragma once
#include "CoreMinimal.h"
#include "PlayerChangeHealthDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerChangeHealthDelegate, float, Value);

