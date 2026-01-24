#pragma once
#include "CoreMinimal.h"
#include "HbkDialog_StageSelectCustomDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkDialog_StageSelectCustomDelegate, int32, ButtonNo);

