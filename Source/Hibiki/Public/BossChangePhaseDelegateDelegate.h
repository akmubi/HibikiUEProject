#pragma once
#include "CoreMinimal.h"
#include "BossChangePhaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossChangePhaseDelegate, int32, CurrentPhase);

