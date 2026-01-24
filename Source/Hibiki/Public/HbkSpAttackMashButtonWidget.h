#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/WidgetAnimation.h"
#include "HbkUserWidget.h"
#include "HbkSpAttackMashButtonWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonWidget;
class UOverlay;
class UScaleBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpAttackMashButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_CallAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CallAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MashButton_CallAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MashButton_Reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MashSE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent FinishedReactionAnimationDelegate;
    
public:
    UHbkSpAttackMashButtonWidget();

    UFUNCTION(BlueprintCallable)
    void StartReactionAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartCallActionAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedReactionAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitIn2DLocation(FVector2D Offset, FName ButtonID, bool IsOverWriteReactionAnimation);
    
    UFUNCTION(BlueprintCallable)
    void Init(FVector Location, FName ButtonID, bool IsOverWriteReactionAnimation);
    
};

