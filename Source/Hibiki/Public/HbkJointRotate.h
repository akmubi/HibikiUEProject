#pragma once
#include "CoreMinimal.h"
#include "HbkJointRotate.generated.h"

USTRUCT(BlueprintType)
struct FHbkJointRotate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Body00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Joint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Joint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Joint3;
    
    HIBIKI_API FHbkJointRotate();
};

