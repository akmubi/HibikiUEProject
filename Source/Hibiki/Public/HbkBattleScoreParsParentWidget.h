#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkScoreActionType.h"
#include "HbkScoreTextData.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkBattleScoreParsParentWidget.generated.h"

class UHbkBattleManager;
class UHbkBattleScoreaAddPartsWidget;
class UHbkBattleScoreaMagnificationPartsWidget;
class UHbkBonusScoreTextDataAsset;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleScoreParsParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkBattleManager> BattleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPanelWidget> AddScorePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPanelWidget> MagnificationScorePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBattleScoreaAddPartsWidget> AddSoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBattleScoreaMagnificationPartsWidget> PlusMagnificationScoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBattleScoreaMagnificationPartsWidget> MinusMagnificationScoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawAllNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawMagnificationNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkScoreTextData> DrawTextDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBonusScoreTextDataAsset* DrawTextAsset;
    
public:
    UHbkBattleScoreParsParentWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAddPartsPos();
    
    UFUNCTION(BlueprintCallable)
    void StartMagnification(EHbkScoreActionType ActionType, float ScoreScale, int32 BarCount, float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInfo(UPanelWidget* NewAddScorePanel, UPanelWidget* NewMagnificationScorePanel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishMagnification(EHbkScoreActionType ActionType);
    
    UFUNCTION(BlueprintCallable)
    void AddScore(EHbkScoreActionType ActionType, FGameplayTagContainer ActionTags, float ChangeValue);
    
};

