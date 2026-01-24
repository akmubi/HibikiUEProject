#pragma once
#include "CoreMinimal.h"
#include "EqualizerWaveGeneratorEndDelegateDelegate.generated.h"

class AHbkEm5000_EqualizerWaveGenerator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEqualizerWaveGeneratorEndDelegate, AHbkEm5000_EqualizerWaveGenerator*, Generator);

