#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnHoldDownStartedDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnHoldDownStarted, const UHbkButtonBaseWidget*, Sender);

