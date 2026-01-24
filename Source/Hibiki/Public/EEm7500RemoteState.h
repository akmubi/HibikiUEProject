#pragma once
#include "CoreMinimal.h"
#include "EEm7500RemoteState.generated.h"

UENUM(BlueprintType)
enum class EEm7500RemoteState : uint8 {
    Normal,
    Spectra,
    DamageSpectra,
    None,
};

