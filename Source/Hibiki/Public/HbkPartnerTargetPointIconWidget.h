#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EHbkPartnerTargetPointAction.h"
#include "EHbkPartnerType.h"
#include "HbkIconWidgetBase.h"
#include "HbkPartnerTargetPointIconWidget.generated.h"

class UImage;
class UOverlay;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPartnerTargetPointIconWidget : public UHbkIconWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerTargetPointAction, UWidgetAnimation*> AnimMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType Partner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* GuideAngleOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* GuideBaseOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CircleImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTaskFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GuideTriangleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SubCircleBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RangeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SubCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GuideEndAnim;
    
public:
    UHbkPartnerTargetPointIconWidget();

private:
    UFUNCTION(BlueprintCallable)
    void Task_PlayLoopAnim(int32 NoteCount, bool bOnBeat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayGuideLoopAnim(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayAction(EHbkPartnerTargetPointAction PlayAnim, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartPlayAction(EHbkPartnerTargetPointAction Action, int32 LoopNum, EUMGSequencePlayMode::Type PlayMode, float PlaySpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetWidgetLocationAndScale(FVector2D Location, float Scale, bool isScreenOut);
    
};

