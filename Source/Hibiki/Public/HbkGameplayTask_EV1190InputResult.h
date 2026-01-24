#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkRhythmScoreResult.h"
#include "HbkRhythmNoteParam.h"
#include "HbkGameplayTask_EV1190InputResult.generated.h"

class UHbkGT_EV1190InputResultAsset;
class UHbkGameplayTask_EV1190InputResult;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_EV1190InputResult : public UGameplayTask {
    GENERATED_BODY()
public:
    UHbkGameplayTask_EV1190InputResult(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReadyToBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnNoteTiming(int32 NoteIndex, const FHbkRhythmNoteParam& NoteParam);
    
    UFUNCTION(BlueprintCallable)
    void OnInputResult(EHbkRhythmScoreResult ResultType, int32 Index, bool bInput);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EV1190InputResult* EV1190InputResult(UObject* WorldContextObject, UHbkGT_EV1190InputResultAsset* pDataAsset);
    
};

