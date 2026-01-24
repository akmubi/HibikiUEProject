#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkGamerTagWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkGamerTagWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GamerTagTextBlock;
    
public:
    UHbkGamerTagWidget();

};

