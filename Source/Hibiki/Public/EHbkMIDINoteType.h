#pragma once
#include "CoreMinimal.h"
#include "EHbkMIDINoteType.generated.h"

UENUM(BlueprintType)
enum class EHbkMIDINoteType : uint8 {
    None,
    Note_C,
    Note_Cs,
    Note_D,
    Note_Ds,
    Note_E,
    Note_F,
    Note_Fs,
    Note_G,
    Note_Gs,
    Note_A,
    Note_As,
    Note_B,
};

