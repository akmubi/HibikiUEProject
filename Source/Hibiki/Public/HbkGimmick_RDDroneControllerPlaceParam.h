#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_RDDroneControllerPlaceParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneControllerPlaceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetRelativeLocation;
    
    HIBIKI_API FHbkGimmick_RDDroneControllerPlaceParam();
};

