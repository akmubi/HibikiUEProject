#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnHoldDownCanceledDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnHoldDownCanceled, const UHbkButtonBaseWidget*, Sender);

