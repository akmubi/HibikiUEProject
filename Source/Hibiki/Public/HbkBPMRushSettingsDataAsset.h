#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkBPMRushAudioData.h"
#include "HbkBPMRushBattleBonusData.h"
#include "HbkBPMRushRhythmGaugeData.h"
#include "HbkBPMRushWaveData.h"
#include "HbkBPMRushWidgetData.h"
#include "HbkBPMRushSettingsDataAsset.generated.h"

class UDataTable;
class UHbkBPMRushDifficultySettingsDataAsset;

UCLASS(Blueprintable)
class UHbkBPMRushSettingsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWaveData WaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushRhythmGaugeData RhythmGaugeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushBattleBonusData BattleBonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushAudioData AudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushWidgetData WidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBPMRushDifficultySettingsDataAsset* EasySettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBPMRushDifficultySettingsDataAsset* NormalSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBPMRushDifficultySettingsDataAsset* HardSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemySupplySettingsDataTable;
    
    UHbkBPMRushSettingsDataAsset();

};

