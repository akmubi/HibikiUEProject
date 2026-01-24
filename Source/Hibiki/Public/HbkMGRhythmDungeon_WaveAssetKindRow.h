#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmDungeon_WaveBattleAssetInfo.h"
#include "HbkMGRhythmDungeon_WaveChallengeInfo.h"
#include "HbkMGRhythmDungeon_WaveLevelAssetInfo.h"
#include "HbkMGRhythmDungeon_WaveShopAsset.h"
#include "HbkMGRhythmDungeon_WaveSoundAssetInfo.h"
#include "HbkMGRhythmDungeon_WaveAssetKindRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RhythmDungeonResult;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 JoinedPartnerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_WaveShopAsset ShopInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_WaveChallengeInfo ChallengeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_WaveBattleAssetInfo BattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_WaveLevelAssetInfo LevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_WaveSoundAssetInfo soundInfo;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveAssetKindRow();
};

