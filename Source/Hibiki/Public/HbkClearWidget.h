#pragma once
#include "CoreMinimal.h"
#include "HbkTaskClearDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkClearWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkClearWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnReturnToHideout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskClearDelegate DisplayEnd;
    
    UHbkClearWidget();

};

