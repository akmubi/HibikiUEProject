#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_GiantRobotAActivateType.h"
#include "HbkGimmick_GiantRobotAActivateInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotAActivateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_GiantRobotAActivateType ActivateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    HIBIKI_API FHbkGimmick_GiantRobotAActivateInfo();
};

