#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBNetModalBaseWidget.generated.h"

class UAkAudioEvent;
class UHbkBNetComponentBaseWidget;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetModalBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SelectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkBNetComponentBaseWidget*> SelectableItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* InputMaskSpacer;
    
public:
    UHbkBNetModalBaseWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void FinishAllModal();
    
    UFUNCTION(BlueprintCallable)
    void BackToPrevModal();
    
};

