#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HbkNoticePopupWidgetInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UHbkNoticePopupWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkNoticePopupWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void OnFinishWidget() PURE_VIRTUAL(OnFinishWidget,);
    
};

