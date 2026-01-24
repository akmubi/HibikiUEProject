#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.h"
#include "EHbkEm5000BridgeBreakdownCommand.h"
#include "EHbkEm5000BridgeBreakdownProcess.h"
#include "HbkUserWidget.h"
#include "HbkDebug_Em5000BridgeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDebug_Em5000BridgeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkDebug_Em5000BridgeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSuccessRate(float Rate, int32 SuccessCount, int32 TotalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPopularityRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayingRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPassSuccessRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJudgementResult(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandResult(int32 Index, EHbkBossCommandBattleResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBridgeBreakdownProcess(EHbkEm5000BridgeBreakdownProcess Process);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputCommand(EHbkEm5000BridgeBreakdownCommand Command);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCommandIcon(float Rate, EHbkEm5000BridgeBreakdownCommand Command, float PreSuccessRate, float PostSuccessRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearCommandIcon();
    
};

