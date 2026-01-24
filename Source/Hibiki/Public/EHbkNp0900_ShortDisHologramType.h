#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0900_ShortDisHologramType.generated.h"

UENUM(BlueprintType)
enum class EHbkNp0900_ShortDisHologramType : uint8 {
    Invalid,
    Action,
    Battle,
    Game,
    Setting,
};

