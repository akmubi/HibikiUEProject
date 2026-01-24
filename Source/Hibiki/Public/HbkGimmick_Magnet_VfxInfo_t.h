#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_Magnet_VfxInfo_t.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_Magnet_VfxInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> BreakBarrierVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pBreakBarrierVfx;
    
    HIBIKI_API FHbkGimmick_Magnet_VfxInfo_t();
};

