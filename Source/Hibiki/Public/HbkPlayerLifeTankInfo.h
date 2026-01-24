#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerLifeTankInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerLifeTankInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TankCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TankRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TankNumMax;
    
    HIBIKI_API FHbkPlayerLifeTankInfo();
};

