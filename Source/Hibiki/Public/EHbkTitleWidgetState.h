#pragma once
#include "CoreMinimal.h"
#include "EHbkTitleWidgetState.generated.h"

UENUM(BlueprintType)
enum class EHbkTitleWidgetState : uint8 {
    None,
    PressAnyButtons,
    WaitSetupLocalPlayer,
    MainLoop,
};

