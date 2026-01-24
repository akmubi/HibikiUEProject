#pragma once
#include "CoreMinimal.h"
#include "EHbkAnalyticFogType.generated.h"

UENUM(BlueprintType)
enum class EHbkAnalyticFogType : uint8 {
    HBK_ANALYTIC_FOG_NONE,
    HBK_ANALYTIC_FOG_POINT,
    HBK_ANALYTIC_FOG_SPOT,
};

