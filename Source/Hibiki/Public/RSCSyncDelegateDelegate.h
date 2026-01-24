#pragma once
#include "CoreMinimal.h"
#include "RSCSyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRSCSyncDelegate, int32, NoteCount);

