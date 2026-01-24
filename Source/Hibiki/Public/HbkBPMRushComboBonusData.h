#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushComboBonusData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushComboBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCombos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Point;
    
    HIBIKI_API FHbkBPMRushComboBonusData();
};

