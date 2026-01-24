#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTowerProgress_HighScoreParam.h"
#include "HbkRhythmTowerProgress_PermanentParam.h"
#include "HbkRhythmTowerProgress_PlayerParam.h"
#include "HbkRhythmTowerProgress_RTParam.h"
#include "HbkRhythmTowerProgressData.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTowerProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTowerProgress_RTParam RT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTowerProgress_PermanentParam Permanent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTowerProgress_PlayerParam Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkRhythmTowerProgress_HighScoreParam HighScore;
    
    HIBIKI_API FHbkRhythmTowerProgressData();
};

