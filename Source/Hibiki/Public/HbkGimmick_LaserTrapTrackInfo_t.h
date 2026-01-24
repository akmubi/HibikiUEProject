#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_LaserTrapTrackInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_LaserTrapTrackInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float aimRate;
    
    HIBIKI_API FHbkGimmick_LaserTrapTrackInfo_t();
};

