#pragma once
#include "CoreMinimal.h"
#include "HbkDialog_SpectraRoomCustomDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkDialog_SpectraRoomCustomDelegate, int32, ButtonNo);

