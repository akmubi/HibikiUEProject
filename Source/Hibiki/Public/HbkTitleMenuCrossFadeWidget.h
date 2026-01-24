#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTitleMenuCrossFadeWidget.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UHbkTitleMenuCrossFadeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkTitleMenuCrossFadeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeIn(UMaterialInterface* ImgMaterial);
    
};

