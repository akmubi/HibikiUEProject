#pragma once
#include "CoreMinimal.h"
#include "HbkOptionSettingBaseWidget.h"
#include "HbkOptionSettingGammaWidget.generated.h"

class UAkAudioEvent;
class UHbkOptionListItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionSettingGammaWidget : public UHbkOptionSettingBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetExecuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeValueSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* ListItemGamma;
    
public:
    UHbkOptionSettingGammaWidget();

    UFUNCTION(BlueprintCallable)
    void CancelDialog();
    
    UFUNCTION(BlueprintCallable)
    void AcceptRestoreDefaultSettings();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReflectChangesForInitialSetting();
    
};

