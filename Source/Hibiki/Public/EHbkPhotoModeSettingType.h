#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModeSettingType.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModeSettingType : uint8 {
    None,
    NumSlider,
    SelectionList,
};

