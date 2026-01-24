#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkDamageEffectWidget.generated.h"

class UTngUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDamageEffectWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DyingOpenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DyingLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DamagedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RecoverDyingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngUserWidget* DamageEffect;
    
public:
    UHbkDamageEffectWidget();

    UFUNCTION(BlueprintCallable)
    void PlayRecoverDyingAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayDyingOpenAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayDamagedAnim();
    
};

