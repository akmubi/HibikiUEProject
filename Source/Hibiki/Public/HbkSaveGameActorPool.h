#pragma once
#include "CoreMinimal.h"
#include "HbkSaveGamePoolEntry.h"
#include "HbkSaveGameActorPool.generated.h"

USTRUCT(BlueprintType)
struct FHbkSaveGameActorPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkSaveGamePoolEntry> Entries;
    
public:
    HIBIKI_API FHbkSaveGameActorPool();
};

