#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HbkGimmickOperateObjectInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkGimmickOperateObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkGimmickOperateObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetComponentPartnerPointEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetComponentCollisionEnabled(bool Enabled);
    
};

