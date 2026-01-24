#pragma once
#include "CoreMinimal.h"
#include "HbkDebugWidgetBase.h"
#include "HbkDebugWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDebugWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
    UHbkDebugWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSlomoValueText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetSlomoText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetNoClipText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetGodText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetEnemyKillText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCrossUpImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCrossRightImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCrossLeftImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetCrossDownImage();
    
};

