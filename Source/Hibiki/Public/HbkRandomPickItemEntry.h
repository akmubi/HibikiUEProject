#pragma once
#include "CoreMinimal.h"
#include "HbkRandomPickItem.h"
#include "HbkRandomPickItemEntry.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRandomPickItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRandomPickItem> ExchangeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryCount;
    
    FHbkRandomPickItemEntry();
};

