#pragma once
#include "CoreMinimal.h"
#include "HbkEndingCreditsComponentBaseWidget.h"
#include "HbkEndingCreditsTextureWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsTextureWidget : public UHbkEndingCreditsComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MainImage;
    
public:
    UHbkEndingCreditsTextureWidget();

};

