#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventCcDispatcherThreeParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAkComponentOnMIDIEventCcDispatcherThreeParam, const uint8, ch, const uint8, cc, const uint8, Value);

