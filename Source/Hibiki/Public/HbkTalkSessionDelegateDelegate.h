#pragma once
#include "CoreMinimal.h"
#include "HbkTalkContext.h"
#include "HbkTalkSessionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkTalkSessionDelegate, const FHbkTalkContext, TalkContext);

