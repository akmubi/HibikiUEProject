#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmTower_ItemAssetInfo.h"
#include "HbkMGRhythmTower_ShopAssetKindRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_ShopAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_ItemAssetInfo Item;
    
    HIBIKI_API FHbkMGRhythmTower_ShopAssetKindRow();
};

