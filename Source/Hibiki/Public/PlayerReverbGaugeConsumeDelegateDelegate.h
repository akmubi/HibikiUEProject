#pragma once
#include "CoreMinimal.h"
#include "EHbkReverbGaugeConsumeType.h"
#include "PlayerReverbGaugeConsumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerReverbGaugeConsumeDelegate, EHbkReverbGaugeConsumeType, ReverbGaugeConsumeType);

