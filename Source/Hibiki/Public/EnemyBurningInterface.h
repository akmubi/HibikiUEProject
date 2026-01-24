#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyBurningInterface.generated.h"

class UHbkEnemyBurningComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UEnemyBurningInterface : public UInterface {
    GENERATED_BODY()
};

class IEnemyBurningInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBurningState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnabledChangeToBurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBurningState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHbkEnemyBurningComponent* GetBurningComponent();
    
};

