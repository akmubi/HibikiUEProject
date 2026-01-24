#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkMagnetRailWidget.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMagnetRailWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pos_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pos_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeIn_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOut_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BaseCanvas;
    
public:
    UHbkMagnetRailWidget();

    UFUNCTION(BlueprintCallable)
    void StartAnim();
    
    UFUNCTION(BlueprintCallable)
    void EndAnim();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallDisplayEnd();
    
};

