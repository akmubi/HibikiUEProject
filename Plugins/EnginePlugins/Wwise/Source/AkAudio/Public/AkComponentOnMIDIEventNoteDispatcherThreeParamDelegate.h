#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventNoteDispatcherThreeParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAkComponentOnMIDIEventNoteDispatcherThreeParam, const uint8, ch, const uint8, Note, const uint8, Velocity);

