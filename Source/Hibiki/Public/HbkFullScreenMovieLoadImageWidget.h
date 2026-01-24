#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkFullScreenMovieLoadImageWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHbkFullScreenMovieLoadImageWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkFullScreenMovieLoadImageWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(UTexture2D* InTexture);
    
};

