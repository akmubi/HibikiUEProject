#pragma once
#include "CoreMinimal.h"
#include "RSSNoticeUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSSNoticeUpdateDelegate, float, DeltaTime);

