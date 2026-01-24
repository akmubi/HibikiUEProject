#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuPageDataDelegateDelegate.generated.h"

class UHbkPhotoMenuPageBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuPageDataDelegate, UHbkPhotoMenuPageBaseWidget*, Sender);

