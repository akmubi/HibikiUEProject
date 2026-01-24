#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushParriesBonusData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushParriesBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumParries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Point;
    
    HIBIKI_API FHbkBPMRushParriesBonusData();
};

