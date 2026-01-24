#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_GiantRobotBeamActivateType.h"
#include "HbkGimmick_GiantRobotBeamActivateInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotBeamActivateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_GiantRobotBeamActivateType ActivateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    HIBIKI_API FHbkGimmick_GiantRobotBeamActivateInfo();
};

