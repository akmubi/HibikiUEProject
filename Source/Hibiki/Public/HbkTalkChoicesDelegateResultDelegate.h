#pragma once
#include "CoreMinimal.h"
#include "HbkTalkChoicesDelegateResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkChoicesDelegateResult, const FName, ResultName);

