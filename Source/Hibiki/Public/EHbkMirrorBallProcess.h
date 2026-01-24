#pragma once
#include "CoreMinimal.h"
#include "EHbkMirrorBallProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkMirrorBallProcess : uint8 {
    None,
    Attach,
    DuringInstallation,
    Installed,
    Launch,
    End,
};

