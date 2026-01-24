#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkCommonTimerWidget.generated.h"

class UAkAudioEvent;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCommonTimerWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AddTimeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TimeUpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TickingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfiniteText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RemainingTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AddSecondText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AddMilliSecondText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SubtractTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AddTimeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SubtractTimeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NotEnoughTimeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToNormalAnimation;
    
public:
    UHbkCommonTimerWidget();

    UFUNCTION(BlueprintCallable)
    void SetTitleText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerUnlimited();
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetNotEnoughTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PlaySubtractTimeAnimation(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PlayAddTimeAnimation(float Time);
    
};

