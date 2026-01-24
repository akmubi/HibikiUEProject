#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointCurveExpressionType.generated.h"

UENUM(BlueprintType)
enum class ETngAnimHelperJointCurveExpressionType : uint8 {
    None,
    Simple,
    Graph,
};

