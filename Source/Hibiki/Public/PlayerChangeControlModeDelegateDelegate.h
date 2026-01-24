#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerControlMode.h"
#include "PlayerChangeControlModeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerChangeControlModeDelegate, EHbkPlayerControlMode, ControlMode);

