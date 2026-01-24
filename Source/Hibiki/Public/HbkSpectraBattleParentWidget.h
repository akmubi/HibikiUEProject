#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSpectraBattleParentWidget.generated.h"

class UHbkCommonTimerWidget;
class UHbkSpectraBattleConditionWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpectraBattleParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectraBattleConditionWidget* MissionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCommonTimerWidget* TimerWidget;
    
public:
    UHbkSpectraBattleParentWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateAchivedCount(int32 AchivedCount);
    
    UFUNCTION(BlueprintCallable)
    void ShowTimer();
    
    UFUNCTION(BlueprintCallable)
    void ShowMission();
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void Init(FText MissionText, int32 MaxCount, int32 AchivedCount);
    
    UFUNCTION(BlueprintCallable)
    void HideTimer();
    
    UFUNCTION(BlueprintCallable)
    void HideMission();
    
};

