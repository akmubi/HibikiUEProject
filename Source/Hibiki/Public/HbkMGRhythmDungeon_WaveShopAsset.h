#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmDungeon_WaveShopInfo.h"
#include "HbkMGRhythmDungeon_WaveShopAsset.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveShopAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkMGRhythmDungeon_WaveShopInfo> ShopAssetList;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveShopAsset();
};

