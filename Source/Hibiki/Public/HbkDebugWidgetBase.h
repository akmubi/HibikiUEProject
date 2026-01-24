#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkUserWidget.h"
#include "HbkDebugWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugWidgetBase : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DebugWidgetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpacityHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDisplayDuringAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnableOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDisplayAfterClosing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isHiddenWhenLRReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatDelayTime;
    
public:
    UHbkDebugWidgetBase();

    UFUNCTION(BlueprintCallable)
    void ShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableOnly(bool NewEnableOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayDuringAction(bool NewDisplayDuringAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RightShoulderReleased();
    
    UFUNCTION(BlueprintCallable)
    void LeftShoulderReleased();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideWidget();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDebugWidgetTag() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EnableProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_DisableProcess();
    
public:
    UFUNCTION(BlueprintCallable)
    void Action();
    
};

