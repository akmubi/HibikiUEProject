#pragma once
#include "CoreMinimal.h"
#include "HbkTalkable_SignificanceStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkable_SignificanceStateChanged, bool, IsActive);

