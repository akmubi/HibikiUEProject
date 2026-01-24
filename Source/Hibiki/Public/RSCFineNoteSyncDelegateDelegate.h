#pragma once
#include "CoreMinimal.h"
#include "RSCFineNoteSyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSCFineNoteSyncDelegate, int32, NoteCount, bool, bDownBeat);

