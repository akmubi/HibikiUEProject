#pragma once
#include "CoreMinimal.h"
#include "OnFinsihedInOutAnimationDelegateDelegate.generated.h"

class UHbkUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinsihedInOutAnimationDelegate, const UHbkUserWidget*, Sender);

