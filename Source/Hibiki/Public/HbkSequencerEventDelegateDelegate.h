#pragma once
#include "CoreMinimal.h"
#include "HbkSequencerEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkSequencerEventDelegate, bool, bSkipped);

