#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmTower2Progress_HighScore.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTower2Progress_HighScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ClearWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ClearRank;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ScoreRate;
    
    HIBIKI_API FHbkRhythmTower2Progress_HighScore();
};

