#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSpectraScoreDetailWidget.generated.h"

class UHbkCollectablesPartsWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSpectraScoreDetailWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ItemArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCollectablesPartsWidget* CollactablePanel;
    
public:
    UHbkSpectraScoreDetailWidget();

};

