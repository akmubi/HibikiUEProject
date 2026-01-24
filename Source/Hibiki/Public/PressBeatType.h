#pragma once
#include "CoreMinimal.h"
#include "PressBeatType.generated.h"

UENUM(BlueprintType)
enum class PressBeatType : uint8 {
    None,
    TypeA,
    TypeB,
    TypeC,
};

