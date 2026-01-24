#pragma once
#include "CoreMinimal.h"
#include "EHbkSkillListStateType.generated.h"

UENUM(BlueprintType)
enum class EHbkSkillListStateType : uint8 {
    None,
    Hidden,
    New,
    Checked,
};

