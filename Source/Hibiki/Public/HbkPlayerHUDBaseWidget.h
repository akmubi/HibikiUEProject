#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EHbkPlayerHUDPresetType.h"
#include "EHbkPlayerHUDWidgetType.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerHUDBaseWidget.generated.h"

class UHbkBossGaugeParentWidget;
class UHbkPlayerHUDDataObject;
class UHbkPlayerHUDSettingsAsset;
class UOverlay;
class UTngUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPlayerHUDBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerHUDWidgetType, UWidget*> WidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerHUDWidgetType, TSubclassOf<UTngUserWidget>> WidgetClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayerHUDSettingsAsset* PresetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossGaugeParentWidget* BossGaugeParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BattleResultBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BattleScoreBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RhythmMeterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RhythmAssistBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
public:
    UHbkPlayerHUDBaseWidget();

    UFUNCTION(BlueprintCallable)
    void SetWidgetVisibilitiesPreset(EHbkPlayerHUDPresetType PresetType);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetVisibilitiesData(TSubclassOf<UHbkPlayerHUDDataObject> PresetDeta, bool bIsChangeDrawChangeFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecifyWidgetVisibility(EHbkPlayerHUDWidgetType WidgetType, ESlateVisibility Vis);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveHUDWidget(EHbkPlayerHUDWidgetType WidgetType);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    UTngUserWidget* GetHUDWidget(EHbkPlayerHUDWidgetType WidgetType);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    UTngUserWidget* CreateHUDWidget(EHbkPlayerHUDWidgetType WidgetType);
    
};

