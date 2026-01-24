#pragma once
#include "CoreMinimal.h"
#include "EHbkBossGaugeType.h"
#include "HbkBossGaugeWidgetSetting.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkBossGaugeParentWidget.generated.h"

class AHbkBossCharacterBase;
class UHbkBossGageBaseWidget;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBossGaugeParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkBossGaugeType, TSubclassOf<UHbkBossGageBaseWidget>> GaugeClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkBossGaugeType, FHbkBossGaugeWidgetSetting> GaugeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
public:
    UHbkBossGaugeParentWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveBossGauge();
    
    UFUNCTION(BlueprintCallable)
    UHbkBossGageBaseWidget* CreateBossGauge(EHbkBossGaugeType BossType, AHbkBossCharacterBase* BossActor);
    
};

