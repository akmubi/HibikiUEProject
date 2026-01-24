#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkOptionCommonBackgroundWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionCommonBackgroundWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ButtonDescription;
    
public:
    UHbkOptionCommonBackgroundWidget();

};

