#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg0180_VfxInfo_t.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg0180_VfxInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> CloseEndVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pCloseEndVFX;
    
    HIBIKI_API FHbkGimmick_bg0180_VfxInfo_t();
};

