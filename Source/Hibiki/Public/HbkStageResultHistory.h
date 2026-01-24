#pragma once
#include "CoreMinimal.h"
#include "HbkHistorySpectraRoomResult.h"
#include "HbkHistoryStageResult.h"
#include "HbkStageResultHistory.generated.h"

USTRUCT(BlueprintType)
struct FHbkStageResultHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkHistoryStageResult> StageResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkHistorySpectraRoomResult> SpectraRoomResultList;
    
    HIBIKI_API FHbkStageResultHistory();
};

