#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnPressedDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnPressed, const UHbkButtonBaseWidget*, Sender);

