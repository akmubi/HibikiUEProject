#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerSpectrum.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkBattleTriggerSpectrum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpectrumActors;
    
    HIBIKI_API FHbkBattleTriggerSpectrum();
};

