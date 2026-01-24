#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmDungeon_RankAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_RankAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RankS_AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RankA_AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RankB_AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RankC_AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RankD_AssetName;
    
    HIBIKI_API FHbkMGRhythmDungeon_RankAssetInfo();
};

