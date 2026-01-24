#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialTypeName.generated.h"

UENUM(BlueprintType)
enum class EHbkTutorialTypeName : uint8 {
    SmallPage,
    MiddlePage,
    LargePage,
    MixPage,
    None,
};

