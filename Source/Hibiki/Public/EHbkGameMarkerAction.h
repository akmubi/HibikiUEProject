#pragma once
#include "CoreMinimal.h"
#include "EHbkGameMarkerAction.generated.h"

UENUM(BlueprintType)
enum class EHbkGameMarkerAction : uint8 {
    MarkerAction_None,
    MarkerAction_Accent,
    MarkerAction_Blink,
    MarkerAction_Zoom,
    MarkerAction_Popup,
    MarkerAction_Fade,
};

