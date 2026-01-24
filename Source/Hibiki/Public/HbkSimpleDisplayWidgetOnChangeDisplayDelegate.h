#pragma once
#include "CoreMinimal.h"
#include "HbkSimpleDisplayWidgetOnChangeDisplayDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkSimpleDisplayWidgetOnChangeDisplay, UWidget*, Widget);

