#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxButtonActionDelegate.generated.h"

class UHbkJukeBoxButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkJukeBoxButtonAction, const UHbkJukeBoxButtonWidget*, Sender);

