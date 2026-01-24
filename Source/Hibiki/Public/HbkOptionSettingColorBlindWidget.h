#pragma once
#include "CoreMinimal.h"
#include "HbkOptionSettingBaseWidget.h"
#include "HbkOptionSettingColorBlindWidget.generated.h"

class UAkAudioEvent;
class UHbkListControlWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionSettingColorBlindWidget : public UHbkOptionSettingBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetExecuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeValueSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EditItemsPanel;
    
public:
    UHbkOptionSettingColorBlindWidget();

private:
    UFUNCTION(BlueprintCallable)
    void CancelDialog();
    
    UFUNCTION(BlueprintCallable)
    void AcceptRestoreDefaultSettings();
    
};

