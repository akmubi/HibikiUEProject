#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000PerfectGuardParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkEm5000PerfectGuardParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    HIBIKI_API FHbkEm5000PerfectGuardParticle();
};

