#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkEm7500CheckDistanceType.h"
#include "HbkEm7500CheckDistanceInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500CheckDistanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500CheckDistanceType ApproachType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500CheckDistanceType LeaveType;
    
    FHbkEm7500CheckDistanceInfo();
};

