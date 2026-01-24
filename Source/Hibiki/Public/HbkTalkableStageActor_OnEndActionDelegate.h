#pragma once
#include "CoreMinimal.h"
#include "HbkTalkableStageActor_OnEndActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkableStageActor_OnEndAction, int32, Index);

