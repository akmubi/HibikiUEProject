#pragma once
#include "CoreMinimal.h"
#include "HbkTutorialChangeBeatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTutorialChangeBeat, int32, BeatIndex);

