#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeSelectableBaseWidget.h"
#include "HbkChaiCostumePartWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkChaiCostumePartWidget : public UHbkCostumeSelectableBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CostumeIcon;
    
public:
    UHbkChaiCostumePartWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
};

