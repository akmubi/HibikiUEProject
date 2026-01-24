#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkSpectraRoomExitData.generated.h"

USTRUCT(BlueprintType)
struct FHbkSpectraRoomExitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DoorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DoorCallSign;
    
    HIBIKI_API FHbkSpectraRoomExitData();
};

