#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EHbkMagnetActionState.h"
#include "HbkIconWidgetBase.h"
#include "HbkMagnetActionWidget.generated.h"

class UHbkMagnetTimingWidget;
class USpacer;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMagnetActionWidget : public UHbkIconWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkMagnetActionState, UWidgetAnimation*> AnimMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PartnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* DistRateViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BaseCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkMagnetTimingWidget* TimingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMagnetActionState TestState;
    
public:
    UHbkMagnetActionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SuccessMagnetTiming(bool bJustTiming);
    
    UFUNCTION(BlueprintCallable)
    void StartMagnetTimingGame_Whole();
    
    UFUNCTION(BlueprintCallable)
    void StartMagnetTimingGame_Half();
    
    UFUNCTION(BlueprintCallable)
    void StartMagnetTimingGame();
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayAction(EHbkMagnetActionState Action, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoopAnimUnBind();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FailedMagnetTimingGame();
    
    UFUNCTION(BlueprintCallable)
    void EndInputResultAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetWidgetLocationAndScale(FVector2D Location, float Scale, float Direction, bool isScreenOut, float AvairableArrowAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlayArrowVisibleAnim(bool IsVisible);
    
};

