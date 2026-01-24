#pragma once
#include "CoreMinimal.h"
#include "HbkListItemInterface.h"
#include "HbkVLogConfirmPartWidgetBase.h"
#include "HbkVLogConfirmScrollItemWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkVLogConfirmScrollItemWidget : public UHbkVLogConfirmPartWidgetBase, public IHbkListItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectBg;
    
public:
    UHbkVLogConfirmScrollItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlayUnSelectAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlaySelectAnim();
    

    // Fix for true pure virtual functions not being implemented
};

