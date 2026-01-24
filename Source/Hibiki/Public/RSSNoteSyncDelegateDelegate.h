#pragma once
#include "CoreMinimal.h"
#include "RSSNoteSyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRSSNoteSyncDelegate, int32, NoteCount, bool, bDownBeat);

