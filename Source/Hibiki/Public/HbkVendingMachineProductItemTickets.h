#pragma once
#include "CoreMinimal.h"
#include "HbkMultiItemTickets.h"
#include "HbkVendingMachineProductItemTickets.generated.h"

USTRUCT(BlueprintType)
struct FHbkVendingMachineProductItemTickets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    HIBIKI_API FHbkVendingMachineProductItemTickets();
};

