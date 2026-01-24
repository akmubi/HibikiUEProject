#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerDirectionType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerDirectionType : uint8 {
    Front,
    Back,
    Left,
    Right,
};

