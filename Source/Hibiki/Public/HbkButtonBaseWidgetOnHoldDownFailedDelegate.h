#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnHoldDownFailedDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnHoldDownFailed, const UHbkButtonBaseWidget*, Sender);

