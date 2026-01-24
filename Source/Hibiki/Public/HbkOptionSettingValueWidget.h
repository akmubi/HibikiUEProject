#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkOptionSettingValueWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class USizeBox;
class USpacer;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionSettingValueWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeValueSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ValueSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ValueSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* ValueSliderHitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonBaseWidget* LeftArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonBaseWidget* RightArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonBaseWidget* ValueTextButton;
    
public:
    UHbkOptionSettingValueWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickedValueTextButton(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedRightArrowButton(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedLeftArrowButton(const UHbkButtonBaseWidget* Sender);
    
};

