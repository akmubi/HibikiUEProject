#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_RepulsionInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_RepulsionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoreRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    HIBIKI_API FHbkEm6000_RepulsionInfo();
};

