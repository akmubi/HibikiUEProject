#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BalloonPhysicsControl.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BalloonPhysicsControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDampingStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDampingEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    HIBIKI_API FHbkGimmick_BalloonPhysicsControl();
};

