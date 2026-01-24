#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500ArmParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500ArmParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SArmHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FArmHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BArmHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmSupportHealRate;
    
    HIBIKI_API FHbkEm7500ArmParam();
};

