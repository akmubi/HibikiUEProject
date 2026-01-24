#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkPhotoMenu_SectionTitleWidget.generated.h"

class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenu_SectionTitleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Title;
    
    UHbkPhotoMenu_SectionTitleWidget();

};

