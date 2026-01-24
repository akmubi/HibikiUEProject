#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EHbkPartnerIconState.h"
#include "EHbkPartnerType.h"
#include "HbkIconWidgetBase.h"
#include "HbkPartnerIconWidget.generated.h"

class USpacer;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPartnerIconWidget : public UHbkIconWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerIconState, UWidgetAnimation*> AnimMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PartnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* DistRateViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BaseCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerIconState st;
    
public:
    UHbkPartnerIconWidget();

    UFUNCTION(BlueprintCallable)
    bool PlayAction(EHbkPartnerIconState Action, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoopAnimUnBind();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetWidgetLocationAndScale(FVector2D Location, float Scale, float Direction, bool isScreenOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetPartnerFaceImage(EHbkPartnerType PartnerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlayArrowVisibleAnim(bool IsVisible);
    
};

