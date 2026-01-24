#pragma once
#include "CoreMinimal.h"
#include "EHbkAdditionalInputType.generated.h"

UENUM(BlueprintType)
enum class EHbkAdditionalInputType : uint8 {
    None,
    Type_BeatHit,
    Type_InstantKill,
    Type_Mashing,
};

