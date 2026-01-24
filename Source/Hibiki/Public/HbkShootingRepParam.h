#pragma once
#include "CoreMinimal.h"
#include "HbkShootingRepParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkShootingRepParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShootParamIndex;
    
    FHbkShootingRepParam();
};

