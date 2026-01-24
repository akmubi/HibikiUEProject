#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkScoreActionType.h"
#include "HbkUserWidget.h"
#include "HbkBattleScoreWidget.generated.h"

class UHbkBattleManager;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleScoreWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBattleManager* BattleManager;
    
public:
    UHbkBattleScoreWidget();

    UFUNCTION(BlueprintCallable)
    void VisibleMeter();
    
    UFUNCTION(BlueprintCallable)
    void RestoreScore();
    
    UFUNCTION(BlueprintCallable)
    void HideMeter();
    
    UFUNCTION(BlueprintCallable)
    void ChangeScoreRate(int32 NewRank, float ScoreRate);
    
    UFUNCTION(BlueprintCallable)
    void ChangeScore(EHbkScoreActionType ActionTag, FGameplayTagContainer ActionTags, float ChangeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnRestoreScore(float Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeScore(float Score, EHbkScoreActionType ActionTag, FGameplayTagContainer ActionTags, float ChangeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangeRhythmRank(int32 NewRank, float ScoreRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void BattleStart();
    
};

