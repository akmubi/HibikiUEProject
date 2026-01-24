#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBeatHitWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBeatHitWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkBeatHitWidget();

    UFUNCTION(BlueprintCallable)
    void StartBeatHit(float BeatHitImpactTime);
    
    UFUNCTION(BlueprintCallable)
    void RhythmTimming(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnUpdateBeatHit(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartBeatHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmTimming(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitPerfect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitGood();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitFailure();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitPerfect();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitGood();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitFailure();
    
};

