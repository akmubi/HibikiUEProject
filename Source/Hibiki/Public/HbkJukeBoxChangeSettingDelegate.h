#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxChangeSettingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkJukeBoxChangeSetting, bool, SettingEnable);

