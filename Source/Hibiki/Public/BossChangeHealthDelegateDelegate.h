#pragma once
#include "CoreMinimal.h"
#include "BossChangeHealthDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossChangeHealthDelegate, int32, StateIndex, float, Rate);

