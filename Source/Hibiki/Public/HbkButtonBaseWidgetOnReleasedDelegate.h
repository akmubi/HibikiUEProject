#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnReleasedDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnReleased, const UHbkButtonBaseWidget*, Sender);

