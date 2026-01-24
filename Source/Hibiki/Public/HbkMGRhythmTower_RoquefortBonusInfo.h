#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_BossClearBonusInfo.h"
#include "HbkMGRhythmTower_RoquefortBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_RoquefortBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase1ClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase2ClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase3ClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase2TornadeClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase3TornadeClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMGRhythmTower_BossClearBonusInfo BossClear;
    
    HIBIKI_API FHbkMGRhythmTower_RoquefortBonusInfo();
};

