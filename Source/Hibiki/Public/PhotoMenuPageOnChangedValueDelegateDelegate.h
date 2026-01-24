#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuPageOnChangedValueDelegateDelegate.generated.h"

class UHbkPhotoMenuPageBaseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuPageOnChangedValueDelegate, UHbkPhotoMenuPageBaseWidget*, PageWidget);

