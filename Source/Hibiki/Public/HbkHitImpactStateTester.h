#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHitImpactStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkHitImpactStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkHitImpactStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName);
    
};

