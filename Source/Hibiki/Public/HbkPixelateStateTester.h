#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPixelateStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkPixelateStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkPixelateStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName);
    
};

