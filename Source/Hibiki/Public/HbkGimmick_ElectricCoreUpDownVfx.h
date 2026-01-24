#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricCoreUpDownVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricCoreUpDownVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ExternalDischargeVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExternalDischargeVfxRef;
    
    HIBIKI_API FHbkGimmick_ElectricCoreUpDownVfx();
};

