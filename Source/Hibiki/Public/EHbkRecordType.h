#pragma once
#include "CoreMinimal.h"
#include "EHbkRecordType.generated.h"

UENUM(BlueprintType)
enum class EHbkRecordType : uint8 {
    Record_None,
    Input,
    Action,
    Impact,
    Damage,
    Debug,
};

