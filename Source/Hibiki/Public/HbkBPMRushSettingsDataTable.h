#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkBPMRushEnemyData.h"
#include "HbkBPMRushWaveAudioData.h"
#include "HbkBPMRushWaveBattleResultScoreData.h"
#include "HbkBPMRushWaveEndCondition.h"
#include "HbkBPMRushWaveEnvData.h"
#include "HbkBPMRushWaveRhythmGaugeData.h"
#include "HbkBPMRushSettingsDataTable.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBPMRushSettingsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWaveAudioData WaveAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWaveEnvData WaveEnvData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWaveEndCondition WaveEndCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushEnemyData EnemyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWaveRhythmGaugeData WaveRhythmGaugeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWaveBattleResultScoreData BattleResultScoreData;
    
    FHbkBPMRushSettingsDataTable();
};

