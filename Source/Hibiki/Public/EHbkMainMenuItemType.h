#pragma once
#include "CoreMinimal.h"
#include "EHbkMainMenuItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkMainMenuItemType : uint8 {
    Continue,
    NewGame,
    Option,
    BNet,
    Credit,
    QuitGame,
    StageSelect,
    Max,
};

