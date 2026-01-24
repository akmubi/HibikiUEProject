#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HbkTextWidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkTextWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkTextWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHbkWidgetText(const FString& newText);
    
};

