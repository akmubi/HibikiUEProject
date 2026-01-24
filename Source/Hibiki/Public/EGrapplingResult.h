#pragma once
#include "CoreMinimal.h"
#include "EGrapplingResult.generated.h"

UENUM(BlueprintType)
enum class EGrapplingResult : uint8 {
    Update,
    Completed,
    Abort,
};

