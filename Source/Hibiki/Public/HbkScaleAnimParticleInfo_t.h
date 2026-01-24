#pragma once
#include "CoreMinimal.h"
#include "HbkScaleAnimParticleInfo_t.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkScaleAnimParticleInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float startScale;
    
    HIBIKI_API FHbkScaleAnimParticleInfo_t();
};

