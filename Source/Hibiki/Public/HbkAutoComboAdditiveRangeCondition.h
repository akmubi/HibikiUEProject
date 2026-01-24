#pragma once
#include "CoreMinimal.h"
#include "EHbkAutoComboRangeCondition.h"
#include "HbkAutoComboAdditiveRangeCondition.generated.h"

USTRUCT(BlueprintType)
struct FHbkAutoComboAdditiveRangeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAutoComboRangeCondition RangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveRate;
    
    HIBIKI_API FHbkAutoComboAdditiveRangeCondition();
};

