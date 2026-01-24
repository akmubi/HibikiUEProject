#pragma once
#include "CoreMinimal.h"
#include "AkComponentOnMIDIEventNoteAfterTouchDispatcherThreeParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAkComponentOnMIDIEventNoteAfterTouchDispatcherThreeParam, const uint8, ch, const uint8, Note, const uint8, Value);

