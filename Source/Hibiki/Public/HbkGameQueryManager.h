#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TngGameSystem.h"
#include "HbkGameQueryManager.generated.h"

class AActor;
class UHbkGameAgentComponent;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameQueryManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UHbkGameQueryManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameAgentComponent* K2_FindGameAgent(UObject* WorldContextObject, const FGameplayTag RoleTag, FName callSign);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool K2_FindGameActors(UObject* WorldContextObject, const FGameplayTag RoleTag, FName callSign, TArray<AActor*>& OutArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* K2_FindGameActor(UObject* WorldContextObject, const FGameplayTag RoleTag, FName callSign);
    
};

