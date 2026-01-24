#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushProgressData.h"
#include "HbkRhythmTower2ProgressData.h"
#include "HbkRhythmTowerProgressData.h"
#include "HbkStageResultHistory.h"
#include "TngGameSystem.h"
#include "HbkProgressManager.generated.h"

UCLASS(Blueprintable)
class UHbkProgressManager : public UTngGameSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkStageResultHistory StageResultHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTowerProgressData RhythmTowerProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2ProgressData RhythmTower2ProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkBPMRushProgressData BPMRushProgressData;
    
public:
    UHbkProgressManager();

};

