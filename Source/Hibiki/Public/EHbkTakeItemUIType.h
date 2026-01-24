#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeItemUIType.generated.h"

UENUM(BlueprintType)
enum class EHbkTakeItemUIType : uint8 {
    None,
    PieceItem,
    SpecialItem,
    VLog,
};

