#pragma once
#include "CoreMinimal.h"
#include "EHbkGameEnvPhase.generated.h"

UENUM(BlueprintType)
enum class EHbkGameEnvPhase : uint8 {
    PhaseStart,
    PhaseB,
    PhaseC,
    PhaseD,
    PhaseE,
    PhaseF,
    PhaseNum,
};

