#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_FinDPlanterVFXInfo_t.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_FinDPlanterVFXInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> HitVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pHitVFX;
    
    HIBIKI_API FHbkGimmick_FinDPlanterVFXInfo_t();
};

