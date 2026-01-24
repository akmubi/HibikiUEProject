#pragma once
#include "CoreMinimal.h"
#include "HbkEm0660_ExplosionBeamData.generated.h"

class UAkComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FHbkEm0660_ExplosionBeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> BeamParticleComp;
    
    HIBIKI_API FHbkEm0660_ExplosionBeamData();
};

