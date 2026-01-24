#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetRailPlaceObject_ItemPreset.h"
#include "HbkGimmick_MagnetRailPlaceObject_PlaceItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailPlaceObject_PlaceItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailPlaceObject_ItemPreset ItemPreset;
    
    HIBIKI_API FHbkGimmick_MagnetRailPlaceObject_PlaceItemInfo();
};

