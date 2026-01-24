#pragma once
#include "CoreMinimal.h"
#include "EHbkSpeanaType.generated.h"

UENUM(BlueprintType)
enum class EHbkSpeanaType : uint8 {
    None,
    Speana_Full,
    Speana_OneThird,
    Speana_Linear = 4,
};

