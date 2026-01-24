#pragma once
#include "CoreMinimal.h"
#include "PhotoMenuPosePageDelegateDelegate.generated.h"

class UHbkPhotoMenuPage_PoseWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhotoMenuPosePageDelegate, UHbkPhotoMenuPage_PoseWidget*, Sender);

