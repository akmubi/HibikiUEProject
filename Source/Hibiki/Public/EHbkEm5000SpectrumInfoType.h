#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000SpectrumInfoType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000SpectrumInfoType : uint8 {
    Spectrum,
    IntegralSpectrum,
    BeatSpectrum,
};

