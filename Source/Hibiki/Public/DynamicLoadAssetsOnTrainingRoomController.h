#pragma once
#include "CoreMinimal.h"
#include "DynamicLoadAssetsOnTrainingRoomController.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDynamicLoadAssetsOnTrainingRoomController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> PreLoadAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* pPreLoadAsset;
    
    HIBIKI_API FDynamicLoadAssetsOnTrainingRoomController();
};

