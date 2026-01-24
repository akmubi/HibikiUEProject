#pragma once
#include "CoreMinimal.h"
#include "EHbkJukeBoxRepeatType.h"
#include "HbkJukeBoxSwitchRepeatTypeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkJukeBoxSwitchRepeatType, EHbkJukeBoxRepeatType, RepeatType);

