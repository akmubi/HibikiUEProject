#pragma once
#include "CoreMinimal.h"
#include "ArcadeMenuRewardPageDelegateDelegate.generated.h"

class UHbkArcadeMenuRewardPageWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArcadeMenuRewardPageDelegate, const UHbkArcadeMenuRewardPageWidget*, Sender);

