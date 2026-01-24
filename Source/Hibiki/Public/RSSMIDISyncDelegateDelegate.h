#pragma once
#include "CoreMinimal.h"
#include "RSSMIDISyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRSSMIDISyncDelegate, int32, NoteNo, int32, Velocity);

