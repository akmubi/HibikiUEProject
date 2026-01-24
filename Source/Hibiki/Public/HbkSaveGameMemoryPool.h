#pragma once
#include "CoreMinimal.h"
#include "HbkSaveGamePoolEntry.h"
#include "HbkSaveGameMemoryPool.generated.h"

USTRUCT(BlueprintType)
struct FHbkSaveGameMemoryPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkSaveGamePoolEntry> Entries;
    
public:
    HIBIKI_API FHbkSaveGameMemoryPool();
};

