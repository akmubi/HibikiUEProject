#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerControlFlagOption.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerControlFlagOption : uint8 {
    None,
    MoveAll,
    ActionAll,
    AttackAll,
    ExceptMove,
    ControlAll,
    ExceptCamera,
    PartnerAll,
    ExceptMagnet,
};

