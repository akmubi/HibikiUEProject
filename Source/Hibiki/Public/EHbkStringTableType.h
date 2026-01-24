#pragma once
#include "CoreMinimal.h"
#include "EHbkStringTableType.generated.h"

UENUM(BlueprintType)
enum class EHbkStringTableType : uint8 {
    UiAchievements,
    UiStore,
    UiRhythmTower,
    UiRhythmDungeon,
    UiOption,
    UiOptionNew,
    UiComboList,
    UiOthers,
    BNet,
    UiPhotoMode,
    UiCommon,
    Max,
};

