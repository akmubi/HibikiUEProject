#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HbkVS_StreamingViewerStateWidget.generated.h"

class UHbkVS_StreamingViewerSucWidget;
class UTngUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkVS_StreamingViewerStateWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHbkVS_StreamingViewerStateWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHbkVS_StreamingViewerSucWidget* GetSuccessWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTngUserWidget* GetPlayerStateWidget();
    
};

