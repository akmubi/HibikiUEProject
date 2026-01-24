#pragma once
#include "CoreMinimal.h"
#include "EHbkTitleMenuNpcRandomMotionType.generated.h"

UENUM(BlueprintType)
enum class EHbkTitleMenuNpcRandomMotionType : uint8 {
    Init,
    Random,
    NoInput,
    Max,
};

