#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_BeaconRotationInfo_t.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_BeaconRotationInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interpSpd;
    
    FHbkGimmick_BeaconRotationInfo_t();
};

