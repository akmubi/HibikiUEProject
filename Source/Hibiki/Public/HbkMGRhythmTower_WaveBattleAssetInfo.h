#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBeginBattleParam.h"
#include "HbkMGRhythmTower_WaveBattleAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_WaveBattleAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreWaveRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginBattleParam BeginBattleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemyReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EnemyResetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FadeAfterBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PostWaveRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RhythmTowerEnd;
    
    HIBIKI_API FHbkMGRhythmTower_WaveBattleAssetInfo();
};

