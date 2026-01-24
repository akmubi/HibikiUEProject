#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0240_VFXInfo_t.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0240_VFXInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> landingVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pLandingVFX;
    
    HIBIKI_API FHbkGimmick_bg0240_VFXInfo_t();
};

