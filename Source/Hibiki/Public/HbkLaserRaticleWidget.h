#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkUserWidget.h"
#include "HbkLaserRaticleWidget.generated.h"

class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkLaserRaticleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BaseOverlay;
    
public:
    UHbkLaserRaticleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetLocationAndScale(FVector2D Location, float Scale, bool isScreenOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPlayAnim();
    
};

