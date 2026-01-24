#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialResultType.h"
#include "TutorialResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialResultDelegate, EHbkTutorialResultType, ResultType);

