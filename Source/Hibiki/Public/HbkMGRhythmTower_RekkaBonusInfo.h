#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_BossClearBonusInfo.h"
#include "HbkMGRhythmTower_RekkaBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_RekkaBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase1ClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase2ClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PipeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_BossClearBonusInfo BossClear;
    
    HIBIKI_API FHbkMGRhythmTower_RekkaBonusInfo();
};

