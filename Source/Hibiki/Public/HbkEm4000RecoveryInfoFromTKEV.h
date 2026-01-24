#pragma once
#include "CoreMinimal.h"
#include "HbkEm4000RecoveryInfoFromTKEV.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm4000RecoveryInfoFromTKEV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryRate;
    
    HIBIKI_API FHbkEm4000RecoveryInfoFromTKEV();
};

