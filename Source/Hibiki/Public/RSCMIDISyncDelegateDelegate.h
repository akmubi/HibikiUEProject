#pragma once
#include "CoreMinimal.h"
#include "RSCMIDISyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSCMIDISyncDelegate, int32, NoteNo, int32, Velocity);

