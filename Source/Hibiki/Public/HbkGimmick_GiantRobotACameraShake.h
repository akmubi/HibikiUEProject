#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_GiantRobotAActivateInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_GiantRobotACameraShake.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotACameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ChargeCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_GiantRobotAActivateInfo> BeofreMoveActivateInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_GiantRobotAActivateInfo> AfterMoveActivateInfos;
    
    HIBIKI_API FHbkGimmick_GiantRobotACameraShake();
};

