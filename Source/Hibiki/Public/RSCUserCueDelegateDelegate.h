#pragma once
#include "CoreMinimal.h"
#include "RSCUserCueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSCUserCueDelegate, const FString&, UserString);

