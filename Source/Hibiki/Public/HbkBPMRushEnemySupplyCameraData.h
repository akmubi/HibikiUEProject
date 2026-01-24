#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBPMRushEnemySupplyCameraData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySupplyCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSupplyCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDelayBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuringCameraSeconds;
    
    HIBIKI_API FHbkBPMRushEnemySupplyCameraData();
};

