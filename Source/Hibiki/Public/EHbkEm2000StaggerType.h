#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000StaggerType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000StaggerType : uint8 {
    None,
    LongTackle,
    Discharge,
    PickSlide,
};

