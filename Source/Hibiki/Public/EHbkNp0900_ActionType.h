#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0900_ActionType.generated.h"

UENUM(BlueprintType)
enum class EHbkNp0900_ActionType : uint8 {
    None,
    Accent_Near,
    Accent_Far,
    Sad,
    ChangeBoard,
    Clap,
    GiveDrink,
    ClapAndGiveDrink,
    MoveToPoint,
    ChangeToComboModeFromNormal,
    ChangeToNormalModeFromCombo,
    RemoveAllChaseTriggerEvent,
};

