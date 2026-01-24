#pragma once
#include "CoreMinimal.h"
#include "HbkReserveBattleResult.generated.h"

USTRUCT(BlueprintType)
struct FHbkReserveBattleResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 BattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 GameOverCount;
    
    HIBIKI_API FHbkReserveBattleResult();
};

