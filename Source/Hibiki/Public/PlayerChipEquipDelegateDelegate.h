#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerChipType.h"
#include "PlayerChipEquipDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerChipEquipDelegate, EHbkPlayerChipType, ChipType, int32, Level);

