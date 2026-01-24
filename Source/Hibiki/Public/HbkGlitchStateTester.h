#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGlitchStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkGlitchStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkGlitchStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName);
    
};

