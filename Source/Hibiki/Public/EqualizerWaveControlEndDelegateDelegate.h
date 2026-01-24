#pragma once
#include "CoreMinimal.h"
#include "EqualizerWaveControlEndDelegateDelegate.generated.h"

class AHbkEm5000_EqualizerWaveControl;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEqualizerWaveControlEndDelegate, AHbkEm5000_EqualizerWaveControl*, Control);

