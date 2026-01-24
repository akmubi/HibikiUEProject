#pragma once
#include "CoreMinimal.h"
#include "HbkMultiItemTickets.h"
#include "HbkVendingMachine_RD_ProductItemTickets.generated.h"

USTRUCT(BlueprintType)
struct FHbkVendingMachine_RD_ProductItemTickets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    HIBIKI_API FHbkVendingMachine_RD_ProductItemTickets();
};

