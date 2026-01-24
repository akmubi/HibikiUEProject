#pragma once
#include "CoreMinimal.h"
#include "HbkTalkChoicesDelegateDecideDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkChoicesDelegateDecide, const FName, DecideName);

