#pragma once
#include "CoreMinimal.h"
#include "EHbkDepthOutlineType.generated.h"

UENUM(BlueprintType)
enum class EHbkDepthOutlineType : uint8 {
    InsideOnly,
    OutsideOnly,
    Both,
};

