#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_GiantRobotABeam.generated.h"

class AHbkGimmick_GiantRobotBeam;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotABeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_GiantRobotBeam> GiantRobotBeamClass00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_GiantRobotBeam> GiantRobotBeamClass01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanonBoneName;
    
    HIBIKI_API FHbkGimmick_GiantRobotABeam();
};

