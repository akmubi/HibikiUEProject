#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnClickedDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnClicked, const UHbkButtonBaseWidget*, Sender);

