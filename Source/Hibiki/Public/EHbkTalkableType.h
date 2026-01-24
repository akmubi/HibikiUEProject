#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkableType.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkableType : uint8 {
    None,
    Sequentially,
    Random,
};

