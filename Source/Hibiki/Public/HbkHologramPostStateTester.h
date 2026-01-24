#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkHologramPostActivateGroup.h"
#include "HbkHologramPostStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkHologramPostStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkHologramPostStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName, const EHbkHologramPostActivateGroup ActiveHologramPostActivateGroup);
    
};

