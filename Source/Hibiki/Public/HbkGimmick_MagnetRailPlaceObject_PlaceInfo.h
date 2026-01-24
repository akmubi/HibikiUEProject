#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_MagnetRailPlaceObject_ObjectInfo.h"
#include "HbkGimmick_MagnetRailPlaceObject_PlaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailPlaceObject_PlaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MagnetRailPlaceObject_ObjectInfo> Objects;
    
    HIBIKI_API FHbkGimmick_MagnetRailPlaceObject_PlaceInfo();
};

