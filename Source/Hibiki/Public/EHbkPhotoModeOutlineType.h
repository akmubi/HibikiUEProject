#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeOutlineType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModeOutlineType : uint8 {
    Canny,
    Laplacian4,
    Num,
};

