#pragma once
#include "CoreMinimal.h"
#include "EHbkRailCamDir.generated.h"

UENUM(BlueprintType)
enum class EHbkRailCamDir : uint8 {
    Right,
    Left,
    Forward,
    Backward,
    TowardRail,
};

