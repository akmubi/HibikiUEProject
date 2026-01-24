#pragma once
#include "CoreMinimal.h"
#include "AkDynamicSequenceType.generated.h"

UENUM(BlueprintType)
enum class AkDynamicSequenceType : uint8 {
    SampleAccurate,
    NormalTransition,
};

