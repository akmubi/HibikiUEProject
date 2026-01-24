#pragma once
#include "CoreMinimal.h"
#include "Em5000BridgeBreakdownControlChangePopularityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEm5000BridgeBreakdownControlChangePopularityDelegate, float, PrevPopularity, float, NowPopularity, float, PopularityRate);

