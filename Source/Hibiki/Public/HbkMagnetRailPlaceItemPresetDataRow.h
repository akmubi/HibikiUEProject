#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkGimmick_MagnetRailPlaceObject_ItemInfo.h"
#include "HbkMagnetRailPlaceItemPresetDataRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMagnetRailPlaceItemPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_MagnetRailPlaceObject_ItemInfo> Items;
    
    HIBIKI_API FHbkMagnetRailPlaceItemPresetDataRow();
};

