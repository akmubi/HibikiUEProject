#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.generated.h"

UENUM(BlueprintType)
enum class EHbkNote : uint8 {
    None,
    Note_Whole,
    Note_Half,
    Note_Quarter = 4,
    Note_8th = 8,
    Note_16th = 16,
    ALL = 255,
};

