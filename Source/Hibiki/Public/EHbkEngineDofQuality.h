#pragma once
#include "CoreMinimal.h"
#include "EHbkEngineDofQuality.generated.h"

UENUM(BlueprintType)
enum class EHbkEngineDofQuality : uint8 {
    Quality1,
    Quality2,
    Quality3,
    Quality4,
    QualityChen,
    QualityForeground2D,
    QualityNoRecombine,
};

