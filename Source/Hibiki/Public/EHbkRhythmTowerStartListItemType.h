#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmTowerStartListItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmTowerStartListItemType : uint8 {
    None,
    Continue,
    NewGame,
    EquipmentChange,
    ReturnToHideout,
};

