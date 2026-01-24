#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventProgramChangeDispatcherTwoParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkComponentOnMIDIEventProgramChangeDispatcherTwoParam, const uint8, ch, const uint8, ProgramNumber);

