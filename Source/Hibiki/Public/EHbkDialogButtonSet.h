#pragma once
#include "CoreMinimal.h"
#include "EHbkDialogButtonSet.generated.h"

UENUM(BlueprintType)
enum class EHbkDialogButtonSet : uint8 {
    Yes,
    YesNo,
    Accept,
    AcceptCancel,
    Continue,
    AgreeCancel,
    Dynamic,
    Max,
};

