#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_GearRateInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_GearRateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearWaveNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    HIBIKI_API FHbkMGRhythmTower_GearRateInfo();
};

