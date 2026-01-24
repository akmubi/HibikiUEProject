#pragma once
#include "CoreMinimal.h"
#include "EHbkOptionButtonDescriptionType.generated.h"

UENUM(BlueprintType)
enum class EHbkOptionButtonDescriptionType : uint8 {
    Normal,
    Setting,
    CheckOnly,
    KeyAssignment,
    KeyAssignmentInputGamepad,
    KeyAssignmentInputKeyboardMouse,
    NormalForInitialSetting,
    SettingForInitialSetting,
};

