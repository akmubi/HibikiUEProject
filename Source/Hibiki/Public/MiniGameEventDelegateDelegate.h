#pragma once
#include "CoreMinimal.h"
#include "MiniGameEventDelegateDelegate.generated.h"

class UHbkPlayerMiniGameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMiniGameEventDelegate, UHbkPlayerMiniGameComponent*, MiniGameComp);

