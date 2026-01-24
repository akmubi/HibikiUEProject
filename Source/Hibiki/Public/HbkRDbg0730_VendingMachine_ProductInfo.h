#pragma once
#include "CoreMinimal.h"
#include "EHbkRDbg0730_VendingMachine_ProductType.h"
#include "HbkMultiItemTickets.h"
#include "Templates/SubclassOf.h"
#include "HbkRDbg0730_VendingMachine_ProductInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkRDbg0730_VendingMachine_ProductInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRDbg0730_VendingMachine_ProductType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTicketInfo;
    
    HIBIKI_API FHbkRDbg0730_VendingMachine_ProductInfo();
};

