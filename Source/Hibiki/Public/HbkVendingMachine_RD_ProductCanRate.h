#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkVendingMachine_RD_ProductCanRate.generated.h"

class AHbkGimmick_VendingMachineCan;

USTRUCT(BlueprintType)
struct FHbkVendingMachine_RD_ProductCanRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_VendingMachineCan> CanClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    HIBIKI_API FHbkVendingMachine_RD_ProductCanRate();
};

