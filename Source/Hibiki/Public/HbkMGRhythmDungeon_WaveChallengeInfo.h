#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmDungeon_RankAssetInfo.h"
#include "HbkMGRhythmDungeon_WaveChallengeInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmDungeon_WaveChallengeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmDungeon_RankAssetInfo RankAssetInfo;
    
    HIBIKI_API FHbkMGRhythmDungeon_WaveChallengeInfo();
};

