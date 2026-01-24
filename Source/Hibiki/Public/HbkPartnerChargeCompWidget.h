#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkPartnerChargeCompWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPartnerChargeCompWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InCompAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OutCompAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AllCompAnim;
    
public:
    UHbkPartnerChargeCompWidget();

    UFUNCTION(BlueprintCallable)
    void StartCompAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayCompAnim();
    
    UFUNCTION(BlueprintCallable)
    void EndCompAnim();
    
};

