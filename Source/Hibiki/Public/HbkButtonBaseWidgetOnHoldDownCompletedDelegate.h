#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnHoldDownCompletedDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnHoldDownCompleted, const UHbkButtonBaseWidget*, Sender);

