#pragma once
#include "CoreMinimal.h"
#include "HbkSequencerEventTaskDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkSequencerEventTaskDelegate, bool, bSkipped);

