#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "HbkSolidVocalControlTask.h"
#include "HbkSolidVocalControlTask_OnceEverySignal.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkSolidVocalControlTask_OnceEverySignal : public UHbkSolidVocalControlTask {
    GENERATED_BODY()
public:
    UHbkSolidVocalControlTask_OnceEverySignal();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue);
    
};

