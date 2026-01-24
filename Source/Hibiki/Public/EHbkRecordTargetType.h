#pragma once
#include "CoreMinimal.h"
#include "EHbkRecordTargetType.generated.h"

UENUM(BlueprintType)
enum class EHbkRecordTargetType : uint8 {
    Player,
    Enemy,
    Object,
};

