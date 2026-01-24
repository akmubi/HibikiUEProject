#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_BossClearBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_BossClearBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearRank_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearRank_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearRank_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearRank_C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearRank_D;
    
    HIBIKI_API FHbkMGRhythmTower_BossClearBonusInfo();
};

