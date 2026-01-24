#pragma once
#include "CoreMinimal.h"
#include "OnSelectArcadeRewardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectArcadeRewardDelegate, int32, RewardNumber);

