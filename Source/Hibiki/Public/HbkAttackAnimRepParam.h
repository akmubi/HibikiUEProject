#pragma once
#include "CoreMinimal.h"
#include "HbkAttackAnimRepParam.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAttackAnimRepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PerformedMontage;
    
    FHbkAttackAnimRepParam();
};

