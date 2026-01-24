#pragma once
#include "CoreMinimal.h"
#include "HbkMultiItemTickets.h"
#include "HbkRDbg0730_VendingMachine_ProductItemTickets.generated.h"

USTRUCT(BlueprintType)
struct FHbkRDbg0730_VendingMachine_ProductItemTickets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    HIBIKI_API FHbkRDbg0730_VendingMachine_ProductItemTickets();
};

