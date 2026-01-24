#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_DropItemData.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_DropItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropTimingRate;
    
    HIBIKI_API FHbkEm6000_DropItemData();
};

