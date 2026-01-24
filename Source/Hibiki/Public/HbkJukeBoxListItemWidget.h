#pragma once
#include "CoreMinimal.h"
#include "HbkJukeBoxChildrenBaseWidget.h"
#include "HbkListItemInterface.h"
#include "HbkJukeBoxListItemWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxListItemWidget : public UHbkJukeBoxChildrenBaseWidget, public IHbkListItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_MusicTitle;
    
public:
    UHbkJukeBoxListItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnSelectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySelectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEnableMusicPlayIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDisableMusicPlayIcon();
    

    // Fix for true pure virtual functions not being implemented
};

