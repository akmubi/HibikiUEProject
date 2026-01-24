#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnUnhoveredDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnUnhovered, const UHbkButtonBaseWidget*, Sender);

