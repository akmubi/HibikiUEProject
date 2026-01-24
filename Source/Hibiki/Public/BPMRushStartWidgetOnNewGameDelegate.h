#pragma once
#include "CoreMinimal.h"
#include "BPMRushStartWidgetOnNewGameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBPMRushStartWidgetOnNewGame, bool, bHardcoreMode);

