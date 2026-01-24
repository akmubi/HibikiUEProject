#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkEndingCreditsSceneWidget.generated.h"

class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsSceneWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ComponentArea;
    
public:
    UHbkEndingCreditsSceneWidget();

};

