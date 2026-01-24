#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HbkStagingInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkStagingInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkStagingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetStagingOffset(FGameplayTag TargetTag, FTransform& Out);
    
};

