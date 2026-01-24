#pragma once
#include "CoreMinimal.h"
#include "GroupDestroyedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGroupDestroyedDelegate, const FName&, GroupName);

