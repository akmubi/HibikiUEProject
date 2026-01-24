#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkJukeBoxChildrenBaseWidget.generated.h"

class AHbkJukeBoxController;
class UHbkJukeBoxWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkJukeBoxChildrenBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkJukeBoxController> JukeBoxController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkJukeBoxWidget* JukeBoxMainWidget;
    
public:
    UHbkJukeBoxChildrenBaseWidget();

};

