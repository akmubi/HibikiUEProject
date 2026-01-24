#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerRDGrowthType.h"
#include "HbkRhythmTower2DebugData.h"
#include "HbkRhythmTower2PlayerGrowth.h"
#include "HbkRhythmTower2Progress_HighScore.h"
#include "HbkRhythmTower2Progress_PlayerParam.h"
#include "HbkRhythmTower2Progress_RDParam.h"
#include "HbkRhythmTower2Progress_StatsParam.h"
#include "HbkRhythmTower2Progress_Tutorial.h"
#include "HbkRhythmTower2ProgressData.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2ProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2Progress_RDParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2Progress_HighScore HighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2Progress_Tutorial Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2Progress_PlayerParam PlayerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerRDGrowthType, FHbkRhythmTower2PlayerGrowth> PlayerGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<float> LifeTankValueList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2Progress_StatsParam StatsParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTower2DebugData Debug;
    
    HIBIKI_API FHbkRhythmTower2ProgressData();
};

