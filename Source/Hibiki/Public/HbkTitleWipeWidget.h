#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTitleWipeWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkTitleWipeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WipeAnimation;
    
public:
    UHbkTitleWipeWidget();

};

