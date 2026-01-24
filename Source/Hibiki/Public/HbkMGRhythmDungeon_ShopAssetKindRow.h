#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmDungeon_ProductInfo.h"
#include "HbkMGRhythmDungeon_ShopAssetKindRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_ShopAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMGRhythmDungeon_ProductInfo> ProductList;
    
    HIBIKI_API FHbkMGRhythmDungeon_ShopAssetKindRow();
};

