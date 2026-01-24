#pragma once
#include "CoreMinimal.h"
#include "EHbkUpscalingTechnique.generated.h"

UENUM(BlueprintType)
enum class EHbkUpscalingTechnique : uint8 {
    None,
    DLSS,
    FSR1,
    FSR2,
    XeSS,
    TSR,
    Max,
};

