#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkVendingMachineProductCanRate.generated.h"

class AHbkGimmick_VendingMachineCan;

USTRUCT(BlueprintType)
struct FHbkVendingMachineProductCanRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_VendingMachineCan> CanClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    HIBIKI_API FHbkVendingMachineProductCanRate();
};

