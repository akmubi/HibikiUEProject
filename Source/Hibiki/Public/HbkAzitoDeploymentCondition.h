#pragma once
#include "CoreMinimal.h"
#include "HbkAzitoDeploymentCondition.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAzitoDeploymentCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateOption;
    
    FHbkAzitoDeploymentCondition();
};

