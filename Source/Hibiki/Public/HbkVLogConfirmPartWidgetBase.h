#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkVLogConfirmPartWidgetBase.generated.h"

class AHbkVLogConfirmController;
class UHbkVLogConfirmBaseWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkVLogConfirmPartWidgetBase : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkVLogConfirmController> VLogController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkVLogConfirmBaseWidget* VLogBaseWidget;
    
public:
    UHbkVLogConfirmPartWidgetBase();

};

