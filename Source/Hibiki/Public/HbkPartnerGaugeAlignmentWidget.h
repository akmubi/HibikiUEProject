#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkPartnerType.h"
#include "HbkUserWidget.h"
#include "HbkPartnerGaugeAlignmentWidget.generated.h"

class UAkAudioEvent;
class UHbkPartnerChargeCompWidget;
class UHbkPartnerGaugeWidget;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPartnerGaugeAlignmentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOverlay*> GaugeParentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, UHbkPartnerGaugeWidget*> GaugeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, UHbkPartnerChargeCompWidget*> CompMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* OutLineImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* PartnerChangeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BasePositionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ChangeCharaAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> ChangeAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PartnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SelectSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PartnerChangeButton;
    
public:
    UHbkPartnerGaugeAlignmentWidget();

    UFUNCTION(BlueprintCallable)
    void SwapPartnerGauge(int32 PartnerID, bool PlaySE);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPosition();
    
};

