#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailPlaceObject_ItemLocationType.h"
#include "EHbkGimmick_MagnetRailPlaceObject_TriggerType.h"
#include "HbkGimmick_MagnetRailPlaceObject_TriggerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailPlaceObject_TriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailPlaceObject_TriggerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailPlaceObject_ItemLocationType LocationType;
    
    HIBIKI_API FHbkGimmick_MagnetRailPlaceObject_TriggerInfo();
};

