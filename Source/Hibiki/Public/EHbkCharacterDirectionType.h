#pragma once
#include "CoreMinimal.h"
#include "EHbkCharacterDirectionType.generated.h"

UENUM(BlueprintType)
enum class EHbkCharacterDirectionType : uint8 {
    Front,
    Back,
    Left,
    Right,
};

