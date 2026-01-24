#pragma once
#include "CoreMinimal.h"
#include "PlayerChangeInhibitFlagDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerChangeInhibitFlagDelegate, bool, bInhibit);

