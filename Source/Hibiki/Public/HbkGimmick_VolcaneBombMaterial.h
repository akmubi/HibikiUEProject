#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_VolcaneBombMaterial.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneBombMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FrameSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FrameLocationOffset;
    
    HIBIKI_API FHbkGimmick_VolcaneBombMaterial();
};

