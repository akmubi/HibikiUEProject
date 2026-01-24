#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkUserWidget.h"
#include "HbkMimosaLockonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMimosaLockonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkMimosaLockonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocation(FVector2D Location, float Scale);
    
};

