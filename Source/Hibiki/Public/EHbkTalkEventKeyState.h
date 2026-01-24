#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEventKeyState.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkEventKeyState : uint8 {
    Exec,
    Sleep,
};

