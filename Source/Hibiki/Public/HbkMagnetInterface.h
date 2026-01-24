#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHbkPlayerMagnetBackstabType.h"
#include "HbkMagnetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkMagnetInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkMagnetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMagnetReachedInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHbkPlayerMagnetBackstabType GetMagnetBackstabType() const;
    
};

