#pragma once
#include "CoreMinimal.h"
#include "EHbkTitleMenuCameraType.generated.h"

UENUM(BlueprintType)
enum class EHbkTitleMenuCameraType : uint8 {
    Title,
    TopMenu,
    NewGame,
    Load,
    Option,
    OP,
    OP2,
    GotoHideOut,
    GotoStage,
    Hide,
    Max,
};

