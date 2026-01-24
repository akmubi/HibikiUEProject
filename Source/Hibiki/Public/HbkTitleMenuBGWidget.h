#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTitleMenuBGWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UHbkTitleMenuBGWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BottomHelps;
    
public:
    UHbkTitleMenuBGWidget();

};

