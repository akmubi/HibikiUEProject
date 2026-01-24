#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HbkHideOutFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkHideOutFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkHideOutFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ModifyMetricsOnOpenSpectraHub(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasCostumeExceptDefault(UObject* WorldContextObject);
    
};

