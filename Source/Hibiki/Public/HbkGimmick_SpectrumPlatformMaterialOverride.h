#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SpectrumPlatformMaterialOverride.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectrumPlatformMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialRef;
    
    HIBIKI_API FHbkGimmick_SpectrumPlatformMaterialOverride();
};

