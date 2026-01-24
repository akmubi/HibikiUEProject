#pragma once
#include "CoreMinimal.h"
#include "RScoreInputCancelDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRScoreInputCancelDelegate, int32, Index);

