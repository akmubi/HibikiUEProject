#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBossGageBaseWidget.generated.h"

class AHbkBossCharacterBase;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBossGageBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkBossCharacterBase> BossChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StatePhaseNumList;
    
public:
    UHbkBossGageBaseWidget();

    UFUNCTION(BlueprintCallable)
    void Setup(AHbkBossCharacterBase* BossActor);
    
    UFUNCTION(BlueprintCallable)
    FText SetMusicPartNameText(FText FormatText, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhaseNum(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNowPhaseRate();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangePhase(int32 PhaseNum);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHealth(int32 StateIndex, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeState(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangePhase(int32 PhaseIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeHealth(int32 StateIndex, float Rate);
    
};

