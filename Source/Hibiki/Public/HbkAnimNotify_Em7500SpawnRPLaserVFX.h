#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_Em7500SpawnRPLaserVFX.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em7500SpawnRPLaserVFX : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RhythmParryLaserParticle;
    
public:
    UHbkAnimNotify_Em7500SpawnRPLaserVFX();

};

