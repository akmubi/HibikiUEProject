#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerTemporalStateInfo.h"
#include "HbkRhythmTowerProgress_PlayerParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmTowerProgress_PlayerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PoolMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkPlayerTemporalStateInfo TempStateInfo;
    
    HIBIKI_API FHbkRhythmTowerProgress_PlayerParam();
};

