#pragma once
#include "CoreMinimal.h"
#include "HbkSaveGameData.h"
#include "HbkSaveGameMemoryPool.h"
#include "HbkSaveGameDataStageProgress.generated.h"

UCLASS(Blueprintable)
class UHbkSaveGameDataStageProgress : public UHbkSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FHbkSaveGameMemoryPool MemoryPool;
    
    UHbkSaveGameDataStageProgress();

};

