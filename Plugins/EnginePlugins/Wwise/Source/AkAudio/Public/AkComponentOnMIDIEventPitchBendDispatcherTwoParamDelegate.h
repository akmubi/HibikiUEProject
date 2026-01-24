#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventPitchBendDispatcherTwoParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkComponentOnMIDIEventPitchBendDispatcherTwoParam, const uint8, ch, const float, Value);

