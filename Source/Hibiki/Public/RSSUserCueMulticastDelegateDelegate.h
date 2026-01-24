#pragma once
#include "CoreMinimal.h"
#include "RSSUserCueMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSSUserCueMulticastDelegate, const FString&, UserString);

