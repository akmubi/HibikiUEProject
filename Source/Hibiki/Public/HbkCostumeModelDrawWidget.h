#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeSelectableBaseWidget.h"
#include "HbkCostumeModelDrawWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UHbkCostumeModelDrawWidget : public UHbkCostumeSelectableBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CostumeModelImage;
    
public:
    UHbkCostumeModelDrawWidget();

};

