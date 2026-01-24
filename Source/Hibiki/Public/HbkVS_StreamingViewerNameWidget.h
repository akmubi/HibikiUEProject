#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HbkVS_StreamingViewerNameWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkVS_StreamingViewerNameWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHbkVS_StreamingViewerNameWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetNameTextBlock();
    
};

