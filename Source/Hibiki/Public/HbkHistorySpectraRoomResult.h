#pragma once
#include "CoreMinimal.h"
#include "HbkHistorySpectraRoomResult.generated.h"

USTRUCT(BlueprintType)
struct FHbkHistorySpectraRoomResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName SpectraRoomKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Cleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TotalRank;
    
    HIBIKI_API FHbkHistorySpectraRoomResult();
};

