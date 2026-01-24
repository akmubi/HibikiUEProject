#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_ElectricCoreInterlock.generated.h"

class AHbkGimmick_ElectricCoreStand;

USTRUCT(BlueprintType)
struct FHbkGimmick_ElectricCoreInterlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_ElectricCoreStand* ElectricCoreStand;
    
    HIBIKI_API FHbkGimmick_ElectricCoreInterlock();
};

