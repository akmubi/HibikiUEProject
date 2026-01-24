#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_ElectricTrapPoint.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    HIBIKI_API FHbkGimmick_ElectricTrapPoint();
};

