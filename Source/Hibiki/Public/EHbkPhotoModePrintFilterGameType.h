#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePrintFilterGameType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModePrintFilterGameType : uint8 {
    None,
    HalftoneScreenSpace,
    LinesScreenSpace,
    HalftoneLinesScreenSpace,
    Num,
};

