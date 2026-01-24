#pragma once
#include "CoreMinimal.h"
#include "ArcadeMenuDelegateDelegate.generated.h"

class UHbkArcadeMenuParentWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArcadeMenuDelegate, UHbkArcadeMenuParentWidget*, Sender);

