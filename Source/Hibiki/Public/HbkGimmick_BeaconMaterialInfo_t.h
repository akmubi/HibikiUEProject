#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BeaconMaterialInfo_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_BeaconMaterialInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interpSpd;
    
    FHbkGimmick_BeaconMaterialInfo_t();
};

