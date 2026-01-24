#pragma once
#include "CoreMinimal.h"
#include "HbkBattleResultParam.h"
#include "HbkStageResultParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkStageResultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleResultParam> BattleResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalRank;
    
    HIBIKI_API FHbkStageResultParam();
};

