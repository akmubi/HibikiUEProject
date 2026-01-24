#pragma once
#include "CoreMinimal.h"
#include "RSSUserCueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRSSUserCueDelegate, const FString&, UserString);

