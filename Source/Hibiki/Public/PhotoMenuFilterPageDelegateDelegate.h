#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuFilterPageDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_FilterWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuFilterPageDelegate, UHbkPhotoMenuPage_FilterWidget*, Sender);

