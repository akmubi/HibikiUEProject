#pragma once
#include "CoreMinimal.h"
#include "EHbkLoadingScreenType.generated.h"

UENUM(BlueprintType)
enum class EHbkLoadingScreenType : uint8 {
    Default,
    TitleToStage,
    TitleToHideOut,
    Max,
};

