#pragma once
#include "CoreMinimal.h"
#include "HbkKaleDropItemData.generated.h"

USTRUCT(BlueprintType)
struct FHbkKaleDropItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropTimingRate;
    
    HIBIKI_API FHbkKaleDropItemData();
};

