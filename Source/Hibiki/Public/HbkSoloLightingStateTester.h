#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkSoloLightingStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkSoloLightingStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkSoloLightingStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName);
    
};

