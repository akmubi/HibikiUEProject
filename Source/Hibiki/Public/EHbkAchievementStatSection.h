#pragma once
#include "CoreMinimal.h"
#include "EHbkAchievementStatSection.generated.h"

UENUM(BlueprintType)
enum class EHbkAchievementStatSection : uint8 {
    Global,
    Stage,
    Profile,
};

