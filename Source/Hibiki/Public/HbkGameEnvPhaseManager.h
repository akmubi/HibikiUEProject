#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkGameEnvPhase.h"
#include "HbkGameEnvPhaseManager.generated.h"

UCLASS(Blueprintable)
class UHbkGameEnvPhaseManager : public UObject {
    GENERATED_BODY()
public:
    UHbkGameEnvPhaseManager();

    UFUNCTION(BlueprintCallable)
    void SwitchPhase(const EHbkGameEnvPhase NewGameEnvPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGameEnvPhase GetActiveGameEnvPhase() const;
    
};

