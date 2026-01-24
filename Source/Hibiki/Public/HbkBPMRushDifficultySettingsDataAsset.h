#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkBPMRushBattleResultData.h"
#include "HbkBPMRushBattleResultRankData.h"
#include "HbkBPMRushDifficultyRhythmGaugeData.h"
#include "HbkBPMRushEnemyDropItemData.h"
#include "HbkBPMRushDifficultySettingsDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkBPMRushDifficultySettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushDifficultyRhythmGaugeData DifficultyRhythmGaugeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushEnemyDropItemData EnemyDropItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultData BattleResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleResultRankData BattleResultRankData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SettingsDataTable;
    
    UHbkBPMRushDifficultySettingsDataAsset();

};

