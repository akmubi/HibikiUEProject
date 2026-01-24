#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSesTalkCueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkSesTalkCueDelegate, FName, TalkCueName);

