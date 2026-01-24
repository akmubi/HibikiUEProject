#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "RSSignalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSSignalDelegate, const FHbkRhythmSynchroSignalCue&, SignalCue);

