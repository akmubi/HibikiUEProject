#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_GiantRobotACanon.generated.h"

class AHbkGimmick_GiantRobotActualArea;

USTRUCT(BlueprintType)
struct FHbkGimmick_GiantRobotACanon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanonCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanonRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_GiantRobotActualArea* DefalutActualArea;
    
    HIBIKI_API FHbkGimmick_GiantRobotACanon();
};

