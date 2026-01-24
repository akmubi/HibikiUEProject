#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SpectrumPlatformMaterialOverride.h"
#include "HbkGimmick_SpectrumPlatformMovement.h"
#include "HbkGimmick_SpectrumPlatformMovementExtInt.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectrumPlatformMovementExtInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectrumPlatformMovement Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SpectrumPlatformMaterialOverride> MaterialOverrides;
    
    HIBIKI_API FHbkGimmick_SpectrumPlatformMovementExtInt();
};

