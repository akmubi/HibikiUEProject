#pragma once
#include "CoreMinimal.h"
#include "HbkDialog_TutorialCustomDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkDialog_TutorialCustomDelegate, int32, ButtonNo);

