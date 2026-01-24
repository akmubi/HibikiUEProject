#pragma once
#include "CoreMinimal.h"
#include "HbkTalkMan808COMDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkMan808COMDelegate, const FName, Option);

