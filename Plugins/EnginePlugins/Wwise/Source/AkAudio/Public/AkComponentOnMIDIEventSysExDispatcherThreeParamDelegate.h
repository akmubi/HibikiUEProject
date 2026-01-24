#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventSysExDispatcherThreeParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAkComponentOnMIDIEventSysExDispatcherThreeParam, const uint8, ch, const uint8, param1, const uint8, param2);

