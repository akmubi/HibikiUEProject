#pragma once
#include "CoreMinimal.h"
#include "EHbkRepilsionWeightClass.h"
#include "HbkRepulsionPreset.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRepulsionPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRepilsionWeightClass WeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoreRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    FHbkRepulsionPreset();
};

