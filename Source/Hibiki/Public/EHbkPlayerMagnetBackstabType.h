#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerMagnetBackstabType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerMagnetBackstabType : uint8 {
    None,
    Normal,
    MiddleSizeEnemy,
    Boss,
    Em1000,
    Em6500,
};

