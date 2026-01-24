#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailPlaceObject_ItemLocationType.h"
#include "EHbkGimmick_MagnetRailPlaceObject_ItemType.h"
#include "HbkGimmick_MagnetRailPlaceObject_ItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailPlaceObject_ItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount16th;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailPlaceObject_ItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailPlaceObject_ItemLocationType LocationType;
    
    HIBIKI_API FHbkGimmick_MagnetRailPlaceObject_ItemInfo();
};

