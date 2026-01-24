#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "RhythmDungeonBattleWidget.generated.h"

class UHbkCommonTimerWidget;
class UImage;
class UOverlay;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API URhythmDungeonBattleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MissionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCommonTimerWidget* TimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BuffIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BattleConditionWindow;
    
public:
    URhythmDungeonBattleWidget();

    UFUNCTION(BlueprintCallable)
    void ShowTimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowMissionWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetTimerTitle(const FText& TimerTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float Time, bool IsInfinite);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionText(const FText& MissionText, bool isBufforDebuff);
    
    UFUNCTION(BlueprintCallable)
    void HideTimerWidget();
    
    UFUNCTION(BlueprintCallable)
    void HideMissionWidget();
    
};

