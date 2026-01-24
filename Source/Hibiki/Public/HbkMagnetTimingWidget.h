#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkMagnetTimingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMagnetTimingWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStartMagnetTimming;
    
    UHbkMagnetTimingWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayJustTiming();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailuer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCountDownWhole();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCountDownHalf();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCountDown();
    
};

