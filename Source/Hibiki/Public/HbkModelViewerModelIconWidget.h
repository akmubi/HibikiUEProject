#pragma once
#include "CoreMinimal.h"
#include "HbkButtonBaseWidget.h"
#include "HbkListItemInterface.h"
#include "HbkModelViewerModelIconWidget.generated.h"

class UAkAudioEvent;
class UImage;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkModelViewerModelIconWidget : public UHbkButtonBaseWidget, public IHbkListItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CursorSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuyHoldStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BuyHoldEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WhenHold_Gauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Unopened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Black;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Select_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Unselect_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Open_Anim;
    
public:
    UHbkModelViewerModelIconWidget();


    // Fix for true pure virtual functions not being implemented
};

