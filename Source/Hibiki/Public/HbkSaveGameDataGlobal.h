#pragma once
#include "CoreMinimal.h"
#include "HbkSaveGameData.h"
#include "HbkSaveGameMemoryPool.h"
#include "HbkSaveGameSpawnInfo.h"
#include "HbkSaveGameDataGlobal.generated.h"

UCLASS(Blueprintable)
class UHbkSaveGameDataGlobal : public UHbkSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameSpawnInfo SpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameMemoryPool MemoryPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameMemoryPool MemoryPool_Latest;
    
    UHbkSaveGameDataGlobal();

};

