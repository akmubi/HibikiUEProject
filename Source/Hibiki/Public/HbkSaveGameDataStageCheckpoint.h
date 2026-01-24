#pragma once
#include "CoreMinimal.h"
#include "HbkSaveGameActorPool.h"
#include "HbkSaveGameData.h"
#include "HbkSaveGameMemoryPool.h"
#include "HbkSaveGameSpawnInfo.h"
#include "HbkSaveGameDataStageCheckpoint.generated.h"

UCLASS(Blueprintable)
class UHbkSaveGameDataStageCheckpoint : public UHbkSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameSpawnInfo SpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameMemoryPool MemoryPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameActorPool LevelActorPool;
    
    UHbkSaveGameDataStageCheckpoint();

};

