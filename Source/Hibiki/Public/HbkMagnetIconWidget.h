#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EHbkMagnetAction.h"
#include "HbkIconWidgetBase.h"
#include "HbkMagnetIconWidget.generated.h"

class UHbkMagnetTimingWidget;
class UImage;
class UOverlay;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMagnetIconWidget : public UHbkIconWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkMagnetAction, UWidgetAnimation*> AnimMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* GuideAngleOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CircleImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Guide_InRangeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Guide_OutRangeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SubCircleBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RangeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkMagnetTimingWidget* TimingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AvailableLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMagnetAction CheckState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dist;
    
    UHbkMagnetIconWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SuccessMagnetTiming(bool bJustTiming);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAction(EHbkMagnetAction PlayAnim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartMagnetTimingGame();
    
    UFUNCTION(BlueprintCallable)
    void PlayGuideLoopAnim(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void PlayAvailableLoopAnim(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayAction(EHbkMagnetAction PlayAnim, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FailedMagnetTimingGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartPlayAction(EHbkMagnetAction Action, int32 LoopNum, EUMGSequencePlayMode::Type PlayMode, float PlaySpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetWidgetLocationAndScale(FVector2D Location, float Scale, bool isScreenOut);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlayOffScreenAnim();
    
    UFUNCTION(BlueprintCallable)
    void BindPlayGuideLoopAnim();
    
    UFUNCTION(BlueprintCallable)
    void BindPlayAvailableLoopAnim();
    
};

