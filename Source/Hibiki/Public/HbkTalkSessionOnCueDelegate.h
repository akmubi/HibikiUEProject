#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionOnCueDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkSessionOnCue, const FName, TalkCue);

