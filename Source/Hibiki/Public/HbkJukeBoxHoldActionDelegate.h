#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxHoldActionDelegate.generated.h"

class UHbkJukeBoxHoldBarWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkJukeBoxHoldAction, const UHbkJukeBoxHoldBarWidget*, Sender);

