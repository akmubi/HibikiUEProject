#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_StagePlaceInfo.generated.h"

class AActor;
class AHbkBlockingVolumeBase;

USTRUCT(BlueprintType)
struct FHbkEm6000_StagePlaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AreaSetupLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkBlockingVolumeBase>> BlockingVolumes;
    
    HIBIKI_API FHbkEm6000_StagePlaceInfo();
};

