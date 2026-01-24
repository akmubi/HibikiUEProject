#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidgetOnHoveredDelegate.generated.h"

class UHbkButtonBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkButtonBaseWidgetOnHovered, const UHbkButtonBaseWidget*, Sender);

