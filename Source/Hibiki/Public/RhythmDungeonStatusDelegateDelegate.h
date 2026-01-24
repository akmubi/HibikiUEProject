#pragma once
#include "CoreMinimal.h"
#include "RhythmDungeonStatusDelegateDelegate.generated.h"

class UHbkRhythmDungeonStatusWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmDungeonStatusDelegate, UHbkRhythmDungeonStatusWidget*, Sender);

