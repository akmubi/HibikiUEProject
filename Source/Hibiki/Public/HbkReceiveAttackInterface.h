#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HbkReceiveAttackInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkReceiveAttackInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkReceiveAttackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsReceiveAttack(AActor* Attacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateGravityHoldStun(AActor* Deactivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateGravityHoldStun(AActor* Activator);
    
};

