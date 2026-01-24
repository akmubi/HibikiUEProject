#pragma once
#include "CoreMinimal.h"
#include "EHbkDifficultyType.h"
#include "HbkHistoryOneStageResult.h"
#include "HbkHistoryStageResult.generated.h"

USTRUCT(BlueprintType)
struct FHbkHistoryStageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StageNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkHistoryOneStageResult> StageResultList;
    
    HIBIKI_API FHbkHistoryStageResult();
};

