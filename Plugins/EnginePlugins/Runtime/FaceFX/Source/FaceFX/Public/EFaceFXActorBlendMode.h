#pragma once
#include "CoreMinimal.h"
#include "EFaceFXActorBlendMode.generated.h"

UENUM(BlueprintType)
enum class EFaceFXActorBlendMode : uint8 {
    Global,
    Replace,
    Additive,
};

