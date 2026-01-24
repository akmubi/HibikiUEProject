#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionOnChoiceFocusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkSessionOnChoiceFocus, const FName, TalkCue);

