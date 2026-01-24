#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkReadFlagIO.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkReadFlagIO : uint8 {
    None,
    ReadOnly,
    ReadWrite,
};

