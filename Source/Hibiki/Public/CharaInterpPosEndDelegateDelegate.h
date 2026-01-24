#pragma once
#include "CoreMinimal.h"
#include "CharaInterpPosEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaInterpPosEndDelegate, bool, bInterrupted);

