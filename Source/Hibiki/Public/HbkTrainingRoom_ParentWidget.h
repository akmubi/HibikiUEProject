#pragma once
#include "CoreMinimal.h"
#include "HbkTrainingRoom_MenuBase.h"
#include "HbkTrainingRoom_ParentWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonWidget;
class UHbkListControlWidget;
class UHbkTrainingRoom_SelectItemBaseWidget;
class UHbkTrainingRoom_SettingItemWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTrainingRoom_ParentWidget : public UHbkTrainingRoom_MenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* CommandSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* EnemyAISettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* RecoverSPGaugeSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* EnemyTypeSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* EnemyHPGaugeSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* EnemyDontDieSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* RhythmAssistSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTrainingRoom_SettingItemWidget* MusicTempoSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetExecuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeValueSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ReturnToHideoutButton;
    
public:
    UHbkTrainingRoom_ParentWidget();

    UFUNCTION(BlueprintCallable)
    void OnMouseOverSettingItem(UHbkTrainingRoom_SelectItemBaseWidget* SettingItem);
    
};

