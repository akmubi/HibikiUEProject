#pragma once
#include "CoreMinimal.h"
#include "EHbkVendingMachineProductType.h"
#include "HbkMultiItemTickets.h"
#include "Templates/SubclassOf.h"
#include "HbkVendingMachineProductInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkVendingMachineProductInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkVendingMachineProductType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTicketInfo;
    
    HIBIKI_API FHbkVendingMachineProductInfo();
};

