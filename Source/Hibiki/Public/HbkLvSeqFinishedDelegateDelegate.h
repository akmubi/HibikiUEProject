#pragma once
#include "CoreMinimal.h"
#include "HbkLvSeqFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkLvSeqFinishedDelegate, bool, bSkipped);

