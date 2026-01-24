#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakBase_VfxInfo_t.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_BreakBase_VfxInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> BreakVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pBreakVfx;
    
    HIBIKI_API FHbkGimmick_BreakBase_VfxInfo_t();
};

