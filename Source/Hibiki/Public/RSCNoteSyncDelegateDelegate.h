#pragma once
#include "CoreMinimal.h"
#include "RSCNoteSyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSCNoteSyncDelegate, int32, NoteCount);

