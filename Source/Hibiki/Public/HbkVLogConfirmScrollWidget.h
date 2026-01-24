#pragma once
#include "CoreMinimal.h"
#include "HbkVLogConfirmPartWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "HbkVLogConfirmScrollWidget.generated.h"

class UHbkListControlWidget;
class UHbkVLogConfirmScrollItemWidget;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkVLogConfirmScrollWidget : public UHbkVLogConfirmPartWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ItemScrollList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkVLogConfirmScrollItemWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkVLogConfirmScrollItemWidget*> ItemWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
public:
    UHbkVLogConfirmScrollWidget();

private:
    UFUNCTION(BlueprintCallable)
    void AutoScroll(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
};

