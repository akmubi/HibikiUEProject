#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventMetaDispatcherThreeParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAkComponentOnMIDIEventMetaDispatcherThreeParam, const uint8, ch, const uint8, param1, const uint8, param2);

