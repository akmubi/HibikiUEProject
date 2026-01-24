#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkARPostStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkARPostStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkARPostStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName);
    
};

