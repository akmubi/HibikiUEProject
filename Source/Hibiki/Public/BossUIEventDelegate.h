#pragma once
#include "CoreMinimal.h"
#include "EHbkBossUIEventType.h"
#include "BossUIEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBossUIEvent, EHbkBossUIEventType, EventType, float, FloatValue);

