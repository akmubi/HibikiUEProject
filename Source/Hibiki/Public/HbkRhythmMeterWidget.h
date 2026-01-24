#pragma once
#include "CoreMinimal.h"
#include "EHbkScoreActionType.h"
#include "HbkUserWidget.h"
#include "HbkRhythmMeterWidget.generated.h"

class UHbkBattleManager;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmMeterWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBattleManager* BattleManager;
    
public:
    UHbkRhythmMeterWidget();

    UFUNCTION(BlueprintCallable)
    void VisibleMeter();
    
    UFUNCTION(BlueprintCallable)
    void RhythmTimming(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void RhythmBestTiming(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeter(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable)
    void ParrySuccess();
    
    UFUNCTION(BlueprintCallable)
    void ParryPerfect();
    
    UFUNCTION(BlueprintCallable)
    void HideMeter();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRank(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMeter(EHbkScoreActionType ActionTag, float ChangeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmTimming(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRhythmBestTiming(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnResetMeter(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnParrySuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnParryPerfect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeRank(int32 NewRank, int32 OldRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeMeterValue(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeActionMeter(EHbkScoreActionType ActionTag, float ChangeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeatHitSuccess();
    
    UFUNCTION(BlueprintCallable)
    void BeatHitSuccess();
    
};

