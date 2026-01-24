#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventChanAfterTouchDispatcherTwoParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkComponentOnMIDIEventChanAfterTouchDispatcherTwoParam, const uint8, ch, const uint8, Value);

