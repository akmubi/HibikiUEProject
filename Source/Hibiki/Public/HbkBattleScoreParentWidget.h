#pragma once
#include "CoreMinimal.h"
#include "HbkBattleResultDetail.h"
#include "HbkBattleResultScoreDetail.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkBattleScoreParentWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleScoreParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormatText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChorusNameText;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnResultDisplayEnded;
    
    UHbkBattleScoreParentWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetChorusText(int32 ChorusNum);
    
    UFUNCTION(BlueprintCallable)
    void EndResultDisplay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetVisibleReverbBonus(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBattleEnded(const FHbkBattleResultDetail& ResultDetail, const FHbkBattleResultScoreDetail& ScoreDetail, const FHbkBattleResultScoreDetail& JustTimingDetail, const FHbkBattleResultScoreDetail& TimeDetail);
    
    UFUNCTION(BlueprintCallable)
    void BattleEnded(const FHbkBattleResultDetail& ResultDetail, const FHbkBattleResultScoreDetail& ScoreDetail, const FHbkBattleResultScoreDetail& JustTimingDetail, const FHbkBattleResultScoreDetail& TimeDetail);
    
};

