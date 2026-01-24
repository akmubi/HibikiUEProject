#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkMGRhythmTower_WaveBattleAssetInfo.h"
#include "HbkMGRhythmTower_WaveDebugAssetInfo.h"
#include "HbkMGRhythmTower_WaveLevelAssetInfo.h"
#include "HbkMGRhythmTower_WaveSoundAssetInfo.h"
#include "HbkMGRhythmTower_WaveAssetKindRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_WaveAssetKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrepareTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InteractedKorsicaTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseGameDuringSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowWaveNumForBossBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_WaveBattleAssetInfo BattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_WaveLevelAssetInfo LevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_WaveSoundAssetInfo soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_WaveDebugAssetInfo DebugInfo;
    
    HIBIKI_API FHbkMGRhythmTower_WaveAssetKindRow();
};

