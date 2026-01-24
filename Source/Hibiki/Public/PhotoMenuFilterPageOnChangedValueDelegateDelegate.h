#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuFilterPageOnChangedValueDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_FilterWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuFilterPageOnChangedValueDelegate, UHbkPhotoMenuPage_FilterWidget*, Sender);

