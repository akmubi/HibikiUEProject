#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HbkGammaWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkGammaWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRepeatInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRepeatMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRepeatChangeSpeed;
    
public:
    UHbkGammaWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSliderValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDisplayGamma();
    
};

