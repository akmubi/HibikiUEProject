#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_GiantRobotCBeam.generated.h"

class AHbkGimmick_GiantRobotBeam;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotCBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_GiantRobotBeam> GiantRobotBeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanonBoneName;
    
    HIBIKI_API FHbkGimmick_GiantRobotCBeam();
};

