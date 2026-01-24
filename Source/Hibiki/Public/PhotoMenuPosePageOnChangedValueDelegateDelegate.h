#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuPosePageOnChangedValueDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_PoseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuPosePageOnChangedValueDelegate, UHbkPhotoMenuPage_PoseWidget*, Sender);

