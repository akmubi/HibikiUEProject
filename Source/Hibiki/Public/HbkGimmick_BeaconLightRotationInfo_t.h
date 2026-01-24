#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BeaconRotationInfo_t.h"
#include "HbkGimmick_BeaconLightRotationInfo_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_BeaconLightRotationInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BeaconRotationInfo_t rotInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lightInterpSpd;
    
    FHbkGimmick_BeaconLightRotationInfo_t();
};

