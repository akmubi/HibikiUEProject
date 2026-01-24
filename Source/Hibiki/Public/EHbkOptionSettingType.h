#pragma once
#include "CoreMinimal.h"
#include "EHbkOptionSettingType.generated.h"

UENUM(BlueprintType)
enum class EHbkOptionSettingType : uint8 {
    None,
    NumSlider,
    SelectionList,
};

