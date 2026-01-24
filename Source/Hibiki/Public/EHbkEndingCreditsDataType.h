#pragma once
#include "CoreMinimal.h"
#include "EHbkEndingCreditsDataType.generated.h"

UENUM(BlueprintType)
enum class EHbkEndingCreditsDataType : uint8 {
    None,
    Space,
    Texture,
    HeaderL,
    HeaderS,
    Body,
    Cast,
    Job,
    License,
    Scroll,
};

