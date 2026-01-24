#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxPlayMusicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkJukeBoxPlayMusicDelegate, FText, PlayingMusicText);

