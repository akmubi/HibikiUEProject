#pragma once
#include "CoreMinimal.h"
#include "EHbkAchievementPlatforms.generated.h"

UENUM(BlueprintType)
enum class EHbkAchievementPlatforms : uint8 {
    None,
    PS5,
    GDK,
    Steam = 4,
    BNet = 8,
    EOS = 16,
};

