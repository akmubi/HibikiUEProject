#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialResultType.generated.h"

UENUM(BlueprintType)
enum class EHbkTutorialResultType : uint8 {
    Result_None,
    Result_Failed,
    Result_Almost,
    Result_Good,
    Result_Great,
};

