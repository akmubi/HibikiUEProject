#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkRDbg0730_VendingMachine_ProductCanRate.generated.h"

class AHbkGimmick_VendingMachineCan;

USTRUCT(BlueprintType)
struct FHbkRDbg0730_VendingMachine_ProductCanRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_VendingMachineCan> CanClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    HIBIKI_API FHbkRDbg0730_VendingMachine_ProductCanRate();
};

