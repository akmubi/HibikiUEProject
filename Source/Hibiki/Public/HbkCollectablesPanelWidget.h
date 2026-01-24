#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkCollectablesPanelWidget.generated.h"

class UHbkCollectablesPartsWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCollectablesPanelWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCollectablesPartsWidget* LifeCorePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCollectablesPartsWidget* ReverbePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCollectablesPartsWidget* LifeTankPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCollectablesPartsWidget* CircuitPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCollectablesPartsWidget* VLogPanel;
    
public:
    UHbkCollectablesPanelWidget();

};

