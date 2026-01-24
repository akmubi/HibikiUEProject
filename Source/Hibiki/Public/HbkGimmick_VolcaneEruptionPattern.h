#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneEruptionVolcaneBomb.h"
#include "HbkGimmick_VolcaneEruptionPattern.generated.h"

class AHbkGimmick_VolcaneBombMarker;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneEruptionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmick_VolcaneBombMarker*> VolcaneBombMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_VolcaneEruptionVolcaneBomb> VolcaneBombs;
    
    HIBIKI_API FHbkGimmick_VolcaneEruptionPattern();
};

