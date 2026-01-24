#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHighlightState.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class UHbkHighlightState : public UObject {
    GENERATED_BODY()
public:
    UHbkHighlightState();

    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
};

