#pragma once
#include "CoreMinimal.h"
#include "LauncherCompDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLauncherCompDelegate, int32, Index);

