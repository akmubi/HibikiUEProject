#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HbkGameEnvFunction.generated.h"

class UHbkGlobalEnvManagerInstance;
class UHbkLightingManagerInstance;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameEnvFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkGameEnvFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HbkGameEnvPhaseSwitchEmissiveMaterialEditor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkLightingManagerInstance* GetHbkLightingManagerInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkGlobalEnvManagerInstance* GetHbkGlobalEnvManagerInstance(const UObject* WorldContextObject);
    
};

