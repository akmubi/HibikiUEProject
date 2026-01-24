#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_WallPanelType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_WallPanelType : uint8 {
    HideInPhaseB,
    HideInPhaseC,
    HideInPhaseD,
    HideInPhaseE,
    HideInPhaseF,
};

