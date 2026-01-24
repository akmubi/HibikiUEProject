#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkRandomPickItem.generated.h"

class UHbkItemObject;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRandomPickItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkItemObject> ItemObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FHbkRandomPickItem();
};

