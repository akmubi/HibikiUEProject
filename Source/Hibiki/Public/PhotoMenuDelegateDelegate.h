#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuDelegateDelegate.generated.h"

class UHbkPhotoMenuParentWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuDelegate, UHbkPhotoMenuParentWidget*, Sender);

