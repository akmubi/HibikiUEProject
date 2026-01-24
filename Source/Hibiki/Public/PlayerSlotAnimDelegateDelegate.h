#pragma once
#include "CoreMinimal.h"
#include "PlayerSlotAnimDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSlotAnimDelegate, float, PlayRate);

