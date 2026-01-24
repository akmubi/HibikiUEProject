#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickComponentConstructionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkGimmickComponentConstructionInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkGimmickComponentConstructionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessConstructionScript(const FTransform& Transform);
    
};

