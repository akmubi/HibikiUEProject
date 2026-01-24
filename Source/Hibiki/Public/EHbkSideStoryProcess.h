#pragma once
#include "CoreMinimal.h"
#include "EHbkSideStoryProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkSideStoryProcess : uint8 {
    None,
    Wait,
    Entry,
    March,
    Attack,
    Exit,
};

