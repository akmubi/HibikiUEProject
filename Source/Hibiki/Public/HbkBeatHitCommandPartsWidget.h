#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBeatHitCommandPartsWidget.generated.h"

class UHbkBeatHitCommandWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBeatHitCommandPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBeatHitCommandWidget* OwnerPanel;
    
    UHbkBeatHitCommandPartsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySuccessAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailureAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDefaultAnim();
    
};

