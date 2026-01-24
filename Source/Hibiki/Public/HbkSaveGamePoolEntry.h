#pragma once
#include "CoreMinimal.h"
#include "HbkSaveGamePoolEntry.generated.h"

USTRUCT(BlueprintType)
struct FHbkSaveGamePoolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> Buffer;
    
    HIBIKI_API FHbkSaveGamePoolEntry();
};

