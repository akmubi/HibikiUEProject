#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_ElectricCoreMacaronVfx.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricCoreMacaronVfx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> InternalDischargeVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* InternalDischargeVfxRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InternalDischargeRelativeLocation;
    
    HIBIKI_API FHbkGimmick_ElectricCoreMacaronVfx();
};

