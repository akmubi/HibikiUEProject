#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotAnimationSlotAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotAnimationSlotAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransitionedName;
    
    HIBIKI_API FHbkGimmick_GiantRobotAnimationSlotAnim();
};

