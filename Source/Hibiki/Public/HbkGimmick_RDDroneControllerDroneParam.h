#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_RDDroneControllerDroneParam.generated.h"

class AHbkGimmick_RDDrone;

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneControllerDroneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_RDDrone> DroneClass;
    
    HIBIKI_API FHbkGimmick_RDDroneControllerDroneParam();
};

