#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_ElectricTrapPoint.h"
#include "HbkGimmick_ElectricTrapLayout.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricTrapLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ElectricTrapPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Scale;
    
    HIBIKI_API FHbkGimmick_ElectricTrapLayout();
};

