#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleType.h"
#include "HbkUserWidget.h"
#include "HbkBossCommandScoreBarPartsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBossCommandScoreBarPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkBossCommandScoreBarPartsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetType(EHbkBossCommandBattleType buttonType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPassInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisappear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeatTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppear(bool bIsQuarter);
    
};

